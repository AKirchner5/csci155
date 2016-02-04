// This program calculates the user's velocity.
#include <iostream>
using namespace std;

int main() {
//setting up variables
double meters, seconds, velocity; 

// Get the amount of meters ran.
cout << " How many meters did the runner run? ";
cin >> meters;

// Get the amount of seconds ran. 
cout << "How many seconds did the runner run? ";
cin >> seconds;

// Calculate the velocity. 
velocity = meters / seconds;

// Display the velocity. 
cout << "You ran at meters/second " << velocity << endl;
return 0;
}