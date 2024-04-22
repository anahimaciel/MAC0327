#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> mymap = {
    { 'A', 1 },
    { 'B', 2 },
    { 'C', 3 },
    { 'D', 4 },
    { 'E', 5 },
    { 'F', 6 },
    { 'G', 7 },
    { 'H', 8 },
    { 'I', 9 },
    { 'J', 10 },
    { 'K', 11 },
    { 'L', 12 },
    { 'M', 13 },
    { 'N', 14 },
    { 'O', 15 },
    { 'P', 16 },
    { 'Q', 17 },
    { 'R', 18 },
    { 'S', 19 },
    { 'T', 20 },
    { 'U', 21 },
    { 'V', 22 },
    { 'W', 23 },
    { 'X', 24 },
    { 'Y', 25 },
    { 'Z', 26 }
    };

    string input;
    cin >> input;
    int values[27] = {};  //saves the frequency of each letter 
    char letters[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int odds=0;   //how many letters have an odd frequency´

    for (int i = 0; i < input.length(); i++)
    {   
        values[mymap.at(input[i])]++;
    };
    
    for (int i = 1; i < 27; i++)
    {
        if(values[i]%2 != 0) {
            odds++;
        };
    };

    if(odds>1) {
        cout<<"NO SOLUTION\n";
        return 0;
    }

    char half[input.length()/2]; //half of the output string
    char center;
    int pos=0;
    
    for (int i = 1; i < 27; i++)
    {
        if(values[i]%2 == 0) {
            for (int j = 0; j < values[i]/2; j++)
            {
                half[pos]= letters[i-1];
                pos++;
            };    
        }
        else {
            for (int j = 0; j < (values[i]-1)/2; j++)
            {
                half[pos]= letters[i-1];
                pos++;
            };
            center=letters[i-1];
        };
    };

    for (int i = 0; i < input.length()/2; i++)
    {
        cout<<half[i];
    };
    if (input.length()%2 != 0) {
        cout<<center;
    };
    for (int i = input.length()/2-1; i>-1; i--)
    {
        cout<<half[i];
    };
}