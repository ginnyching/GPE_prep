#include <iostream>
#include <map>

using namespace std;

int main() {
  int T=0;
  cin>>T;
  while(T--){
    int N=0;
    cin>>N;
    map<int,bool> work;
    for(int i=0;i<N;i++){
      work[i]=1;
    }
    int party=0;
    cin>>party;
    for(int i=0;i<party;i++){
      int day=0;
      cin>>day;
      for(int j=day-1;j<N;j+=day){
        if(work[j]==1 && (j%7)<5)
          work[j]=0;
      }
      
    }
    int loss=0;
    for(int i=0;i<N;i++){
      if(work[i]==0)
        loss++;
    }
    cout<<loss<<endl;
    work.clear();
  }
  return 0;
}