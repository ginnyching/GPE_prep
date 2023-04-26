#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n=0;
  cin>>n;

  while(n--){
    string str;
    cin>>str;
    size_t found=str.find_first_of("+*");
    vector<string> M,m;
    while(found!=string::npos){
      M.push_back(str.substr(0,found));
      M.push_back(str.substr(found,1));
      str=str.substr(found+1);
      found=str.find_first_of("+*");
    }
    M.push_back(str);
    m=M;
    //Max
    for(int i=0;i<M.size();i++){
      if(M[i]=="+"){
        M[i-1]=to_string(stoll(M[i-1])+stoll(M[i+1]));
        M.erase(M.begin()+i,M.begin()+i+2);  
        i--;
      }
    }
    for(int i=0;i<M.size();i++){
      if(M[i]=="*"){
        M[i-1]=to_string(stoll(M[i-1])*stoll(M[i+1]));
        M.erase(M.begin()+i,M.begin()+i+2);  
        i--;
      }
    }
    //min
    for(int i=0;i<m.size();i++){
      if(m[i]=="*"){
        m[i-1]=to_string(stoll(m[i-1])*stoll(m[i+1]));
        m.erase(m.begin()+i,m.begin()+i+2);  
        i--;
      }
    }
    for(int i=0;i<m.size();i++){
      if(m[i]=="+"){
        m[i-1]=to_string(stoll(m[i-1])+stoll(m[i+1]));
        m.erase(m.begin()+i,m.begin()+i+2);  
        i--;
      }
    }
    cout<<"The maximum and minimum are "<<M[0]<<" and "<<m[0]<<".\n";
  }  
  return 0;
}