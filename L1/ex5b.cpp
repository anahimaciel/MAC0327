#include <iostream>
#include <array>
using namespace std;

long long query(int type, long long x, long long a[], int n) {
    long long sum=0;
    if (type==0) {                              //add x to even numbers in a
        for (int i = 0; i < n; i++)
        {
            if (a[i]%2==0)
            {
                a[i]=a[i]+x;
            };    
        };    
    }
    else {
        for (int i = 0; i < n; i++)
        {
            if (a[i]%2!=0)
            {
                a[i]=a[i]+x;
            };    
        };
    };
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    };
    return sum;
}


int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,q;
        cin>>n>>q;
        long long a[n];
        long long queries[q];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        };
        for (int j = 0; j < q; j++)
        {
            int type,x;
            cin>>type>>x;
            queries[j]=query(type,x,a,n);
        };
        for (int j = 0; j < q; j++)
        {
            cout<<queries[j]<<" \n";
        };
    };
}
