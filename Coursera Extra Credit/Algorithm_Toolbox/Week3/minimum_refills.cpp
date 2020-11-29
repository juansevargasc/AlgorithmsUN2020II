#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


int min_refills( int d, int m, int n, vector<int> stops )
{
    int number_of_refills = 0;
    int current_position = 0; //Positions represents the stops
    int last_refill = 0;

    while(current_position <= n)
    {
        //First you initialize the last refill on the first position A.
        last_refill = current_position;

        //While current position doesn't exceed n and the car has gas
        while ( (current_position <= n ) && (stops[current_position + 1] - stops[last_refill] <= m) )
        {
            current_position += 1;
        }
        
        //After the conditions on the previous while
        if(current_position == last_refill)
            return -1; //If the current position nver changed, means the car couldn't drive until next stop.
        if(current_position <= n)
            number_of_refills++;
    }
    return number_of_refills;
}

int main()
{
    int d, m, n;
    cin >> d >> m >> n;

    vector<int> stops(n + 2);
    stops[0] = 0;
    stops[n + 1] = d;
    for (size_t i = 0; i < n; i++)
    {
        cin >> stops[i + 1];
    }
    
    cout << min_refills(d, m, n, stops) << "\n";
    return 0;
}