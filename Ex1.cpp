#include <bits/stdc++.h>

using namespace std;

bool check(long long mid, int a[], int n, int k){ //checks if mid is a possible maximum sum of subarray
    int numDiv=0; //number of subarrays
    long long sum=0;    //sum of subarray

    for (int i = 0; i < n; i++)
    {
        if(a[i]>mid) 
            return false;   //if there is any element greater than mid, mid cannot be the maximum sum 
        sum+=a[i];          
        if (sum>mid) {
            numDiv++;       //if the sum becomes greater than mid, we create another subarrray
            sum=a[i];
        };
    }
    numDiv++;
    if (numDiv<=k)         //if the number of subarrays is smaller than k, then mid is a possible maximum sum for that k
        return true;
    return false;
}

int main(){
    int n,k;  //size of array and number of divisions
    cin>> n >>k;
    int a[n];

    long long minSum=0; //minimum sum is the maximum element
    long long maxSum=0; //maximum sum is the sum of all elements

    long long output=0;

    for (int i = 0; i < n; i++) 
    {
        cin>>a[i];
        maxSum+=a[i];
        if(a[i]>minSum) {
            minSum=a[i];
        };
    };
    
    while (minSum<=maxSum) { //binary search
        long long mid = (minSum+maxSum)/2;
        if(check(mid,a,n,k)){
            output=mid;
            maxSum=mid-1;
        }
        else{
            minSum=mid+1;
        };
    };
    cout<<output<<" \n";
}

