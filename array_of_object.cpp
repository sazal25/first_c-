//not use space

/*#include<bits/stdc++.h>
using namespace std;

class student
{
    public:

    int roll;
    string name;
    int marks;

    // student(int roll, string name, int marks)
    // {

    // }
};
int main()
{
    int n;
    cin >> n;

    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].roll >> a[i].name >> a[i].marks;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << a[i].roll << " "<< a[i].name <<" "<< a[i].marks << endl;
    }
    
    return 0;
}*/



//using space


#include<bits/stdc++.h>
using namespace std;

class student
{
    public:

    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "<< a[i].roll <<" "<< a[i].marks << endl;
    }
    
    return 0;
}