
``` c++
#include <bits/stdc++.h> 
//Includes all the libraries that are required for running a CPP program.So including this one thing is enough 
```

---
**Data Types:**<br>
Integer => int, long, long long
Decimal => float, double, long double
Chars and Strings=>string,  getline(cin,myvariable)
getline takes the whole line as input till it encounters a break/new line
char variable is declared in single quotes wheras string in double quotes

---
**Functions are set of code which performs something for you.  
Functions are used to:  
1. Modularize code
2. To increase readability
3. Execute same code multiple times
** 


> Arrays always get passed by reference.So &(ampersand) not needed while passing them for using them as referenced values

---
**Time Complexity:**
1. *Defn:* &nbsp; Rate at which the time taken increases with respect to the input time
2. To be computed always based on worst case scenario(Big O notation)
3. To avoid constants during computation
4. Theta Complexity:&nbsp;Average Complexity
5. Omega Complexity:&nbsp; Best Case
```c++
   for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            cout<<"Hello World"<<endl;
        }
    }
    //This code block has complexity O(N^2). Or exact one will be O(N*(N+1)/2)
```
**Space Complexity:**
1. *Defn:* &nbsp;Auxilliary Space(Space taken to solve the problem) + Input space(Space taken to store the input)
&nbsp;

   >*Note:*&nbsp; Never try to modify the inputs until the interviwer says so..Although it requires less space to reuse the given input vars, it is not considered a good practice in terms of software engineering. 
2. The space complexity also similar to Time Complexity is calculated in terms of Big O notation(worst case) 
3. During submitting code to online coding platforms roughly the time taken will look like this
   <ul> 
    <li>10^8 Operations -> 1second </li>
    <li>2* 10^8 Operations -> 2seconds </li>
    <li>3* 10^8 Operations -> 3seconds </li>
    ..
   </ul>
   So if some online judge expects the problem to be done under 1s, the complexity must roughly look O(10^8)
---
**Patterns:**

*Steps:*

