#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int recursive_fibo(int n)
{
    if(n <= 1)
        return n;
    
    return recursive_fibo(n - 1) + recursive_fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << recursive_fibo(n) << "\n";
    return 0;
}
