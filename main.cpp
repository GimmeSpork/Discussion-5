/******************************************************************************
# Author:           Lucy Price & Andy Joy
# Assignment:       Discussion 5 - Fun With Statistics
# Date:             May 9, 2026
# Description:      This program will take a number of integers from user
#                   depending on how many numbers they choose to input. It will
#                   then calculate and output the minimum, maximum, sum and 
#                   average numbers.
# Input:            userInput and numCount as integers.
# Output:           average as double, sum, max and min as integers.
# Sources:          Discussion 5 resources, and zybooks chapter 5.
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
int main() {

//Declare variables
double average = 0.0;
int sum = 0.0;
int userInput = 0;
int max = 0;
int min = 0;
int numCount = 0;

//welcome message & numCount input
cout << "Welcome to the Fun With Statistics Program!" << endl;
cout << "\nHow many numbers would you like to input?: ";
cin >> numCount;
cout << "Enter your numbers: ";

//for loop length of numCount
for(int i = 0; i < numCount; i++) {
  sum = sum + userInput;
  cin >> userInput;
  
  if (max < userInput) {  //updating max
    max = userInput;
  }
  else if (min < userInput) {  //updating min
    min = userInput;
  }
}

//average calculation
average = sum / numCount;
cout << fixed << setprecision(2);

//output all the statistics
cout << "\nThe sum of your numbers is: " << sum << endl;
cout << "The average of your numbers is: " << average << endl;
cout << "The smallest number you input was: " << min << endl;
cout << "The largest number you input was: " << max << endl;

//goodbye message
cout << "\nThank you for using the Fun With Statistics Program!" << endl;

  return 0;
}
