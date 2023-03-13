#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
void add(double player, vector<double> &vec){
  if(vec[player]==-1)
    vec[player]=1;
  else
    vec[player]++;
  
}
void count(double player,bool status, vector<double> &win, vector<double> &game){
  if(status){
    add(player,win);
    add(player,game);
  }
  else{
    add(player,game);
    if(win[player]==-1)
      win[player]=0;
  }
}
int main() {
  int n=0,k=0;
  while(cin>>n){
    if(n==0)
      break;
    cin>>k;
    cin.ignore();
    string str;
    vector<double> win,game;
    win.insert(win.begin(),n,-1);
    game.insert(game.begin(),n,-1);
    double rounds=k*n*(n-1)/2;
    map<string,string> winner={ {"scissors","paper"},
                                {"paper","rock"},
                                {"rock","scissors"}
                              };
    map<string,string> loser={ {"scissors","rock"},
                                {"paper","scissors"},
                                {"rock","paper"}
                              };
    for(int i=0;i<rounds;i++){
      getline(cin,str);
      double p1=stod(str.substr(0,str.find(" ")))-1;
      str=str.substr(str.find(" ")+1,str.length());
      string m1=str.substr(0,str.find(" "));
      str=str.substr(str.find(" ")+1,str.length());
      double p2=stod(str.substr(0,str.find(" ")))-1;
      str=str.substr(str.find(" ")+1,str.length());
      
      if(winner[m1]==str){
        count(p1,1,win,game);
        count(p2,0,win,game);
      }
      else if(loser[m1]==str){
        count(p1,0,win,game);
        count(p2,1,win,game);
      }
      
      str.clear();
      m1.clear();
    }
    
    for(int i=0;i<n;i++){
      if(win[i]==-1)
        printf("-\n");
      else
        printf("%.3f\n",win[i]/game[i]);
    }
    win.clear();
    cout<<endl;
  }
  return 0;
}