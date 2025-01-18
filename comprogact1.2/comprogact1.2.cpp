#include <iostream>
#include <math.h>
#define PI 3.141592
using namespace std;

void square (double side, double &area)
{
	area = side * side;
}

void rectangle(double length, double width, double &area) 
{
	area = length * width; 
}

void triangle(double base, double height, double &area) 
{
	area = .5 * base * height; 
}

void circle(double radius, double &area) 
{
	area = PI * radius * radius;
}

int main()
{
	int userChoice, sideSquare, lengWidth, baseWidth, radius; 
	double area{};
	cout << "--------------------\n"
		<< "MENU\n"
		<< "--------------------\n"
		<< "[1] - Area of square\n"
		<< "[2] - Area of rectangle\n"
		<< "[3] - Area of triangle\n"
		<< "[4] - Area of circle\n"
		<< "[5] - Exit the program\n"
		<< "--------------------\n"
		<< "Enter your choice: ";
	cin >> userChoice;

	cout << "--------------------\n";

	switch (userChoice) 
	{
	case 1: 
		double sideSquare;
		cout << "AREA OF SQUARE\n"
			 << "--------------------\n"
			 << "Enter the side of the square: ";
		cin >> sideSquare;

		square (sideSquare, area);
		cout << "The area is " << area << " sq. units" << endl;
		break;

	case 2: 
		double length, width;
		cout << "AREA OF RECTANGLE\n"
			 << "--------------------\n"
			 << "Enter the lenght and width of the rectangle: ";
		cin >> length >> width;

		rectangle (length, width, area);
		cout << "The area is " << area << " sq. units" << endl;
		break;

	case 3: 
		double base, height;
		cout << "AREA OF TRIANGLE\n"
			 << "--------------------\n"
			 << "Enter the base and width of the height: ";
		cin >> base >> height;

		triangle (base, height, area);
		cout << "The area is " << area << " sq. units" << endl;
		break;

	case 4:
		double radius;
		cout << "AREA OF CIRCLE\n"
			 << "--------------------\n"
			 << "Enter the radius: ";
		cin >> radius;

		circle (radius, area);
		cout << "The area is " << area << " sq. units" << endl;
		break;

	case 5: 
		cout << "Thank you!" << endl;
		break;

	default:
		cout << "Wrong number input" << endl;
		exit(0);
	}
	return 0;

}