#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int signatures(int n, vector<int> a)
{
    int result;
    for (size_t i = 0; i < (n * 2); i++)
    {
        cout << a[i] << " ";
        result = i;
    }
    cout << "\n";
    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n * 2);
    for (size_t i = 0; i < (n * 2); i++)
    {
        cin >> a[i];
    }

    cout << signatures(n, a) << "\n";
    return 0;
}

