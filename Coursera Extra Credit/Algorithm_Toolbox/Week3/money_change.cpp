#include <iostream>
#include <cstdlib>

using namespace std;


int moneyChange(int change)
{
    int coin1 = 1, coin5 = 5, coin10 = 10;
    int sum = 0, numberCoins = 0;
    
    //1. Return the highest value coin until is equal or exceeds
    while (sum < change)
    {
        //
        sum += coin10;
        if(sum > change)
        {
            sum -= coin10;
            break;
        } 
        numberCoins++;
    }
    if(sum != change)
    {
        while (sum < change)
        {
            //
            sum += coin5;
            if(sum > change)
            {
                sum -= coin5;
                break;
            } 
            numberCoins++;
        }
    } 
    if(sum != change)
    {
        while (sum < change)
        {
            //
            sum += coin1;
            if(sum > change)
            {
                sum -= coin1;
                break;
            } 
            numberCoins++;
        }
    } 
    return numberCoins;
}

int main()
{
    int n;
    cin >> n;
    cout << moneyChange(n) << "\n";
    return 0;
}