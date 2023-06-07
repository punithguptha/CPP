#include <bits/stdc++.h>

using namespace std;

void modifyArray(int arr[],int arrlen){
    arr[arrlen-1]=15;
    cout<<"Last integer inside function: "<<arr[arrlen-1]<<endl;
    
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Last integer inside main function before call: "<<arr[n-1]<<endl;
    modifyArray(arr,n);
    cout<<"Last integer inside main function after call: "<<arr[n-1]<<endl;
    return 0;
}