#include<iostream>
#include<string>

using namespace std;

int main(){
  string str;
  while(getline(cin,str)){
    
    int count=0;
    bool is_word=false;
    
    for(int i=0;i<str.length();i++){
      if(('A'<=str[i]&&str[i]<='Z')||
      ('a'<=str[i]&&str[i]<='z')){
          is_word=true;
      }
      else if(is_word){
        count++;
        is_word=false;
      }
    }
    if(is_word==true)
      count++;
        
    cout<<count<<endl;
    str.clear();
  }
  
  return 0;
}