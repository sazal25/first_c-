/*#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    // cout << min(a,b) << endl;
    // cout << max(a,b) << endl;

    swap(a,b);

    cout << a << " " << b << endl;

    return 0;
}*/


//minimum & maximum 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    int minimum = min({a,b,c});
    int maximum = max({a,b,c});

    cout << minimum << " "<< maximum << endl;
    
    return 0;
}


//swap problem

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(a[i],a[j]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    
    return 0;
}