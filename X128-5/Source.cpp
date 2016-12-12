// Make a simple calculator
// Input:  double double char (+. -. *. /)
// Outpur:  "The (sum, difference, product etc.) of double and double is: whatever."

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
	double first{ 0.0 }, second{ 0.0 }, result{ 0.0 };
	char the_operator{ 'x' };

	cout << "Enter two doubles and an operator ('+', '-', '*' or '/'): ";
	cin >> first;
	cin >> second;
	cin >> the_operator;

	switch (the_operator){
	case '+':
		result = first + second;
		cout << "The sum of " << first << " and " << second << " is " << result << ".\n";
		break;
	case '-':
		result = first - second;
		cout << first << " minus " << second << " is: " << result << ".\n";
		break;
	case '*':
		result = first * second;
		cout << "The product of " << first << " and " << second << "is: " << result << ".\n";
		break;
	case '/':
		if (second ==0)
		{
			simple_error("Can't divide by zero - exiting program.");
		}
		else {
			result = first / second;
			cout << first << " divided by " << second << " is " << result << ".\n";
			break;
		}
	default:
		break;
	}
	keep_window_open();
}
