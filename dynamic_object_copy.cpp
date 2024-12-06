#include<bits/stdc++.h>
using namespace std;

class cricketer
{
    public:

    string country;
    int joursey;

    cricketer(string country, int joursey)
    {
        this->country = country;
        this->joursey = joursey;
    } 
};
int main()
{
    cricketer *dhoni = new cricketer("India",100);
    cout << dhoni->joursey << endl;
    
    return 0;
}