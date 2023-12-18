#include <iostream>
using namespace std;
int main()
{
    //declars variables 
    const long secpermin = 60;
    const long minperhr = 60;
    const long hrperday = 24;

    long seconds, minutes, hours, days; 
    //user input

    cout << "How many seconds?: "; 
    cin >> seconds;

    // the calculations 
    
    minutes = seconds / secpermin; 
    seconds %= secpermin; 
    hours = minutes / minperhr; 
    minutes %= minperhr; 
    days = hours / hrperday; 
    hours %= hrperday;
    
	
    cout << "totaly time " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds " << endl;
    return 0;

}