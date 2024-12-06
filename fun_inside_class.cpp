#include<bits/stdc++.h>
using namespace std;

class student
{
    public:

    string name;
    int roll;
    int math;
    int english;

    student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }


void total()
{
    cout << "Total marks of " << name << " = " << math+english << endl;

}

};

int main()
{
    student sazal("sazal ghosh", 2 , 93 , 85);
    sazal.total();

    student razal("razal ghosh", 2 , 90 , 89);
    razal.total();
    return 0;
}