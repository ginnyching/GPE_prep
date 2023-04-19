#include <iostream>
#include <string> 
#include <vector>

using namespace std;

int main() {
  int n=0;
  cin>>n;
  vector<string> dream;
  cin.ignore();
  while(n--){
    string str;
    getline(cin,str);
    if(str.length()!=4)
      dream.push_back(str.substr(6));
    else{
      if(str=="Test"){
        if(dream.empty())
          cout<<"Not in a dream\n";
        else
          cout<<dream[dream.size()-1]<<endl;
      }
      else{
        if(!dream.empty())
          dream.pop_back();
      }
    }
  }
  
  return 0;
}