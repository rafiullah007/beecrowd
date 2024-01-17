#include <bits/stdc++.h>
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
    int a, b;
    double c, res;
    cin >> a >> b >> c;
    res = b * c;
    cin >> a >> b >> c;
    res += b * c;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << res << endl;
    return 0;
}
