#include <iostream>

using namespace std;

int main()
{
    const double percentage = 7.6 ;
    double salary ;
    cout << "enter Employee annual salary :" ;
    cin >> salary ;
    int x= 1 ;
    while (x)
    {
        cout << "The retroactive pay :" << salary * (percentage /100) << endl;
        cout << "The new annual Salary :" << salary + (salary * (percentage /100)) << endl;
        cout << "The new monthly Salary :" << (salary + (salary * (percentage/100)))/12 << endl;

        salary = salary + (salary * (percentage /100)) ;
        cout << "to continue enter 1 to out enter 0 : ";
        cin >> x ;
    }

    return 0;
}
