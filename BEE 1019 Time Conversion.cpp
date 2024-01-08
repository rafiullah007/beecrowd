#include <iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int main()
{
    int s;
    cin>>s;
    int h = s/3600;
    s = s - (h*3600);
    int m = s/60;
    s = s - (m*60);
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
