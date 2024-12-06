/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int *p = new int[10];

    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    

    
    return 0;


}*/

// #include<bits/stdc++.h>

// using namespace std;

// int* fun()
// {
//     // int *a = new int[5];
//     int a[5];

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
    
//     return a;
// }

// int main()
// {
//     int* b = fun();

//     for (int i = 0; i < 5; i++)
//     {
//         cout << b[i] << " ";
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int *b = new int[5];

    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    b[3] = 40;
    b[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
    
    
    
}
