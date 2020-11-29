#include <iostream>
#include <cstdlib>


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

int main()
{
    int a, b;
    cin >> a >> b;
    cout << euclidian_mcd(a, b) << "\n";
    return 0;
}