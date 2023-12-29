#include <iostream>
#include <iomanip> // Added for setting precision
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

float calculation(int hr, int km)
{

    float sum = (km / 12.0) * hr;
    return sum;
}

int main()
{
    int hr, km;
    float result = 0.0;
    cin >> hr >> km;
    cout << fixed << setprecision(3) << calculation(hr, km) << endl;
    return 0;
}
