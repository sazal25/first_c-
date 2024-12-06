/*#include<iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;

    if (x % 2 == 0)
    {
        cout << "Even";
    }

    else
    {
        cout << "Odd";
    }

    return 0;

}*/

// ternary operator even odd check

/*#include<iostream>
using namespace std;

int main()
{
    int x = 13;

    (x%2 == 0) ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}*/

//using switch case

/*#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "Vowel\n";
        break;

    case 'e':
        cout << "Vowel\n";
        break;

    case 'i':
        cout << "Vowel\n";
        break;

    case 'o':
        cout << "Vowel\n";
        break;

    case 'u':
        cout << "Vowel\n";
        break;

    default:
        cout << "Consonant\n";
        break;
    }

    return 0;
}*/


#include <iostream>

using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "saturday\n";
        break;

    case 2:
        cout << "sunday\n";
        break;

    case 3:
        cout << "monday\n";
        break;

    case 4:
        cout << "tuesday\n";
        break;

    case 5:
        cout << "wednesday\n";
        break;

    case 6:
        cout << "thursday\n";
        break;

    case 7:
        cout << "friday\n";
        break;

    default:
        cout << "wrong input\n";
    }

    return 0;
}