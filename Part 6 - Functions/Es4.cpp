/* EXERCISE 4

Define a struct Rect to represent a rectangle by its top-left and bottom-right vertices (Points).
Write a program that reads two rectangles, asking for the coordinates of top_left and bottom_right for each;
then verifies if one rectangle is contained within the other;
and prints an appropriate message.

SUGGESTION:
Initialize rectangles directly with coordinates (no input needed),
and simplify by checking if rectangle 2 is contained in rectangle 1.
*/

#include <iostream>
using namespace std;

struct Point
{
    float x;
    float y;
};

// Rect defined by top-left (vul) and bottom-right (vbr) points
struct Rect
{
    Point vul; // vertex upper left
    Point vbr; // vertex bottom right
};

int main()
{
    // Initialize rectangles with coordinates so that R2 is inside R1
    Rect R1 = { {0, 5}, {10, 0} };
    Rect R2 = { {1, 4}, {8, 2} };
    
    // Create arrays holding all 4 vertices of each rectangle (in counterclockwise order)
    Point R1perim[4];
    Point R2perim[4];
    
    // For R1:
    R1perim[0] = R1.vul;                             // top-left corner (0, 5)
    R1perim[1] = {R1.vul.x, R1.vbr.y};              // bottom-left corner (0, 0)
    R1perim[2] = R1.vbr;                             // bottom-right corner (10, 0)
    R1perim[3] = {R1.vbr.x, R1.vul.y};              // top-right corner (10, 5)
    
    // For R2:
    R2perim[0] = R2.vul;                             // top-left corner (1, 4)
    R2perim[1] = {R2.vul.x, R2.vbr.y};              // bottom-left corner (1, 2)
    R2perim[2] = R2.vbr;                             // bottom-right corner (8, 2)
    R2perim[3] = {R2.vbr.x, R2.vul.y};              // top-right corner (8, 4)
    
    // Test if R2 is contained inside R1:
    // For each vertex of R2, check if it lies within R1's bounds
    
    bool testv0 = R1perim[0].x <= R2perim[0].x && R1perim[0].y >= R2perim[0].y;  // top-left R2 inside R1
    bool testv1 = R1perim[1].x <= R2perim[1].x && R1perim[1].y <= R2perim[1].y;  // bottom-left R2 inside R1
    bool testv2 = R1perim[2].x >= R2perim[2].x && R1perim[2].y <= R2perim[2].y;  // bottom-right R2 inside R1
    bool testv3 = R1perim[3].x >= R2perim[3].x && R1perim[3].y >= R2perim[3].y;  // top-right R2 inside R1
    
    if (testv0 && testv1 && testv2 && testv3)
        cout << "Rectangle R2 is contained within R1." << endl;
    else
        cout << "Rectangle R2 is NOT contained within R1." << endl;

    return 0;
}
