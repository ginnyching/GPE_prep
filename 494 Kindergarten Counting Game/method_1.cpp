#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
  string str;
  while(getline(cin,str)){
    str+=" ";
    int count=0;
    while(str.find(" ")!=-1){
      string str1=str.substr(0,str.find(" "));
      //split by space and check if it belongs to "word"
      while(str1.length()!=0){
        bool is_word=false;
        for(int i=0;i<str1.length();i++){
          if(('A'<=str1[i]&&str1[i]<='Z')||
          ('a'<=str1[i]&&str1[i]<='z')){
              is_word=true;
          }
          //careful of the type word\\word
          else{
            str1=str1.substr(i+1,str1.length());
            break;
          }
          if(i==str1.length()-1)
            str1.clear();
        }
        if(is_word==true){
          count++;
        }    
      }
      str=str.substr(str.find(" ")+1,str.length());
      
    }
    cout<<count<<endl;
    str.clear();
  }
  
  return 0;
}