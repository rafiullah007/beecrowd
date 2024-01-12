#include <iostream>

using namespace std;

    /**

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int main()
{

    int n;
    cin>>n;
    int count(0);
    for(int i = n;i<=n+12;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            count++;
            if(count==6) break;
        }
    }
    return 0;
}

