#include <bits/stdc++.h>
 
using namespace std;


/*Selection sort takes minimum in each round of iteration and pushes to the front*/
void selectionSort(vector<int> v){
    int n=v.size();
    int min_index=0;
    int temp_var=INT_MAX;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[min_index]>v[j]){
                min_index=j;
            }
        }
        temp_var=v[i];
        v[i]=v[min_index];
        v[min_index]=temp_var;
    }

    cout<<"Printing Sorted Array via selection sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
 

/*In bubble sort we take the max element in each round of iteration and put it at the end..Somewhat opposite to Selection sort*/
 void bubbleSort(vector<int> v){
    int n =v.size();
    int temp_var=INT_MAX;
    bool didSwap=false;
    for(int i=n-1;i>=0;i--){
        didSwap=false;
        for(int j=0;j<i;j++){
            if(v[j]>v[j+1]){
                temp_var=v[j];
                v[j]=v[j+1];
                v[j+1]=temp_var;
                didSwap=true;
            }
        }
        if(!didSwap)break;
    }

    cout<<"Printing Sorted Array using Bubble Sort:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }


/*
    Iterate and for each element at outer loop put this element in correct position(by moving to the left)
    Move left if only there is a case where current element is smaller than to the element at its left
*/
 void insertionSort(vector<int> v){
    int n=v.size();
    int temp_var=INT_MAX;
    for(int i=1;i<n;i++){
        int j=i;
        while(v[j]<v[j-1] && j>0){
            //Swap both elements
            temp_var=v[j];
            v[j]=v[j-1];
            v[j-1]=temp_var;
            j--;
        }
    }
    cout<<"Printing Sorted Array using Insertion Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
   selectionSort(v);
   bubbleSort(v);
   insertionSort(v);
  return 0;
}