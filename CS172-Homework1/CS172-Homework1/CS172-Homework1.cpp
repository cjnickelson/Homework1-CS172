#include<iostream> 
#include<cmath> 
#include<string> 
#include<ctime> 

using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();

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
	srand(time(0));
	x = rand() % 100 + 1;
	y = rand() % 100 + 1;
	cout << "x=" << x << ", y=" << y << endl;
	cout << (y > x ? "y>x" : y == x ? "y=x" : "y<x") << endl;
	int numberOfShares;
	cout << "How many shares?" << endl;
	cin >> numberOfShares;
	cout << "Number of Shares is " << (numberOfShares < 100 ? "" : "not ") << "less than 100." << endl;
	cout << "What is the width of the box? The book?" << endl;
	int bookwidth, boxwidth;
	cin >> boxwidth;
	cin >> bookwidth;
	cout << "The width of the box is " << (boxwidth%bookwidth == 0 ? "" : "not ") << "evenly divisible by the width of the book." << endl;
	cout << "What is the shelf life of the chocolate?" << endl;
	int shelflife, temp;
	cin >> shelflife;
	cout << "What is the temperature?" << endl;
	cin >> temp;
	shelflife = (temp > 90 ? shelflife - 4 : shelflife);
	cout << "The new shelflife of the chocolate is " << shelflife << endl;
}

void ex03()
{

}

void ex04()
{

}

void ex05()
{

}
