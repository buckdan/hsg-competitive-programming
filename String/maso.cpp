#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k;
    string s7;
    string sk;

    cin >> k;
    cin >> s7;

    int sum = 0;

    for(int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;

        sum += (s7[i] - '0') * x;
    }

    cin >> sk;

    int mod = sum % k;

    cout << sk[mod] << endl;

    return 0;
}

// Sample input

// 11
// 6830907
// 2 7 6 5 4 3 2
// JABCDEFGHIZ

