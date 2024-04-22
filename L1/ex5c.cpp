#include <iostream>
#include <array>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long n,q,sum=0;
        cin>>n>>q;
        int numOdds=0, numEvens=0, a;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (a % 2 ==0) {
                numEvens++;
            }
            else {
                numOdds++;
            }
            sum=sum+a;
        };
        long long type, x;
        for (int j = 0; j < q; j++)
        {
            cin>>type>>x;
            if (type==0)
            {
                sum=sum+x*numEvens;
                if (x%2==1) {
                    numOdds = numOdds+numEvens;
                    numEvens=0;
                };
            }
            else {
                sum=sum+x*numOdds;
                if (x%2==1) {
                    numEvens = numEvens+numOdds;
                    numOdds=0;
                };
            };
            cout<<sum<<" \n";
        };
    };
}
