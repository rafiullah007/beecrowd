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
    double b;
    cin>>a;
    cin>>b;
    double sum = ((a*3.5)+(b*7.5))/(3.5+7.5);
    cout <<"MEDIA = "<< fixed << setprecision(5) << sum <<endl;
    return 0;
}
