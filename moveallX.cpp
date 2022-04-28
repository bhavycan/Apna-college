#include<iostream>
#include<string>
using namespace std;

string fun(string s){
if(s.length()==0){
    return "";
}
char ch = s[0];
string ans = fun(s.substr(1));
if(ch == 'x'){
    return ans +ch;
}
return ch +ans;
}


// ch              ans

// a               xbcdxxxbfg
// x               bcdxxxbfg
// b               cdxxxbfg
// c               dxxxbfg
// d               xxxbfg          return bfgxxx
// x               xxbfg           return bfgxx        ans + ch
// x               xbfg            return bfgx         ans + ch
// x               bfg             return bfg          ch + ans
// b               fg              return fg           ch + ans
// f               g               return f            ch + ans
// g               ""              return "" 
int main(){
 string s = "axbcdxxxbfg";
 cout<<"The updated string : "<<fun(s)<<endl;
 return 0;   
}