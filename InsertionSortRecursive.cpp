#include <bits/stdc++.h>
 
using namespace std;
 
void InsertionSort(vector<int>&v, int index){
    if(index==v.size()) return;
    int temp=0;
    int tempIndex=index;
    while(index>0 && v[index]<v[index-1]){
        temp=v[index];
        v[index]=v[index-1];
        v[index-1]=temp;
        index--;
    }
    InsertionSort(v,tempIndex+1);
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
   InsertionSort(v,0);
   cout<<"Array after applying Insertion sort recursively:"<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
  return 0;
}