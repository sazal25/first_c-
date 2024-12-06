#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        string s,x;
        cin >> s >> x;

        int pos = 0;

        while(1){

        pos = s.find(x,pos);

        if (pos != -1)
        {
            s.erase(pos,x.length());
            s.insert(pos,"#");
        }

        else
        {
            break;
        }

        }

        cout << s << endl;
        
   }
    
    return 0;
}