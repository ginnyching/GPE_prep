#include <iostream>
#include <math.h>

using namespace std;
int gcd(int a,int b, int &x, int &y){
 if(a%b==0){
    x=0;
    y=1;
    return b;
  }
  else{
    int r,tx,ty;
    r=gcd(b,a%b,tx,ty);
    x=ty;
    y=-a/b*ty+tx;
    return r;
  }
}
  
int main() {
  int a=0,b=0;
  while(cin>>a>>b){
    
    int x=0,y=0,d=0;
    d=gcd(a,b,x,y);
    
    cout<<x<<" "<<y<<" "<<d<<endl;
  }
  return 0;
}