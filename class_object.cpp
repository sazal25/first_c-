#include<bits/stdc++.h>
using namespace std;

class student
{
    public:

    int id;
    string name;
    string section;
    int totalmarks;
};
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
    student arr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i].id >> arr[i].name >> arr[i].section >> arr[i].totalmarks;
    }

    student beststudent = arr[0];

    for (int i = 1; i < 3; i++)
    {
        if (arr[i].totalmarks > beststudent.totalmarks || 
        (arr[i].totalmarks == beststudent.totalmarks && arr[i].id < beststudent.id ) )
        {
            beststudent = arr[i];
        }
        
    }

    cout<< beststudent.id <<" "<<  beststudent.name <<" "<<  beststudent.section <<" "<<  beststudent.totalmarks<<endl;
    }
    return 0;
}