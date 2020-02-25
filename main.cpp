#include <iostream>

using namespace std;

void power(int base, int exp);

int main()
{
    cout<<"GitHub Test"<<endl;
    
    power(10, 2);
    power(5, 3);
    power(10, 1);
    power(10, 0);

    

    return 0;
}
//--
int power(double base, int exp)
{
    int result = 1;
    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    return result;
}
