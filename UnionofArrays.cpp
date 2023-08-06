#include <bits/stdc++.h>
 
using namespace std;

//https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
//Sorted arrays as input, output is an union of both these arrays



vector<int> UnionArray(vector<int>&v1,vector<int>&v2){
    int i=0,j=0;
    vector<int> res;
    res.push_back(min(v1[0],v2[0]));
    while(i<v1.size()&& j<v2.size()){
        if(v1[i]<=v2[j]&& res[res.size()-1]!=v1[i]){
            res.push_back(v1[i]);
            i++;
        }else if(v2[j]<v1[i]&& res[res.size()-1]!=v2[j]){
            res.push_back(v2[j]);
            j++;
        }else if(res[res.size()-1]==v1[i]){
            i++;
        }else if(res[res.size()-1]==v2[j]){
            j++;
        }
    }
    while(i<v1.size()){
        if(res[res.size()-1]!=v1[i]){
            res.push_back(v1[i]);
        }
        i++;
    }
    while(j<v2.size()){
        if(res[res.size()-1]!=v2[j]){
            res.push_back(v2[j]);
        }
        j++;
    }
    return res;
}

int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
   #endif
   int n,m;
   cin>>n>>m;
   vector<int> arr1(n,0);
   vector<int> arr2(m,0);
   for(int i=0;i<n;i++){
    cin>>arr1[i];
   }
   for(int i=0;i<m;i++){
    cin>>arr2[i];
   }
   vector<int> unionArray=UnionArray(arr1,arr2);
   for(int i=0;i<unionArray.size();i++){
    cout<<unionArray[i]<<" ";
   }
   cout<<endl;
  return 0;
}