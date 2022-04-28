#include <iostream>
#include <string>
using namespace std;

string fun(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = fun(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    return (ch +ans);
}

// Dry run:

// ch              ans
// a               abecd
// a               abecd
// a               abecd
// a               abecd    
// b               becd
// b               becd
// b               becd
// e               ecd
// e               ecd
// e               ecd
// c               cd              d != c ---------> return ch + ans =cd
// d               d               d == d ---------> return ans = d
// d               d               "" != d ---------> return ch + ans  = d
// d               ""              base condition s.length() == 0 true --------> return ans = ""

int main(){
    string s;
    cout<<fun("aaaabbbeeecddd")<<endl;
}