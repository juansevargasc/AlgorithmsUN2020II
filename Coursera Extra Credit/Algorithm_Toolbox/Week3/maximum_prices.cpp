#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


/*int maximum_prices(int n)
{
    int sum = 0, k = 0;
    int a1 = n, a2 = 0, n_copy = n; 
    int half_n, i = 1;
    vector<int> a(n);

    if(n % 2 == 0)
    {
        half_n = n / 2;
    } else{
        half_n = (n / 2) + 1;
    }
    
    do
    {
        //cout << n / 2.0 << "   ";
        cout << a1 << " " << a2 << "\n";
        a1--;
        a2 = n - a1;
        
        while (a2 > 1)
        {
            if(a2 - 1 == a2 - 2)
            {
                break;
            }
        }
        
        
        a1 = n - i;
        i--;
        cout << sum << " ";

    }while ( a1 >= half_n );
    
    return 0;
}*/


int maximum_prices(int n)
{
    //Making sure half n depending on if it is even or odd
    int half_n;
    if(n % 2 == 0)
    {
        half_n = n / 2;
    } else{
        half_n = (n / 2) + 1;
    }

    int ai = half_n, sum = half_n, i = 0, k = 1;
    int counter = 0;
    vector<int> a(n);
    a[0] = half_n;

    while(ai >= 1)
    {
        cout << half_n << " ";
        while (sum != n)
        {
            ai--;
            sum += ai;

            if(sum > n)
            {
                sum -= ai;  

            }else{
                if(ai < 1)
                {
                    break;
                }else{
                    cout << ai << " ";
                    k++;
                }
            }
            //cout << "ai: " << ai << " Sum: " << sum << "\n";
            
        }


        cout << "sum: " << sum << "\n";
        
        if(sum == n)
        {
            counter++;
            cout << "Counter: " << counter << "  K prices: " << k << "\n";

        }    
        k = 1;
        i++;
        ai = half_n - i;
        sum = half_n;
        
        cout << "\n";
    }
    return counter;
    
}

int main()
{
    int n;
    cin >> n;
    cout << maximum_prices(n) <<"\n";

    return 0;
}
