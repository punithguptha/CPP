#include <bits/stdc++.h>

using namespace std;


bool comparator(pair<int,int> p1,pair<int,int> p2){
   if(p1.second>p2.second){
    return true;
   }else if(p1.second==p2.second && p1.first>p2.first){
    return true;
   }
   return false;
}

vector<int> topK(vector<int>& nums, int k) {
    //https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
    vector<int> res(k,0);
    vector<pair<int,int>> temp;
    unordered_map<int,int>ump;
    for(int i=0;i<nums.size();i++){
        ump[nums[i]]++;
    }
    for(auto it:ump){
        temp.push_back(it);
    }
    sort(temp.begin(),temp.end(),comparator);
    for(int i=0;i<k;i++){
        res[i]=temp[i].first;
    }
    return res;
}

int maxFrequency(vector<int>&nums,int k){
    //https://leetcode.com/problems/frequency-of-the-most-frequent-element/
    sort(nums.begin(),nums.end());
    int start=0,end=1,res=1;
    long long sum=0;
    for(end=0;end<nums.size();end++){
        sum+=nums[end];
        while(((long long)(end-start+1)*(long long)(nums[end])-sum)>k){
            sum-=nums[start];
            start++;
        }
        res=max(res,(end-start+1));
    }
  return res;  
}


void frequencyCount(vector<int>&arr, int N,int P){
    //https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
    //In O(N) TC and O(1) SC
    for(int i=0;i<N;i++){
        arr[i]--;
    }
    for(int i=0;i<N;i++){
        int index=arr[i]%P;
        int res=arr[index]+P;
        arr[index]=res;
    }
    for(int i=0;i<P;i++){
        arr[i]/=P;
    }
    for(int i=P;i<N;i++){
        arr[i]=0;
    }
}

int main(){
    int N,P;

    cin>>N>>P;
    vector<int> input(N,0);
    for(int i=0;i<N;i++){
        cin>>input[i];
    }
    // frequencyCount(input,N,P);
    // for(auto it:input){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // vector<int> input2(N,0);
    // for(int i=0;i<N;i++){
    //     cin>>input2[i];
    // }
    // vector<int> res=topK(input2,P);
    // for(auto it:res){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    cout<<maxFrequency(input,P)<<endl;

    return 0;
}