#include <iostream>
#include <map>
#include <vector>
using namespace std;

/*void format(int a){
  if(a<10)
    cout<<"  "<<a;
  else if(a<100)
    cout<<" "<<a;
  else
    cout<<a;
}*/

int main() {
  int n=0;
  vector<int> prime={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
  while(cin>>n&&n!=0){
    map<int,int> fac;
    for(int i=0;i<prime.size();i++){
      if(prime[i]<=n)
        fac[prime[i]]=0;
      else
        break;
    }
    for(int i=2;i<=n;i++){
      int cur=i;
      for(int j=0;j<fac.size();j++){
        while(cur%prime[j]==0){
          fac[prime[j]]++;
          cur/=prime[j];
        }
        if(cur==1)
          break;
      }
    }
    for(int i=0;i<fac.size();i++){
      if(i%15==0){
        if(i==0){
          printf("%3d! =",n);
          //format(n);
          //cout<<"! =";
        }
        else
          cout<<"\n      ";
      }
      printf("%3d",fac[prime[i]]);
      //format(fac[prime[i]]);
    }
    cout<<endl;
    fac.clear();
  }

  return 0;
}