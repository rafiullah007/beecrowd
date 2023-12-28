#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int largesNumber(int a[], int n)
{
    int i;
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int largesIndex(int a[], int n)
{
    int i;
    int index = 0;
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i+1;
        }
    }
    return index;
}

void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int a[100];
    input(a, 100);
    cout << largesNumber(a, 100) << endl;
    cout << largesIndex(a, 100) << endl;
    return 0;
}

