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
    int number,hours;
    float amount,total;
    //amount holo per hour salary
    //total holo total salary
    cin>>number;
    cin>>hours;
    cin>>amount;
    total = hours*amount;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",total);

    return 0;
}
