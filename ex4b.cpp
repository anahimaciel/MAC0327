#include <bits/stdc++.h>

using namespace std;

bool check(long long mid,int n, int m, int w, int a[]){ //mid is a possible value of max height of smallest flower
//let´s check how many days it takes for the smallest flower to have mid height

    long long days=0; 
    long long sum=0;
    int b[n];
    copy(a, a+n, b);

    while(b[0]<mid){
        if (days>m) return false;
        //cout << " days " << days << " \n"; 
        for (int i = 0; i < w; i++)
        {
            b[i]++;
        }
        /*for (int i = 0; i < n; i++)
        {
            cout<< " antes " << b[i] << " \n";
        }*/
        sort(b,b+n);
        days++;
        //cout<<a[0]<<" \n";
        /*for (int i = 0; i < n; i++)
        {
            cout<< " depois " <<b[i] << " \n";
        }
        cout << " days " << days << " \n";*/
    }
    //cout<< "sai"<< "\n";
    //days++;

    if (days<=m) 
        return true;
    return false;
}


int main() {
    int n,m,w;
    cin>>n>>m>>w;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    };

    sort(a,a+n);

    int min= a[0]; //minimum possible height of smallest flower is the size of the smallest flower before watering
    int max=a[0]+m; //maximum possible height of smallest flower would be achieved if we watered it every day

    long long output=0;

    //binary search
    while (min<=max) {
        long long mid=(min+max)/2;
        //cout<< "mid " << mid<<" \n";
        if(check(mid,n,m,w,a)) {
            output =mid;
            min=mid+1;
        }
        else {
            max=mid-1;
        }
        
    };
    //cout<<output<<" \n";
}