#include <iostream>
#include <iomanip>
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
    double a;
    double b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    double sum = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);
    cout <<"MEDIA = "<< fixed << setprecision(1) << sum <<endl;
    return 0;
}
