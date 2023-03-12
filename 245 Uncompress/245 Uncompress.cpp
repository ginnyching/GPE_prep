#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  string str,out;
  vector<string> word;
  bool alphabet=0,integer=0;
  while(getline(cin,str)){
    if(str=="0")
      break;
    string cur,num;
    for(int i=0;i<=str.length();i++){
      //alphabet
      if((str[i]<='z'&&str[i]>='a')||(str[i]<='Z'&&str[i]>='A')){
        alphabet=1;
        cur+=str[i];
      }
      //integer
      else if(str[i]>='0'&& str[i]<='9'){
        integer=1;
        num+=str[i];
      }
      //non-alphabet
      else{
        if(integer==1){
          //num.c_str() if 'std::invalid_argument' what(): stoi occurred
          int id=stoi(num,nullptr,10);
          num=word[id-1];
          out+=num+str[i];
          word.erase(word.begin()+id-1);
          word.insert(word.begin(),num);
          num.clear();
          integer=0;
        }
        
        else if(alphabet==1){
          word.insert(word.begin(),cur);
          out+=(cur+str[i]);
          alphabet=0;
          cur.clear();
        }
      else
        out+=str[i];  
      }
    }
    cout<<out<<endl;
    out.clear();
  }
  
  return 0;
}