#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string str,left,right;
  int n=0;
  vector<int> S,V;
  while(cin>>str>>n){
    //if(str.length()<7)
      //break;
    S.clear();
    V.clear();
    while(!str.empty()){
      size_t found=str.find_last_of("+*");
      //consider only the left part since rest of the right part are ']' after the first split.
      left=str.substr(0,found);
      
      //find the value of m
      string l=left.substr(left.find_last_of("[")+1,left.length());
      int m=stoi(l,nullptr,10);
      
      if(str[found]=='+'){
        //calculate V for each []
        for(int i=0;i<n;i++){
          //establish the original S
          if(S.empty()){
            right=str.substr(found+2,str.length());
            string r=right.substr(0,right.find_first_of("]"));
            int s=stoi(r,nullptr,10);
            
            //insert(position, size,value)
            S.insert(S.begin(),n,s);
          }
          if(i==0)
            V.push_back(m);
          else
            V.push_back(V[i-1]+S[i-1]);
        }
      }
        
      else{
        for(int i=0;i<n;i++){
          if(S.empty()==true){
            right=str.substr(found+2,str.length());
            string r=right.substr(0,right.find_first_of("]"));
            int s=stoi(r,nullptr,10);
            S.insert(S.begin(),n,s);
          }
          if(i==0)
            V.push_back(m*S[0]);
          else
            V.push_back(V[i-1]*S[i]);
        } 
      }
      str=left.substr(0,left.find_last_of("["));
      S=V;
      V.clear();
    }
    for(int i=0;i<n;i++){
      if(i==n-1)
        cout<<S[i]<<endl;
      else
        cout<<S[i]<<" ";
    }
  }
  return 0;
}