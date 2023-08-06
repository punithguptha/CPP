#include <bits/stdc++.h>
 
using namespace std;
 


 int largestElement(vector<int> v){
    int largest=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(largest<v[i]) largest=v[i];
    }
    return largest;
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
   cout<<"Largest Element: "<<largestElement(v)<<endl;
  return 0;
}