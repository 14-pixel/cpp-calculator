#include <iostream>
using namespace std;

int main() {
	// Get user's choice of calc
	int calc;
	cout << "Calc \n";
	cout << "1 - Sum \n";
	cout << "2 - Sub \n";
	cout << "3 - Multiplication \n";
	cin >>calc;
	// Get integer input from user, and use a if statement to lead to the choice, example, if user chooses one, then the if statement will insert what happens after
	if (calc == 1) {
		int sum;
		// Declare the integers the user will decide the value
		int x, y;
		cout <<"Enter a number: \n";
		// Get input
		cin >>x;
		cout <<"Enter a second number: \n";
		cin >>y;
		// Sum the integers and print the result
		sum = x + y;
		cout <<"Result: "<< sum;
	
	}
	if (calc == 2) {
		int a, b;
		cout <<"Enter a number: \n";
		cin >>a;
		cout <<"Enter a second number: \n";
		cin >>b;
		// Declare a int variable and subtract the others.
		int res_mult = a - b;
		cout <<"Result: "<< res_mult;
	}
	if (calc == 3) {
		int c, d;
		cout << "Enter a number: \n";
		cin >>c;
		cout << "Enter a second number: \n";
		cin >>d;
		// Declare a int variable and multiplicate the others
		int mult = d * c;
		cout <<"Result: " << mult;
	
	
	}

}
