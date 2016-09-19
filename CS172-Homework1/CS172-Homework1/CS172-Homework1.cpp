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
	cin >> area;
	// The diagonal is the square root of the sum of the squares of the sides. Because one side is the square root of the area, the diagonal is the square root of 2 times the area
	cout << "The diagonal of this square is " << sqrt(2 * area) << "." << endl;
	cout << "Yes or no (y or n)?" << endl;
	char answer;
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
	while (number < 1 || number>10)
	{
		cout << "Invalid input. Please try again." << endl;
		cin >> number;
	}
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		sum+=pow(i, 3);
	}
	cout << "The sum of all of the cubes from 1 to " << number << " is " << sum << "." << endl;
	int a = 0;
	do
	{
		cout << "* ";
		a++;
	} while (a < number);
	cout <<endl<< "The even numbers from 0 to 40 are:" << endl;
	for (int i = 0; i <= 40; i += 2)
		cout << i << " ";
	doubling(number);
	cout << endl<<"Twice the number you entered above is " << number << "." << endl;
	int one = rand() % 100 + 1;
	int two = rand() % 100 + 1;
	cout << "a=" << one << ", b=" << two << "." << endl;
	cout << "a+b=" << add(one, two) << endl;
	number /= 2;
	increment(number);
	cout << "One more than the number you entered earlier is " << number << "." << endl;
}

void ex05()
{

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