#include <iostream>

using namespace std;

double power(int base, int exp);

int main()
{
    cout << "GitHub Test" << endl;

    cout << power(10, 2) << endl;
    cout << power(5, 3) << endl;
    cout << power(10, 1) << endl;
    cout << power(10, 0) << endl;
    

    return 0;
}
//--

double power(double base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }

    return result;
}
