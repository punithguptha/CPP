#include <bits/stdc++.h>

using namespace std;


int problem1(int arr[],int n,int x){
//Find the first occurence of x in a sorted array.If it doesnot exist print -1
int index=lower_bound(arr,arr+n,x)-arr;
if(index!=n && arr[index]==x){
    return index;
}
return -1;
}

int problem2(int arr[],int n,int x){
    //Find the last occurence of x in a sorted array. If it exists return the index else return -1
    int index=upper_bound(arr,arr+n,x)-arr;
    index--;
    if(index>=0 && arr[index]==x){
        return index;
    }
    return -1;
}

int problem3(int arr[],int n,int x){
    //Find the largest number smaller than X in a sorted array.If no number exists return -1
    int index=lower_bound(arr,arr+n,x)-arr;
    index--;
    if(index>=0){
        return index;
    }
    return -1;
}

int problem4(int arr[],int n, int x){
    //Find the smallest number greater than x in a sorted array. If no number exists return -1
    int index=upper_bound(arr,arr+n,x)-arr;
    if(index<n){
        return index;
    }
    return -1;
}

int main(){

    //1. To check if element exists in sorted array or not
    int A[]={1,3,5,7,11};
    int n;
    // cin>>n;
    n=6;
    bool res1=binary_search(A,A+5,n);
    vector<int> A2={1,2,3,4,5};
    bool res2=binary_search(A2.begin(),A2.begin()+A2.size(),n);
    cout<<res1<<" "<<res2<<endl;
    
    //Lower Bound
    int index1=lower_bound(A,A+5,1)-A;//{0}Returns the index of n if found
    int index2=lower_bound(A,A+5,12)-A;//{5}Returns Array size if element not found since the lower_bound function returns address of element A.end() or address next to the last element in this array example
    int index3=lower_bound(A,A+5,10)-A;//{4} Returns the immediate element bigger to the provided number if provided is not found
    int index4=lower_bound(A2.begin(),A2.end(),3)-A2.begin();
    cout<<index1<<" "<<index2<<" "<<index3<<" "<<index4<<endl;//0 5 4 2
    int indexNeg1=lower_bound(A,A+5,-1)-A; //If the element to be found is lesser than first element and not to be found it returns the address of first element in the array/vect
    cout<<indexNeg1<<endl;
    
    //Upper Bound
    int B[]={1,4,5,6,9,9};
    int index5=upper_bound(B,B+6,4)-B;//Returns the index of immediate greater element to the provided element/found element
    int index6=upper_bound(B,B+6,7)-B;//If element is not found it behaves similar to the lower_bound function
    int index7=upper_bound(B,B+6,10)-B;
    int indexNeg2=upper_bound(B,B+6,-1)-B;
    cout<<index5<<" "<<index6<<" "<<index7<<" "<<indexNeg2<<endl;//2 4 6 0

    cout<< problem1(A,5,5)<<" "<<problem1(A,5,10)<<endl;

    int samplearr[]={1,4,4,4,4,9,9,10,11};
    cout<<problem2(samplearr,9,9)<<endl;
    cout<<problem3(samplearr,9,1)<<" "<<problem3(samplearr,9,9)<<endl;
    cout<<problem4(samplearr,9,4)<<" "<<problem4(samplearr,9,2)<<" "<<problem4(samplearr,9,11)<<" "<<problem4(samplearr,9,-1)<< endl;
}