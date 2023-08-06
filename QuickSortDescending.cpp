#include <bits/stdc++.h>
 
using namespace std;
 


int placePivot(vector<int>&v,int low,int high){
    int pivot=v[low];
    int i=low,j=high,temp;
    while(i<j){
        while(pivot<=v[i]&& i<high){
            i++;
        }
        while(pivot>v[j]&&j>low){
            j--;
        }
        if(i<j){
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    v[low]=v[j];
    v[j]=pivot;
    return j;
}

void QuickSort(vector<int>&v,int low,int high){
    if(low>high) return;
    int partitionIndex=placePivot(v,low,high);
    QuickSort(v,low,partitionIndex-1);
    QuickSort(v,partitionIndex+1,high);
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
   QuickSort(v,0,n-1);
   cout<<"Array after applying Quick Sort in Descending Order: "<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
  return 0;
}