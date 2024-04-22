#include <iostream>
using namespace std;

bool check(int mid,long long k, long long n, long long a, long long b){
    return ((k-mid*a-(n-mid)*b)>0);
}


int main(){
    long long q,k,n,a,b=0;
    cin>>q;             //number of queries
    for (int i = 0; i < q; i++)     
    {
        cin>>k>>n>>a>>b;            //reading the queries 

        int min=0;
        int max=n;
        int mid;
        int output=-1;

        //binary search
        while(min<=max){
            mid=(min+max)/2;
            if(check(mid,k,n,a,b)){
                output=mid;
                min=mid+1;
            }
            else{
                max=mid-1;
            }
        }  
        cout<<output << " \n";
    }
}