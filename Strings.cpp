#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        reopen("output.txt", "w", stdout);
    #endif
    string s="Hello World!";
    cout<<"Length of string is: "<<s.size()<<endl;
    s[s.size()-1]='.';
    cout<<"Modified String is: "<<s<<endl;
    return 0;
}