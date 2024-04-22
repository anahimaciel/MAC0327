#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> mymap = {
    { 'a', 1 },
    { 'b', 2 },
    { 'c', 3 },
    { 'd', 4 },
    { 'e', 5 },
    { 'f', 6 },
    { 'g', 7 },
    { 'h', 8 },
    { 'i', 9 },
    { 'j', 10 },
    { 'k', 11 },
    { 'l', 12 },
    { 'm', 13 },
    { 'n', 14 },
    { 'o', 15 },
    { 'p', 16 },
    { 'q', 17 },
    { 'r', 18 },
    { 's', 19 },
    { 't', 20 },
    { 'u', 21 },
    { 'v', 22 },
    { 'w', 23 },
    { 'x', 24 },
    { 'y', 25 },
    { 'z', 26 }
    };

    int t;
    int len;
    int output[t];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> len;
        char a;
        int val=0;
        for (int j = 0; j < len; j++)
        {
            cin >> a;
            if (mymap.at(a)>val) {
                val = mymap.at(a);
            };
        }
        output[i]=val;
    };
    for (int i = 0; i < t; i++)
    {
        cout << output[i] << " \n";
    };
}