1. For the outer loop count the number of lines
2. For inner loop focus on the columns and connect them somehow to the rows
3. Print the character(*,# etc) inside the inner loop
4. Observe symmetry in some cases(optional)    
   
*Observations:*
1. Decide whether to use 1 based indexing or 0 based according to what makes problem solving easy
2. 
```c++
num=1-num;
//The above line will make num value from 1 to zero and zero to 1 alternatively.
```
---
**STL:**

*Iterator:* Points to the memory where that element is located
```c++
//Pairs Declaration and usage
pair<int,int> p1={1,2};
cout<<p1.first<<" "<<p1.second<<endl;
pair<int,pair<int,int>>p2={1,{2,3}};
cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
pair<int,int>arr[]={{1,2},{3,4},{5,6}};
cout<<arr[1].second<<endl;

//Vector =>This is a container
vector<int>v; //=>Creates an empty container{}
v.push_back(1); //=>{1}
v.emplace_back(2);//=>{1,2} Same as push_back but is faster than push_back
vector<pair<int,int>> v2;
v2.push_back({1,2});
v2.emplace_back(1,2); //This doesnot need the curly braces unlike push_back above

vector<int>v3(5,100);//Container with size 5 with all values 100
vector<int>v4(5);//Container with size 5, with values as 0 by default and sometimes garbage values based on the compiler
vector<int>v5(v3); //this creates a copy of v3 vector during initialisation itself;
vector<int>::iterator it=v3.begin(); //Syntax to declare iterator. datatype followed by double colon followed by iterator and then the iterator name
cout<<*it<<endl; //This is how we can access the value of the element located at iterator specified memory
it=it+2; it++;
vector<int>::iterator it_1=v3.end(); //=>End always points to memory location right after the last element. So to access last element it will be *(it_1-1) in this case; 
vector<int>::iterator it_2=v3.rend();//=> Points to element to the left of first element
vector<int>::iterator it_3=v3.rbegin();//=> Points to the last element location..But during iteration it prints in reverse fashion it_3++ gives us last but one element

cout<<v3.back()<<endl; //Prints the last element in v3 vector

//Iterating through vectors --Start

for(vector<int>::iterator it=v3.begin();it!=v3.end();it++){
   cout<<*(it)<<" ";
}

//Here auto is iterator type
for(auto it=v3.begin();it!=v3.end();it++){
   cout<<*(it)<<" ";
}

for(auto it:v3){ //Here auto refers to int
   cout<<it<<" ";
}

//Iterating through vectors -- End

//Deletion in vector --Start

v3={10,12,13,14,15};
v3.erase(v3.begin()+1); //Takes input as address of element which is to be deleted {10,13,14,15}
v3.erase(v3.begin()+1,v3.begin()+4);//The second parameter should be the address of the element next to the last element which you want to remove{10}

//Deletion in vector --End

//Insert Function --Start

vector<int>v(2,100);//{100,100}
v.insert(v.begin(),300);//{300,100,100} Inserts 300 at the beginning
v.insert(v.begin()+2,3,10);//Inserts 10 three times starting from first 100{300,100,10,10,10,100};

vector<int> copy(2,50);
v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,100,10,10,10,100}
//Insert Function --End

v.size(); //Gives the number of elements in vector
v.pop_back(); //Pops the last element {50,50,300,100,10,10,10}
v.swap(copy); //Makes v={50,50} copy={50,50,300,100,10,10,10}
v.clear(); //Clears the entire vector and makes it an empty vector {};
v.empty(); //=> Used to check if a vector is empty. Returns true or false. Here it will be true

vector<int>vbin={1,2,3,4,5};
bool res1=binary_search(vbin.begin(),vbin.end(),4);//Returns 1 or 0 if the element is found or not. The range is [startAddress,endAddress), so endAddress should be next element to last element that you want to your range to end 
bool res2=binary_search(vbin.begin(),vbin.end(),10);
cout<<res1<<" "<<res2<<endl; //Prints 1 0

//List
list<int> ls;
ls.push_back(1);//{1}
ls.emplace_back(2);//{1,2}
ls.push_front(0);//{0,1,2}
ls.emplace_front(-1);//{-1,0,1,2}
//Rest all like begin, end,rbegin,rend,clear,insert,size,swap are all similar to vector

//Deque
deque<int>dq;
dq.push_back(1);//{1}
dq.emplace_back(2);//{1,2}
dq.push_front(0);//{0,1,2}
dq.emplace_front(-1);//{-1,0,1,2}

dq.pop_back();
dq.pop_front();
dq.back();
dq.front();
//Rest all like begin, end,rbegin,rend,clear,insert,size,swap are all similar to vector

//Stack => LIFO
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(3);
st.emplace(5);
cout<<st.top()<<endl;//{5}
st.pop();
cout<<st.top()<<endl;//{3}
cout<<st.size()<<endl;//{4}
cout<<st.empty()<<endl; //Returns 1 or 0 based on if the stack is empty of not 
//stack<int>s1,s2; s1.swap(s2) to swap two stacks

//Queue
queue<int> q;
q.push(1);//{1}
q.push(2);//{1,2}
q.emplace(4);//{1,2,4}
q.back()+=5;//{1,2,9}
cout<<q.back()<<endl;//{9}
cout<<q.front()<<endl;//{1}
q.pop();
cout<<q.front()<<endl;//{2}
//size swap empty all same as stack

//Priority Queue => By default it is max heap i.e., Largest num, char or lexicographically largest string stays at top based on the data type used
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    cout<<pq.top()<<endl;//{10}
    pq.pop();
    cout<<pq.top()<<endl;//{8}

//PriortyQueue Min Heap Version=> Which always stores the min value at the top
    priority_queue<int,vector<int>,greater<int>> pq_min;
    pq_min.push(5);//{5}
    pq_min.push(2);//{2,5}
    pq_min.push(8);//{2,5,8}
    pq_min.push(10);//{2,5,8,10}
    cout<<pq_min.top()<<endl; //{2}

/*PriorityQueue
1.By default it is max heap(largest value is stored at first)
2.Internally it is not stored linearly but in a tree
3.size swap and empty are similar to other containers
4.Push Operation happens in O(logn)
5.Pop and top happens in O(1)
/*

/*Set => Stores only unique values and in sorted fashion
1.Stores information in non linear fashion (tree based)
2.Everything works in logarithmic time complexity
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
    auto it3=s.lower_bound(2);
    auto it4=s.upper_bound(1);


```
*Note:*
1. Insert in C++ are costlier than list's push_front operation
2. For vector a singly linked list is used in its implementation wheras for list it is doubly linked list. Thats why the difference in complexity of insert vs push_front
3. For more clarity on bounds usage and binary Search refer to BinarySearchAndBounds.cpp file
4.  
---

**Basic Maths:**
Euclidean Algorithm: To find gcd of two numbers. Its states that
>gcd(a,b)=gcd(a-b,b) where a>=b &nbsp;
*Better version:*
>gcd(a,b)=gcd(a%b,b) where a>=b;

We keep on doing this until one of them turns 0, then the other one at this point will be the gcd|hcf


---
**Recursion:** When a function calls itself until a specified condition is met.

Notes: &nbsp;
1.  Stackoverflow occurs when infinite recursions occur,since each function call is preserved in stack memory until that is executed and the stack never gets cleared out
2.  Space complexity generally is deduced by max stack space that is being taken at any point of time
3.  Code written after a recursive function call is referred to as backtracking
4.  Two Approaches for Recursion:
    1.  Parameterised Recursion: In here the return statement does nothing but return on the base condition, and the parameter contains the value which we need.
    2.  Functional Recursion: Here the return statement returns some value which is again used by other callers.
5. Always make a habit to write a recursive tree. This helps in calculating the TC as well and also in understanding the problem clearly.
6. Try to pass values as references to a recursive call when you are not trying to modify inputs/print to an output var, which will save up the time of copying vars for each recursive call
---
**Hashing:** Prestoring/Fetching

```c++
//This is to initialize array with all its values to 0
int arr1[10]={0};

//Globally max size that an integer array can take is 10^7, as shown below..If more than that it will throw a segmentation fault
int arr2[1e7]={0};



int main(){
    int arr[10000000];={}//This will throw a segmentation fault, because inside int main max size that can be allocated to integer array is 10^6 aka 1e6
    char ch;
    cin>>ch;
    int charArr1[26]={0};
    int charIndex=ch-'a'; //Gives the index for array of the character ch
    int charArr2[256]={0};//This is another method to hash all the characters..For this we dont need to do ch-'a'. just charArr2[ch]++ will work

    unordered_map<int,int>ump;
    vector<pair<int,int>>temp;
    for(auto it:ump){
        temp.push_back(it);//This syntax will push the key value pairs of unordered map into vector. Example of combination usage of vectors and maps
    }
}
```
Notes: &nbsp;
1. Ascii: 48(digits), 65(UpperCase Alphabets), 97(Lowercase Alphabets)
2. Hashing can be done by using arrays as well. But arrays have limitations in how much it can store as explained above
3. Hashing can also be achieved using maps.
   1. Using ordered_map (which stores the keys in sorted order) time complexity for all operations is O(logN)
   2. The default value for a map<int,int>'s key will be 0.
   3. Using unordered_map time complexity on average and best is O(1). But as name suggests it doesnot store the keys in ordered fashion. 
   4. The worst case for unordered_map is O(N)(But it doesnt happen in general). So prefer using this, and if it doesnt work, use the ordered map.This worst case occurs when there are internal Collisions
4. Hashing in maps works by these principles:
   1. Division method
   2. Folding method
   3. Mid Square method
5. >For map the key can be any data structure like pair<int,int> etc but for unordered_map the key cant be simple data types like int,char,string etc. Complex or custom datatypes are not allowed as keys here.
6. When map should be sorted based on some particular condition, we can as shown in the above code example input its values into vector and sort the vector using custom comparator logic(Example is in BasicHashing.cpp topK function)
---