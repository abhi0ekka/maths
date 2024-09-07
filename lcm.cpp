#include <bits/stdc++.h>
using namespace std;

int naiveLCM(int a, int b)
{
    int lcm = max(a, b);
    while (true)
    {
        if (lcm % a == 0 && lcm % b == 0)
            return lcm;
        lcm++;
    }
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int effectiveLCM(int a, int b)
{
    return a / gcd(a, b) * b;
}
int main()
{
    time_t start, end;
    int num1, num2;
    cout << "Enter 2 Number to find the lcm\n";
    cin >> num1 >> num2;
    time(&start);

    cout << "LCM : " << naiveLCM(num1, num2) << endl;
    cout << "LCM : " << effectiveLCM(num1, num2);
}