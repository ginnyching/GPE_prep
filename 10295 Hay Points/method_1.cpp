#include <iostream>
#include <string>
#include <vector>
//#include<algorithm>
using namespace std;

/*bool cmp(pair<string,int> a, pair<string,int> b){
  return a.first<b.first;
}*/

int try_1() {
  int m=0,n=0;
  cin>>m>>n;
  vector<pair<string,int>> dic;
  //vector<string> des;
  string str;
  for(int i=0;i<m;i++){
    int sal=0;
    cin>>str>>sal;
    dic.push_back({str,sal});
    str.clear();
  }
  
  //sort(dic.begin(),dic.end(),cmp);
  string period=".";
  string str_1;
  for(int i=0;i<n;i++){
    double sum=0;
    getline(cin,str_1);
    while(str_1.compare(period)!=0){
      //cout<<str_1<<endl;
      str+=" "+str_1;
      str_1.clear();
      getline(cin,str_1);
    }
    str_1.clear();
    
    //des.push_back(str);
    for(int i=0;i<dic.size();i++){
      while(1){
        size_t found=str.find(dic[i].first);
        //not found
        if(found==string::npos)
          break;
        //cout<<found <<" "<<dic[i].first.length()<<endl;
        sum+=dic[i].second;
        
        str.erase(found,dic[i].first.length()+1);
        
        //cout<<str<<endl;
        //break;
      }
    }
    cout<<sum<<endl;
    str.clear();
  }

  
  
  return 0;
}