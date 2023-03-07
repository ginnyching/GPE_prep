#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
  int m=0,n=0;
  string str;
  map<string,int> job;
  cin>>m>>n;
  while(m--){
    int sal;
    cin>>str>>sal;
    job[str]=sal;
    str.clear();
  }
  for(int i=0;i<n;i++){
    int total=0;
    while(cin>>str&&str!="."){
      total+=job[str];
    }
    cout<<total<<endl;
  }
  return 0;
}
