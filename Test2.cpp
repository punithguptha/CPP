#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        reopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n<<" is an even number"<<endl;
    }else{
        cout<<n<<" is an odd number"<<endl;
    }
    return 0;
}