/*
Carter Nickelson
CS 172-1
Dr. Johnson
19 September 2016
*/

#include<iostream> 
#include<cmath> 
#include<string> 
#include<ctime> 

using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();
void doubling(int&);
int add(int, int);
void increment(int&);
void copy(int[], int);
void match(int[], int);

int main()
{
	ex02();
	ex03();
	ex04();
	ex05();
}

void ex02()
{
	bool hasPassedTest;
	hasPassedTest = 1;
	int x, y;

// setting the seed for random numbers
	srand(time(0));

// randomizing x and y
	x = rand() % 100 + 1;
	y = rand() % 100 + 1;
	cout << "x=" << x << ", y=" << y << endl;

	// display true relationship
	cout << (y > x ? "y>x" : y == x ? "y=x" : "y<x") << endl;
	int numberOfShares;
	cout << "How many shares?" << endl;
	cin >> numberOfShares;

	// display correct inequality
	cout << "Number of Shares is " << (numberOfShares < 100 ? "" : "not ") << "less than 100." << endl;
	cout << "What is the width of the box? The book?" << endl;
	int bookwidth, boxwidth;
	cin >> boxwidth;
	cin >> bookwidth;

	// box is evenly divisible by the book if its modulus is 0
	cout << "The width of the box is " << (boxwidth%bookwidth == 0 ? "" : "not ") << "evenly divisible by the width of the book." << endl;
	cout << "What is the shelf life of the chocolate?" << endl;
	int shelflife, temp;
	cin >> shelflife;
	cout << "What is the temperature?" << endl;
	cin >> temp;

	// subtract 4 from the shelf life if its really hot
	shelflife = (temp > 90 ? shelflife - 4 : shelflife);
	cout << "The new shelflife of the chocolate is " << shelflife << endl;
}

void ex03()
{
	cout << "What is the area of the square?" << endl;
	double area;
	
	// retrieve the area from the user
	cin >> area;
	
	// The diagonal is the square root of the sum of the squares of the sides. Because one side is the square root of the area, the diagonal is the square root of 2 times the area
	cout << "The diagonal of this square is " << sqrt(2 * area) << "." << endl;
	cout << "Yes or no (y or n)?" << endl;
	char answer;
	
	// get an answer from the user
	cin >> answer;
	
	// convert the letter to lowercase in case they entered a capital
	answer = tolower(answer);
	cout << "You chose " << (answer == 'y' ? "yes." : "no.") << endl;
	char tab = 9;
	string mailingAddress;
	
	// get rid of the excess characters left over from previous commands
	cin.ignore();
	cout << "Enter your mailing address in one line." << endl;
	
	// retrieve address from user ignoring spaces, commas, etc.
	getline(cin, mailingAddress);
	string empty = "";
}

void ex04()
{
	cout << "Enter an integer between 1 and 10." << endl;
	int number;
	cin >> number;
	
	// as long as the user enters a number outside this range, the while loop will tell them to enter a new value
	while (number < 1 || number>10)
	{
		cout << "Invalid input. Please try again." << endl;
		cin >> number;
	}
	int sum = 0;
	
	// use a for loop and the pow command with a temporary sum variable to amass the totals of the cubes up to the user's number from before
	for (int i = 1; i <= number; i++)
	{
		sum+=pow(i, 3);
	}
	cout << "The sum of all of the cubes from 1 to " << number << " is " << sum << "." << endl;
	int a = 0;
	
	// have the program output an asterisk until the a variable (which is incremented each iteration) reaches the value of the user's number
	do
	{
		cout << "* ";
		a++;
	} while (a < number);
	cout <<endl<< "The even numbers from 0 to 40 are:" << endl;
	
	// a for loop is used starting at 0 and ending at 40 where the index is increased by 2 each time and then dislpayed.
	for (int i = 0; i <= 40; i += 2)
		cout << i << " ";
	
	// double the number with the function
	doubling(number);
	cout << endl<<"Twice the number you entered above is " << number << "." << endl;
	
	// randomize two numbers to be added
	int one = rand() % 100 + 1;
	int two = rand() % 100 + 1;
	cout << "a=" << one << ", b=" << two << "." << endl;
	
	// display the total with the return value from a function
	cout << "a+b=" << add(one, two) << endl;
	
	// reset the user's number to its original value
	number /= 2;
	
	// increment it with a function
	increment(number);
	cout << "One more than the number you entered earlier is " << number << "." << endl;
}

void ex05()
{
	cout << "Enter five integers." << endl;
	int storage[5];

	// use a for loop which ends at the size of the array to input user's numbers into the array one by one
	for (int i = 0; i <= 4; i++)
		cin >> storage[i];
	int total=0,product=1;

	// again using a for loop, go through each value in the array and add that number to the "total" variable and multiply it to the "product" variable
	for (int i = 0; i <= 4; i++)
	{
		total += storage[i];
		product *= storage[i];
	}
	cout << "The sum of these integers is " << total << ". Their product is " << product << "." << endl;
	
	// display the values using a function
	copy(storage, 5);

	// check for a match from a user input using a function
	match(storage, 5);
}

void doubling(int& value)
{
	value*=2;
}

int add(int a, int b)
{
	return a + b;
}

void increment(int& value)
{
	value++;
}

void copy(int storage[], int size)
{
	cout << "Your values were: ";

	// extract each value from the array one by one and display it to the screen separated by a space
	for (int i = 0; i < size; i++)
		cout << storage[i] << " ";
	cout << endl;
}

void match(int storage[], int size)
{
	cout << "Enter another integer." << endl;

	// get a number to check for a match
	int guess;
	cin >> guess;

	// initialize the check variable to 0
	int check=0;
	for (int i = 0; i < size; i++)
	{
		// if the number matches that particular value in the array, increment the check variable. If not, do nothing
		check += (storage[i] == guess ? 1 : 0);
	}

	// if the check variable is still 0 then there were no matches. Otherwise, there must have been at least one match in the array.
	cout << (check == 0 ? "Your array does not contain this value." : "Your array contains this value.") << endl;
}