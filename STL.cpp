#include <bits/stdc++.h>

using namespace std;

//Custom comparator like below one says if two params passed are in the correct order or not. If they are in correct order return true else return false
bool customcomp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second){return true;}
    if(p1.second>p2.second){return false;}
    if(p1.first>p2.first){
        return true;
    }
    return false;
}

int main(){
    vector<int> v1={10,20,30,40,50};
    v1.erase(v1.begin()+1,v1.begin()+5);
    for(auto it:v1){
        cout<<it<<" ";
    } //Output:{10}
    cout<<endl;

    vector<int> v2(2,100);
    v2.insert(v2.begin(),500);
    v2.insert(v2.begin()+2,3,10);
    for(auto it:v2){
        cout<<it<<" ";
    }//Output:{500,100,10,10,10,100}

    cout<<endl;
    vector<int> copy(2,50);
    v2.insert(v2.begin(),copy.begin(),copy.end());
    for(auto it:v2){
        cout<<it<<" ";
    }//Output:{50,50,500,100,10,10,10,100};

    cout<<endl;

    //Lists
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(0);
    ls.emplace_front(-1);
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ls.front()<<" "<<ls.back();
    cout<<endl;

    //Deque
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    dq.emplace_front(-1);
    dq.pop_back();
    dq.pop_front();
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<dq.front()<<" "<<dq.back()<<endl;

    //Stack =>LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl; //Returns 1 or 0 based on if the stack is empty of not 
    //stack<int>s1,s2; s1.swap(s2) to swap two stacks

    //Queue => FIFO
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}
    q.back()+=5;//{1,2,9}
    cout<<q.back()<<endl;//{9}
    cout<<q.front()<<endl;//{1}
    q.pop();
    cout<<q.front()<<endl;//{2}

    //Priority Queue => By default it is max heap i.e., Largest num, char or lexicographically largest string stays at top based on the data type used
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    cout<<pq.top()<<endl;//{10}
    pq.pop();
    cout<<pq.top()<<endl;

    
    //PriortyQueue Min Heap Version=> Which always stores the min value at the top
    priority_queue<int,vector<int>,greater<int>> pq_min;
    pq_min.push(5);//{5}
    pq_min.push(2);//{2,5}
    pq_min.push(8);//{2,5,8}
    pq_min.push(10);//{2,5,8,10}
    cout<<pq_min.top()<<endl;

    /*Set => Stores only unique values and in sorted fashion
    1.Stores information in non linear fashion (tree based)
    */
    set<int> s;
    s.insert(1);//{1}
    s.emplace(2);//{1,2}
    s.insert(2);//{1,2}
    s.insert(4);//{1,2,4}
    s.insert(3);//{1,2,3,4}

    auto it=s.find(3); //This returns an iterator pointing to the element

    it=s.find(6); //If an element is not found then it returns s.end() which corresponds to address next to the last element in the set


    s.erase(3); //Takes logarithmic time {1,2,4}

    int cnt=s.count(1); //It finds for 1 and if it exists returns 1 else 0
    
    it= s.find(4);
    s.erase(it);
    s.insert(5);
    s.insert(-1);
    s.insert(10);
    auto it1=s.find(2);
    auto it2=s.find(10);
    s.erase(it1,it2); //Erases till element before it2 address
    for(auto it:s){
        cout<<it<<" ";
    } //{-1,1,10}


    //lower_bound() and upper_bound() function work the same way as in vector
    auto it10=s.lower_bound(2);
    auto it11=s.upper_bound(1);
   //begin(),end(),rbegin(),rend(),size(),empty() and swap() are same to earlier containers

    //MultiSet: Stores the values in sorted order but also accepts duplicates
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(-1);
    ms.insert(10);
    ms.insert(2);
    ms.insert(3);
    ms.erase(ms.find(1));//Only a single 1 is erased
    ms.erase(1); //Erases all 1's
    cout<<endl;
    cnt=ms.count(1);
    auto it_adv=ms.find(1);
    advance(it_adv,2); //To move a pointer by two places
    ms.erase(ms.find(1),it_adv);

    //Unordered set -> Same as set except it stores info in unordered fashion
    //lower_bound and upper_bound functions dont work here other than that all other functions present in set work similarly
    //Most of the time for all operations it takes O(1). Worst case can go to O(N)
    unordered_set<int> uset;

    //Map
    //The keys are unique but values can be duplicate ones
    //Stores in key,value pair. And the key and value can be of any data type
    //Map stores unique keys in sorted order
    map<int,int> m1;
    map<int,pair<int,int>>m2;
    map<pair<int,int>,int>m3;
    m1[1]=2;
    m1.emplace(3,1);
    m1.insert({2,4});//[{1,2},{3,1},{2,4}]
    m3[{2,3}]=10;
    cout<<"MAP "<<endl;
    for(auto it:m1){
        cout<<it.first<<" "<<it.second<<endl;//Since the map stores info in key value pair fashion
    }
    auto map_it=m1.find(2);
    cout<<(*map_it).second <<endl;
    auto map_it_2 = m3.find({2,3});
    cout<<(*map_it_2).second<<endl;
    map_it_2=m3.find({4,5});
    if(map_it_2==m3.end()){
        cout<<"Provided key in m3 doesnot exist!"<<endl;
    }

    auto map_it_3=m1.lower_bound(2);
    auto map_it_4=m1.upper_bound(4);
    //All other functions like erase,swap,size, empty are the same

    //Multimap: Similar to map but can store duplicate keys but everything stored in sorted order
    multimap<int,int> mm1;
    
    //UnorderedMap: Similar to map but doesnt store in sorted fashion
    //Most of the time for all operations it takes O(1). Worst case can go to O(N)

    unordered_map<string,int> um1;

    //Sort
    //[start,end)
    //By default it is in ascending order
    cout<<"SORTING"<<endl;
    int arr[]={1,3,2,5,4};
    sort(arr,arr+5,greater<int>());
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    pair<int,int> pair_arr[]={{1,2},{4,5},{0,1},{3,1}};
    /*Sort the above in order of increasing second element and
    if second element is same sort in decreasing order of first element
    The answer to above would be:{{3,1},{0,1},{1,2},{4,5}}
    */
    sort(pair_arr,pair_arr+4,customcomp);

    for(auto it:pair_arr){
        cout<<"{"<<it.first<<","<<it.second<<"} ";
    }
    cout<<endl;

    //The below two methods are used to get number of 1's or set bits in binary representation of provided number
    int num=123;
    int setbitscount= __builtin_popcount(num);

    long long num2=1234567890123456789;
    int setbitscount2=__builtin_popcountll(num2);

    cout<<setbitscount<<" "<<setbitscount2<<endl;

    //Next permutation: To get all permutations of a given string one can use this. But for this to return all the values the string initially should be in sorted fashion

    string s_last="acb";
    do{
        cout<<s_last<<" ";
    }while(next_permutation(s_last.begin(),s_last.end()));
    cout<<endl;
    //The above loop just prints 5 acb bac bca cab cba . Because the string is not sorted
    
    sort(s_last.begin(),s_last.end());
    do{
        cout<<s_last<<" ";
    }while(next_permutation(s_last.begin(),s_last.end()));
    cout<<endl; 
    //This now prints all the 6 combinations abc acb bac bca cab cba 

    //To get max or min element from an array
    int maxElement=*max_element(arr,arr+5);
    int minElement=*min_element(arr,arr+5);
    cout<<maxElement<<" "<<minElement<<endl;

    return 0;
}