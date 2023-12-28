#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

    void Output(int a, int b)
    {
        while(true)
        {
            cin>>a>>b;
            if(a==b)
            {
                break;
            }
            else if(a<b)
            {

                cout << "Crescente" << endl;

            }

            else
            {
                cout << "Decrescente" << endl;
            }
        }
    }



    int main()
    {
        int a,b;
        Output(a,b);
    }



