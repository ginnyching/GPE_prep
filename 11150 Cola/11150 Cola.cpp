#include <iostream>


using namespace std;

int main() {
  int n=0;
  while(cin>>n){
    int drink=0;
    while(n>2){
      int get=n/3;
      drink+=3*get;
      n%=3;
      n+=get;
    }
    if(n==2)
      drink+=3;
    else if(n==1)
      drink++;
    cout<<drink<<endl;
  }
  /*method2:
  cout<<n*3/2<<endl;
  */
  return 0;
}