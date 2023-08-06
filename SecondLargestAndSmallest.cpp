#include <bits/stdc++.h>
 
using namespace std;
 

int SecondLargest(vector<int>v){
  int largest=INT_MIN;
  int secondLargest=INT_MIN;
  for(int i=0;i<v.size();i++){
    if(largest<v[i]){
      secondLargest=largest;
      largest=v[i];
    }else if(largest>v[i] && secondLargest<v[i]){
      secondLargest=v[i];
    }
  }
  return secondLargest;
}

int SecondSmallest(vector<int>v){
  int smallest=INT_MAX;
  int secondSmallest=INT_MAX;
  for(int i=0;i<v.size();i++){
    if(smallest>v[i]){
      secondSmallest=smallest;
      smallest=v[i];
    }else if(smallest<v[i] && secondSmallest>v[i]){
      secondSmallest=v[i];
    }
  }
  return secondSmallest;
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
   cout<<"Second Largest Element: "<<SecondLargest(v)<<endl;
   cout<<"Second Smallest Element: "<<SecondSmallest(v)<<endl;
  return 0;
}