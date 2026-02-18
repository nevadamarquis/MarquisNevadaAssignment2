/**
   @file MarquisNevadaAssignment2.cpp
   @author Nevada Marquis
   @date 2026-02-14
   @version 1.0

   Reads a non-negative integer and prints its binary digits by repeatedly
   printing number % 2 and updating number = number / 2 until the number is 0.
*/

#include <iostream>
using namespace std;

int main()
{
    int number;

    // Prompt for input (clear user prompt)
    cout << "Enter a non-negative integer: ";
    cin >> number;

    // Validate input (non-negative integer expected)
    if (number < 0)
    {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 0;
    }

    // Output label (effective labeling)
    cout << "Binary digits (least significant to most significant):" << endl;

    // Special case: binary representation of 0 is 0
    if (number == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    // Core loop: print remainder, then reduce number, until number becomes 0
    while (number > 0)
    {
        int digit = number % 2;   // remainder is 0 or 1
        cout << digit << endl;    // print each digit on its own line
        number = number / 2;      // integer division reduces the number
    }

    return 0;
}
