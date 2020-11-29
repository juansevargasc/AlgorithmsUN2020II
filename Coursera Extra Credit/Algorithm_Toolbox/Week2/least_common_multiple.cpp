#include <iostream>
#include <cstdlib>

//TODO: Implmente the 5th exercise on fibonacci numbers.

using namespace std;

int euclidian_mcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    int a_prime = a % b;
    return euclidian_mcd(b, a_prime);
}

long long least_common_multiple(int a, int b)
{
    int mcd = euclidian_mcd(a, b);
    int first = a / mcd;
    int second = b / mcd;
    return (long long) first * second * mcd;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << least_common_multiple(a, b) << "\n";
    return 0;
}