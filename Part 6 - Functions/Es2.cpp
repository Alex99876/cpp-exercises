/* EXERCISE 2

Define a struct type Point to represent points on a Cartesian plane. The struct should store the coordinates of a point.
Write a program that reads the information for two Points P1 and P2 and, after verifying that they are not the same point,
expresses the position of P2 relative to P1.

[HINT: To verify point equality, check the absolute differences between coordinates.]
NOTE: It's good to consider a tolerance. In math notation, this means checking not if x = y, but if |x - y| < t,
where t is a small positive tolerance within which we consider the values practically equal.

Also, write a program that reads the information for two Points P1 and P2 and prints their distance.
[HINT: Given two points P1 = (x1, y1) and P2 = (x2, y2), their distance is calculated as
D(P1, P2) = sqrt((x2 - x1)^2 + (y2 - y1)^2)] 
*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
	float x;
	float y;
};

const double tolerance = 0.01;

int main()
{
	Point P1, P2;
	
	cout << "Enter the coordinates of point P1: ";
	cin >> P1.x >> P1.y;
	
	cout << "Enter the coordinates of point P2: ";
	cin >> P2.x >> P2.y;
	
	// Calculate the absolute differences between coordinates to check if points are equal
	float diff_x = fabs(P1.x - P2.x);
	float diff_y = fabs(P1.y - P2.y);
	
	if (diff_x < tolerance && diff_y < tolerance)
	{
		cout << "The points are the same." << endl;
	}
	else 
	{
		cout << "Point P2 is ";
		
		if (P2.y > P1.y)
			cout << "above";
		else 
			cout << "below";
		
		if (P2.x > P1.x)
			cout << " and to the right";
		else
			cout << " and to the left";
				
		cout << " relative to point P1." << endl;
	}
	
	// Calculate and print the distance between the two points
	double distance = sqrt(pow(P2.x - P1.x, 2) + pow(P2.y - P1.y, 2));
	cout << "The distance between P1 and P2 is: " << distance << endl;
	
	return 0;
}
