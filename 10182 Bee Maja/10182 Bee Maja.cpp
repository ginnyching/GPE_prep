#include <iostream>
#include <map>


using namespace std;

int main() {
  int n=0;
  //>maja(i,0)->willi
  map<int,int> cor;
  //n<100000, sqrt(100000/6)~=183
  for(int i=0;i<185;i++){
    cor[i]=6*(1+i)*i/2+1;
  }
  
  while(cin>>n){
    int x=0,y=0,start=0;
    bool end_of_round=0;
    for(const auto &m: cor){
      if(n<m.second){
        x=m.first-1;
        start=cor[x];
        break;
      }
      else if(n==m.second){
        end_of_round=1;
        cout<<m.first<<" 0\n";
        break;
      }
    }
    if(!end_of_round){
      int max=x+1;
      for(int i=0;i<n-start;i++){
        if(i<max){
          y++;
          x=max-y;
        }
        else if(i<2*max){
          x--;
        }
        else if(i<3*max){
          y--;
        }
        else if(i<4*max){
          x++;
          y=-max-x;
        }
        else if(i<5*max){
          x++;
        }
        else{
          y++;
        }
      }
      cout<<x<<" "<<y<<endl;
    }
  }
  return 0;
}