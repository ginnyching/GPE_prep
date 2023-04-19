#include <iostream>
#include <string>

using namespace std;
int main() {
  string a,b;
  while(cin>>a>>b){
    if(a=="0"&& b=="0")
      break;
    int la=a.length();
    int lb=b.length();
    if(la<lb){
         a.insert(0,lb-la,'0');
         la=lb;
    }
    else
      b.insert(0,la-lb,'0');
    
    int carry=0,count=0;
    for(int i=la-1;i>=0;i--){
      int cur=(a[i]-'0')+(b[i]-'0')+carry;
      if(cur>=10)
        count++;
      carry=cur/10;
    }
    if(count==0)
      cout<<"No carry operation.\n";
    else if(count==1)
      cout<<"1 carry operation.\n";
    else
      cout<<count<<" carry operations.\n";
    a.clear();
    b.clear();
  }
  
  return 0;
}