#include <bits/stdc++.h>
 
using namespace std;
 

void reverseVector(vector<int> &v, int start, int end){
    int temp=0;
    while(start<end){
        temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
}

void leftRotate(vector<int> v,int k){
    int n=v.size();
    k=k%n;
    reverseVector(v,0,k-1);
    reverseVector(v,k,n-1);
    reverseVector(v,0,n-1);
    cout<<"Vector after left Rotating by "<<k<<" times: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void rightRotate(vector<int> v,int k){
    int n=v.size();
    k=k%n;
    reverseVector(v,0,n-1);
    reverseVector(v,0,k-1);
    reverseVector(v,k,n-1);
    cout<<"Vector after right Rotating by "<<k<<" times: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void rightRotatev2(vector<int> v, int k){
    //This is based on the fact that right rotate by k times is effectively left rotate by n-k times
    int n=v.size();
    k=k%n;
    leftRotate(v,n-k);
}


int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
   int n,k;
   cin>>n;
   vector<int>v(n,0);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   cin>>k;
   leftRotate(v,k);
   rightRotate(v,k);
   rightRotatev2(v,k);
  return 0;
}