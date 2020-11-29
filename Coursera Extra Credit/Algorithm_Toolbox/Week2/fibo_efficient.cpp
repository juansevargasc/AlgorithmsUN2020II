#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    int sum = 0;
    vector<int> array(n + 1);
    array[0] = 0;
    array[1] = 1;
    cout << array[0] << " " << array[1] << " ";
    for (size_t i = 2; i < n + 1; i++)
    {
        sum = array[i - 2] + array[i - 1];
        array[i] = sum;
        cout << array[i] << " ";
    }
    cout << "\n";
    return array[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << "\n";
    return 0;
}
