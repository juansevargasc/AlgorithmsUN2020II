#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

long long get_pisano_period(long long m) 
{
    long long n_minus_2 = 0, n_minus_1 = 1, n = n_minus_2 + n_minus_1;
    for (long long i = 0; i < m * m; i++) 
    {
        n = (n_minus_2 + n_minus_1) % m;
        n_minus_2 = n_minus_1;
        n_minus_1 = n; //This 3 lines are fibonacci
        if (n_minus_2 == 0 && n_minus_1 == 1) 
            return i + 1;
        
    }
    return 1;
}

unsigned long long fibonacci_naive_modulo(long long n, long long m)
{
    if(n <= 1)
        return n;

    unsigned long long sum = 0;
    unsigned long long n_minus_2 = 0;
    unsigned long long n_minus_1 = 1;
    //cout << array[0] << " " << array[1] << " ";
    for (long i = 2; i < n + 1; i++)
    {
        sum = (unsigned long long)(n_minus_2 + n_minus_1) % m;
        n_minus_2 = n_minus_1;
        n_minus_1 = sum;
    } 
    //cout << "\n";
    return sum;
}

long long fibonacci_modulo(long long n, long long m)
{
    //Fn mod m
    if(n <= 1)
        return n;
    unsigned long long period_length = get_pisano_period(m);
    unsigned long long smaller_n = (unsigned long long) n % period_length;
    unsigned long long modulo = (unsigned long long) fibonacci_naive_modulo(smaller_n, m);
    return modulo;
}

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << fibonacci_modulo(n, m) << "\n";
    return 0;
}
