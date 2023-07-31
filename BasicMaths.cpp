#include <bits/stdc++.h>

using namespace std;

int countDigits(int N){
    //Given a number N. Count the number of digits in N which evenly divides N
    //Evenly divides mean a number leaving remainder 0 when divided
    //https://practice.geeksforgeeks.org/problems/count-digits5716/1
    int digit,num=N;
    int count=0;
    while(num>0){
        digit=num%10;
        if(digit!=0 && N%digit==0){
            count++;
        }
        num/=10;
    }
    return count;
}

long long reversedBits(long long n){
    //Given a 32 bit number X, reverse its binary form and print the answer in decimal
    // https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
    long long ans=0;
    int rem=0;
    int bits=32;
    while(bits!=0){
        rem=n%2;
        ans=ans*2+rem;
        n/=2;
        bits--;
    }
    return ans;
}

string isPalindrome(int n){
    // https://practice.geeksforgeeks.org/problems/palindrome0746/1
    int copy=n;
    int rev=0,digit=0;
    while(copy!=0){
        digit=copy%10;
        copy/=10;
        rev=rev*10+digit;
    }
    if(rev==n){
        return "Yes";
    }
    return "No";
}

string isArmstrongNumber(int n){
    //https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
    int copy=n;
    int ans=0,digit=0;
    while(copy!=0){
        digit=copy%10;
        copy/=10;
        ans=ans+pow(digit,3);
    }
    if(ans==n){
        return "Yes";
    }
    return "No";
}

vector<long long> lcmAndGcd(long long A, long long B){
    //https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
    vector<long long> res;
    long long copyA=A,copyB=B;

    //First we find gcd: gcd(a,b)=gcd(a%b,b) where a>b. We use this Euclidean algo for this
    while(copyA!=0 && copyB!=0){
        // cout<<copyA<<" "<<copyB<<endl;
        if(copyA>copyB){
            copyA=copyA%copyB;
        }else{
            copyB=copyB%copyA;
        }
    }
    if(copyA==0){
        res.push_back(copyB);
    }else{
        res.push_back(copyA);
    }

    //Lcm once gcd is found can be calculated by this formula gcd*lcm=A*B
    res.push_back((A/res[0])*B);
    reverse(res.begin(),res.end());
    return res;
}

long long sumOfDivisors(int n){
    //https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
    long long res=0;
    for (int j = 1; j <= n; j++)
    {
        res+=j*(n/j);
    }
    return res;
}

int MinNumberofJumps(int arr[],int n){
       //https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
        //Greedy O(n) approach
        int jumps=0,farthest=0,currjumpend=0;
        if(arr[0]==0){return -1;}
        for(int i=0;i<n-1;i++){
            farthest=max(farthest,i+arr[i]);
            if(i==currjumpend){
                jumps++;
                currjumpend=farthest;
            }
        }
        //cout<<currjumpend<<" "<<farthest<<endl;
        if(currjumpend<n-1){
            return -1;
        }
        return jumps;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n1,n2;
    cin>>n1>>n2;
    cout<<countDigits(n1)<<endl;
    cout<<reversedBits(n1)<<endl;
    cout<<isPalindrome(n1)<<endl;
    cout<<isArmstrongNumber(n1)<<endl;
    vector<long long> res=lcmAndGcd(n1,n2);
    cout<<res[0]<<" "<<res[1]<<endl;
    cout<<sumOfDivisors(n1)<<endl;
    int arr[n1];
    for(int i=0;i<n2;i++){
        cin>>arr[i];
    }
    cout<<MinNumberofJumps(arr,n2)<<endl;
    return 0;
}