#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    int x;
    int y;
};

struct Triangle
{
    Point v1;
    Point v2;
    Point v3;
    float perimetro;
    float area;
};

const float TOLL = 1e-6;

int main()
{
    Triangle t;

    cout << "Enter the integer coordinates of three vertices:" << endl;
    cout << "First vertex: ";
    cin >> t.v1.x >> t.v1.y;
    cout << "Second vertex: ";
    cin >> t.v2.x >> t.v2.y;
    cout << "Third vertex: ";
    cin >> t.v3.x >> t.v3.y;

    float lato1 = sqrt((t.v1.x - t.v2.x)*(t.v1.x - t.v2.x) + (t.v1.y - t.v2.y)*(t.v1.y - t.v2.y));
    float lato2 = sqrt((t.v2.x - t.v3.x)*(t.v2.x - t.v3.x) + (t.v2.y - t.v3.y)*(t.v2.y - t.v3.y));
    float lato3 = sqrt((t.v3.x - t.v1.x)*(t.v3.x - t.v1.x) + (t.v3.y - t.v1.y)*(t.v3.y - t.v1.y));

    t.perimetro = lato1 + lato2 + lato3;

    float s = t.perimetro / 2;
    t.area = sqrt(s * (s - lato1) * (s - lato2) * (s - lato3));

    if (t.area < TOLL) {
        cout << "The points do not form a valid triangle (area zero or too small)." << endl;
        return 1;
    }

    bool pitagoraOK = false;
    if (lato1 > lato2 && lato1 > lato3)
        pitagoraOK = fabs(lato1*lato1 - lato2*lato2 - lato3*lato3) < TOLL;
    else if (lato2 > lato1 && lato2 > lato3)
        pitagoraOK = fabs(lato2*lato2 - lato1*lato1 - lato3*lato3) < TOLL;
    else if (lato3 > lato1 && lato3 > lato2)
        pitagoraOK = fabs(lato3*lato3 - lato1*lato1 - lato2*lato2) < TOLL;

    cout << "The triangle you entered:\n";
    cout << "- Has area: " << t.area << endl;
    cout << "- Has perimeter: " << t.perimetro << endl;

    if (pitagoraOK)
        cout << "- Is a right triangle." << endl;
    else
        cout << "- Is not a right triangle." << endl;

    return 0;
}
