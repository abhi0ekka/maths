#include <iostream>
using namespace std;

int naiveGCD(int a, int b)
{
    int gcd = 1;
    for (int i = 2; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

int effectiveGCD(int a, int b)
{
    if (b == 0)
        return a;
    return effectiveGCD(b, a % b);
}

int main()
{
    int num1, num2;
    cout << "Enter two number to find the gcd \n";
    cin >> num1 >> num2;
    cout << naiveGCD(num1, num2) << endl;
    cout << effectiveGCD(num1, num2);

    return 0;
}