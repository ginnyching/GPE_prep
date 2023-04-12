#include <iostream>

using namespace std;
int main() {
  int n=0;
  while(cin>>n && n!=0){
    
    for(int i=1;i<n;i++){
      int val=0;
      for(int j=1;j<n;j++){
        val=(val+i)%j;
      }
      if(val==11){
        cout<<i<<endl;
        break;
      }
          
    }
  }
  return 0;
}