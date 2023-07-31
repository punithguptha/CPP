#include <bits/stdc++.h>

using namespace std;


void problem1(int N){
    //https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1
    if(N==0){
        return;
    }
    problem1(N-1);
    cout<<N<<" ";
}

void problem2(int N){
    //https://practice.geeksforgeeks.org/problems/print-gfg-n-times/1
    if(N==0){
        return;
    }
    problem2(N-1);
    cout<<"GFG ";
}

void problem3(int N){
    //https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1
    if(N==0){
        return;
    }
    problem1(N-1);
    cout<<N<<" ";
}

void problem4(int N){
    //https://practice.geeksforgeeks.org/problems/print-n-to-1-without-loop/1
    if(N==0){
        return ;
    }
    cout<<N<<" ";
    problem4(N-1);
}

long long problem5(long long N){
    //https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
    if(N==1) return 1;
    return N*N*N+problem5(N-1);
}

vector<long long> problem7(long long N){
    //https://practice.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0
    vector<long long> res;
    long long num=1;
    res.push_back(num);
    for(int i=2;i<=N;i++){
        num*=i;
        if(num<N) res.push_back(num);
        else break;
    }    
    return res;
}

void problem8Sub(vector<char> &s,int i){
    if(i>=s.size()/2)return;
    swap(s[i],s[s.size()-1-i]);
    problem8Sub(s,i+1);
}

void problem8(vector<char> &s){
    //https://leetcode.com/problems/reverse-string/
    problem8Sub(s,0);
    for(auto it:s){
        cout<<it<<" ";
    }
}

int problem9Sub(string &s,int i){
    if(i>=s.size()/2){
        return 1;
    }
    if(s[i]!=s[s.size()-i-1]){
        return 0;
    }
    return problem9Sub(s,i+1);
}

int problem9(string s){
    //https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
    return problem9Sub(s,0);
}

long long problem10Sub(long long i){
    if(i<=1){
        return 1;
    }
    long long res1=problem10Sub(i-1);
    long long res2=problem10Sub(i-2);
    return res1+res2;    
}
vector<long long> problem10(int N){
    //https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
    vector<long long> res;
    for(int i=0;i<N;i++){
        res.push_back(problem10Sub(i));
    }
    return res;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        reopen("output.txt", "w", stdout);
    #endif
    int N;
    cin>>N;
    problem1(N);
    cout<<endl;
    problem2(N);
    cout<<endl;
    problem4(N);
    cout<<endl;
    cout<<problem5(N)<<endl;
    vector<long long> res1=problem7(N);
    for(auto it:res1){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<char> s(N,'a');
    for(int i=0;i<N;i++){
        cin>>s[i];
    }
    problem8(s);
    cout<<endl;
    string s1;
    cin>>s1;
    cout<<s1<<endl;
    cout<<problem9(s1)<<endl;
    vector<long long> res2=problem10(N);
    for(auto it:res2){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}