#include <bits/stdc++.h>
 
using namespace std;
 

void bubbleSort(vector<int>&v,int end){
    if(end<=0) return;
    int temp=0;
    for(int i=0;i<end;i++){
        if(v[i]>v[i+1]){
            temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }
    }
    bubbleSort(v,end-1);
}

int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
   int n;
   cin>>n;
   vector<int>v(n,0);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   bubbleSort(v,n-1);
   cout<<"Array after applying bubble sort recursively:"<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
  return 0;
}