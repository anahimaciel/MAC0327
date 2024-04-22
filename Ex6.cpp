#include <bits/stdc++.h>
using namespace std;

bool check(int mid, long long a, long long b) {

}

int main (){
    long long a,b=0;
    cin>>a>>b;             
   
    int min=0;
    int max=sqrt(a^2+b^2);
    int mid;
    int output;

    //binary search
    while(min<=max){
        mid=(min+max)/2;
        if(check(mid,a,b)){
            output=mid;
            min=mid+1;
        }
        else{
            max=mid-1;
       }
    }  
    cout<<output << " \n";
    
    
    //cout << min(2.0*sqrt(b*b- sqrt(3) * a * b + a*a ) , 2.0*min(a,b)/sqrt(3)); 
}