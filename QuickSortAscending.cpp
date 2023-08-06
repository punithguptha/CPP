#include <bits/stdc++.h>
 
using namespace std;



int placePivot(vector<int>&v,int low, int high){
    int pivot=v[low];
    int temp=0;
    int i=low,j=high;
    while(i<j){
        while(v[i]<= pivot && i<=high-1){
            i++;
        }
        while(v[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            //Swap Logic
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    //Putting out pivot Element to its correct element by swapping
    v[low]=v[j];
    v[j]=pivot;
    return j;
}


void quickSort(vector<int>&v, int low, int high){
    if(low>=high) return;
    int pivotIndex=placePivot(v,low,high);
    //We are not considering the pivotIndex element since the logic in itself is putting the pivot index element in its correct position.
    quickSort(v,low,pivotIndex-1);
    quickSort(v,pivotIndex+1,high);
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
   quickSort(v,0,n-1);
   cout<<"Array after applying Quick Sort in Ascending Order: "<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
  return 0;
}