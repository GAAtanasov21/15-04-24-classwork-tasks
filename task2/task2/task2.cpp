#include <iostream>
using namespace std;

class Gcd
{
private:
    int num1;
    int num2;

public:
    Gcd(int newNum1, int newNum2)
    {
        num1 = newNum1;
        num2 = newNum2;
    }
    int calculateGcd()
    {
        if (num1 == 0)
        {
            return num2;
        }
        while (num2 != 0)
        {
            if (num1 > num2)
            {
                num1 = num1 - num2;
            }
            else
            {
                num2 = num2 - num1;
            }
        }
        return num1;
    }
};
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    Gcd gcd(num1, num2);
    cout << gcd.calculateGcd();
}