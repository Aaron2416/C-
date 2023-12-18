#include <iostream>
using namespace std;

int main() 
{
    //declars variables 
   
    int years = 0;
    int months = 0; 
    int days = 0;

    cout << "enter age in years ";
    cin >> years;
    cout << "enter your age in months"; 
    cin >> months; 
    cout << "enter your age in days ";
    cin >> days;
    
    // caculate age in total months 
   
    int totalmonths = years * 12 + months; 

    //caluate age in total days
    int totaldays = years * 365 + months * 30 + days;  

    long totalHours = totaldays * 24;
    long totalMinutes = totalHours * 60; 
    long totalSeconds = totalMinutes * 60; 

    //display the user’s age in 5 equivalent ways

    cout << "your age in total months " << totalmonths << " months " << endl;
    cout << "your age in total day " << totaldays << " days" << endl;
    cout << "your age in total hours " << totalHours << " hours " << endl; 
    cout << "your age in total minuts " << totalMinutes << " minutes" << endl;
    cout << "your age in total seconds " << totalSeconds << " seconds" << endl; 
    
    return 0; 
  
 }

