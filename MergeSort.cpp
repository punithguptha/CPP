#include <bits/stdc++.h>
 
using namespace std;
 


void merge(vector<int>& v,int low,int high){
    vector<int> temp;
    int mid=low+(high-low)/2;
    int leftP=low,rightP=mid+1;
    while(leftP<=mid&&rightP<=high){
        if(v[leftP]<=v[rightP]){
            temp.push_back(v[leftP]);
            leftP++;
        }else{
            temp.push_back(v[rightP]);
            rightP++;
        }
    }
    while(leftP<=mid){
        temp.push_back(v[leftP]);
        leftP++;
    }
    while(rightP<=high){
        temp.push_back(v[rightP]);
        rightP++;
    }

    for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
}

void mergeSort(vector<int>&v, int low, int high){
    if(low>=high)return;
    int mid=low+(high-low)/2;
    mergeSort(v,low,mid);
    mergeSort(v,mid+1,high);
    merge(v,low,high);
}

int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
   int n;
   cin>>n;
   vector<int> v(n,0);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   mergeSort(v,0,n-1);

   cout<<"Array after applying Merge Sort:"<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
  return 0;
}