#include <iostream>
//#include <algorithm>
#include <cstring>
using namespace std;

int main() {
  int n=0,m=0;
  bool status[1000001];
 
  
  while(cin>>n>>m){
    //0->lose,1->win
    memset(status,0,sizeof(status));
    int move[10]={0};
    
    for(int i=0;i<m;i++){
      cin>>move[i];
    }
    //sort(move,move+m);
    for(int i=1;i<=n;i++){
      for(int j=0;j<m;j++){
        if(i-move[j]>=0&&status[i-move[j]]==0){
          status[i]=1;
        }
      }  
    }
    
    if(status[n]==1)
      cout<<"Stan wins\n";
    else
      cout<<"Ollie wins\n";
  }
  return 0;
}