#include <bits/stdc++.h>
using namespace std;

int main (){
    long long n,q;
    cin>> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    long long i,j;
    for (int k = 0; k < q; k++)
    {
        cin>>i>>j;
        int sum=0;
        for (int l=i;l<=j;l++) {
            sum+=a[l];
        };
        cout<<sum <<endl;
    } 
}
