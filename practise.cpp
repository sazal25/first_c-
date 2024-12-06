// #include <bits/stdc++.h>
// using namespace std;

// class student
// {
// public:
//     string name;
//     int cls;
//     string section;
//     int id;
//     int math_marks;
//     int eng_marks;
// };

// bool cmp(student a, student b)
// {
//     if (a.eng_marks > b.eng_marks)
//     {
//         return true;
//     }
//     else if (a.eng_marks < b.eng_marks)
//     {
//         return false;
//     }
//     else
//     {
//         if (a.math_marks > b.math_marks)
//         {
//             return true;
//         }
//         else if (a.math_marks < b.math_marks)
//         {
//             return false;
//         }
//         else
//         {
//             return a.id < b.id;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;

//     student a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
//     }

//     sort(a, a + n, cmp);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     cin.ignore();

//     for (int i = 0; i < t; i++)
//     {
//         string s, x;
//         getline(cin, s);
//         getline(cin, x);

//         int pos = 0;

//         while (pos < s.size())
//         {
//             pos = s.find(x, pos);
//             if (pos < s.size())
//             {
//                 s.replace(pos, x.length(), "#");
//                 pos += 1;
//             }

//             else
//             {
//                 break;
//             }
//         }

//         cout << s << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (1)
    {
    
    string s,x;

    cin.ignore();
    getline(cin,s);
    getline(cin,x);

    int pos = s.find(x,pos);


    if (pos != -1)
    {
        s.replace(pos,x,"#");
    }
    }

    cout << s << endl;

    return 0;
}