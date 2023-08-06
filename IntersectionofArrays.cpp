#include <bits/stdc++.h>
 
using namespace std;
 

//Input: Two sorted Arrays
//Ouput: Intersection of two arrays


vector<int> IntersectionArray(vector<int>&v1,vector<int>&v2){
    vector<int> res;
    int i=0,j=0;
    while(i<v1.size()&& j<v2.size()){
        if(v1[i]==v2[j]){
            res.push_back(v1[i]);
            i++;
            j++;
        }else if(v1[i]>v2[j]){
            j++;
        }else if(v2[j]>v1[i]){
            i++;
        }
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

   vector<int> intersectionArray=IntersectionArray(arr1,arr2);
   for(int i=0;i<intersectionArray.size();i++){
    cout<<intersectionArray[i]<<" ";
   }
   cout<<endl;
  return 0;
}