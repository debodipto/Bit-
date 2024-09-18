#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,x=0;
    cin >> a;
    string s;
    while(a--)
    {
        cin >> s;
        if(s == "++X"  || s == "X++")
        {
            x++;
        }
        else
        {
            x--;
        }

    }
    cout << x << endl;
    return 0;
}
