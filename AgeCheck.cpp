#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult"<<endl;
    }else{
        cout<<"You are not an adult"<<endl;
    }
    return 0;
}