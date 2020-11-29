#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int binary_search_function(vector<int> a, int low, int high, int key)
{
    if(high < low)
    {
        return - 1;
    }

    int mid = low + int( (high - low) / 2 );

    if( key == a[mid] )
    {
        return mid;
    }else if ( key < a[mid] ) 
    {
        return binary_search_function(a, low, mid - 1, key);
    }else
    {
        return binary_search_function(a, mid + 1, high, key);
    }
    
}

int binary_search_iterative(const vector<int> &a, int x) {
    int left = 0, right = (int) a.size();
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (x == a[mid]) return mid;
        else if (x < a[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

void search(vector<int> a, int a_size, vector<int> b, int b_size)
{

    //Program data
    int low = 0;
    int high = a_size - 1;

    for (int i = 0; i < b_size; i++)
    {
        int key = b[i];
        int position = binary_search_iterative(a, key);
        cout << position << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    
    vector<int> b(k);
    for (size_t j = 0; j < k; j++)
    {
        cin >> b[j];
    }
    
    search(a, n, b, k);
    return 0;
}
