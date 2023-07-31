#include <bits/stdc++.h>

using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=1;i<=n;i++){
        //Spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        //Stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }

        //Spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        //Spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //Stars
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        //Spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

//https://practice.geeksforgeeks.org/problems/pattern/1
void pattern9_gfg(int n){
    //Upper Pyramid
    for(int i=0;i<n;i++){
        //Spaces
        for(int j=n-1-i;j>0;j--){
            cout<<" ";
        }
        //Stars
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        //Spaces
        for(int j=n-1-i;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }

    //Lower Pyramid
    for(int i=0;i<n;i++){
        //Spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //Stars
        for(int j=0;j<2*(n-i)-1;j++){
            if(j%2==0){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        //Spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    int stars=0;
    for(int i=0;i<2*n-1;i++){
        stars=(i>=n)?(2*n-2-i):i;
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int bin=1;
    for(int i=0;i<n;i++){
        bin=(i%2==0)?1:0;
        for(int j=0;j<=i;j++){
            cout<<bin<<" ";
            bin=1-bin;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i=0;i<n;i++){
        //Numbers
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        //Spaces
        for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        //Numbers
        for(int j=i;j>=0;j--){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0;i<n;i++){
        //Spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //Chars
        char ch='A';
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            ch=(j>=i)?(ch-1):(ch+1);
        }
        //Spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='A'+(n-i-1);ch<='A'+(n-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern19(int n){
    //Top Half
    for(int i=0;i<n;i++){
        //Stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //Spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        //Stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Bottom Half
    for(int i=n-1;i>=0;i--  ){
        //Stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //Spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        //Stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern20(int n){
    int stars,spaces=0;
    for(int i=0;i<2*n-1;i++){
        if(i<n){
            stars=i;
            spaces=2*(n-i-1);
        }else{
            stars=2*n-2-i;
            spaces=2*(i-n+1);
        }
        //Stars
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        //Spaces
        for(int j=0;j<spaces;j++){
            cout<<" ";
        }
        //Stars
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern22(int n){
    int N=2*n-1;
    int topd,bottomd,leftd,rightd,mind;
    //Here all the above are distances of a point from its top, bottom, left and right. And mind is the var to store the min of all of these
    //For the given problem we have done n-a[i][j] to understand this pattern and then undid it n-(n-a[i][j])=a[i][j] to print the expected values
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            topd=i;
            bottomd=N-1-i;
            leftd=j;
            rightd=N-1-j;
            mind=min(min(topd,bottomd),min(leftd,rightd));
            cout<<n-mind<<" ";
        }
        cout<<endl;
    }
}

void pattern22Alternative(int n){
    int N=2*n-1;
    int arr[N][N];
    int start=0,end=N;
    int dupn=n;
    while(dupn){
        for(int i=start;i<end;i++){
            for(int j=start;j<end;j++){
                if(i==start||i==end-1||j==start||j==end-1){
                    arr[i][j]=dupn;
                }
            }
        }
        start++;
        end--;
        dupn--;
    }
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        reopen("output.txt", "w", stdout);
    #endif
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        pattern22(n);
    }
    return 0;
}