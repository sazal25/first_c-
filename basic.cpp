#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S, X;
        cin.ignore();
        getline(cin,S);
        getline(cin,X);
        int index = 0;
        while (index != -1)
        {
            index = S.find(X, index);
            if (index == -1)
            {
                break;
            }
            S.replace(index, X.length(), "#");
            index += 1;
        }
        cout << S << endl;
    }

    return 0;
}
