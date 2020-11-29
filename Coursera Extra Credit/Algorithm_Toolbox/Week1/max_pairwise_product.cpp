#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

long long max_pairwise_product(const vector<int>& numbers)
{
    long long result = 0;
    int n = numbers.size();

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            /* code */
            if((long long) numbers[i] * numbers[j] > result)
            {
                result = (long long) numbers[i] * numbers[j];
            }
        }
        

    }
    return result;
}

long long max_pairwise_fast(const vector<int>& numbers)
{
    int n = numbers.size();
    
    int max_index1 = -1;
    for (size_t i = 0; i < n; i++)
        if((max_index1 == -1) || (numbers[i] > numbers[max_index1]) )
            max_index1 = i;
    
    int max_index2 = -1;
    for (size_t j = 0; j < n; j++) //Bug fixed. You have to assign maxnumber2 if it doesn't repeat the position.
        if( (max_index1 != j) && ( (max_index2 == -1)  || (numbers[j] > numbers[max_index2] ) ) )
            max_index2 = j;
    

    return (long long) numbers[max_index1] * numbers[max_index2];
}

int main()
{
    /*
    //Stress Test
    while (true)
    {
        int n = rand() % 1000 + 2; //Minimun 2 numbers
        cout << "Array size: " << n << "\n";

        //Array
        vector<int> a;
        for (size_t i = 0; i < n; i++)
        {
            a.push_back(rand() % 1000);
        }
        //Print array
        for (size_t i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";

        //Calling functions and comparing them
        long long result1 = max_pairwise_product(a);
        long long result2 = max_pairwise_fast(a);
        if (result1 != result2)     
        {
            cout << "Wrong answer: " << result1 << " " << result2 << "\n";
            break;
        }else
        {
            cout << "OK\n";
        } 
    } //end of Stress test
    */

    //Getting n
    int n;
    cin >> n;
    
    //Getting vector
    vector<int> array(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    //Calling the function
    /*cout << "First algorithm\n";
    long long result = max_pairwise_product(array);
    cout << result << "\n";*/

    //cout << "\nSecond algorithm\n";
    long long result = max_pairwise_fast(array);
    cout << result << "\n";
    return 0;
}