#include <iostream>
using namespace std;

int main() {
    int t;
    int a,b;
    int results[t];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        results[i]=a+b;
    };
    for (int i = 0; i < t; i++)
    {
        cout << results[i] << " \n";
    };
}
