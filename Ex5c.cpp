#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,l;
    int a[n];
    cin>>n>>l;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    };

    sort(a, a+n);

    int maxDif=0;

    int &MaxElement=*max_element(a,a+n);
    int &MinElement=*min_element(a,a+n);

    for (int i = 0; i < n-1; i++)
    {
        int j=i+1;
        if (abs(a[j]-a[i])>maxDif)
            maxDif=abs(a[j]-a[i]);
     
    };

    double output=maxDif/2;

    if (l-MaxElement>(maxDif/2))
        output=l-MaxElement;
    
    if(MinElement>(maxDif/2)) 
        output=MinElement;
    
    cout<<output;
}