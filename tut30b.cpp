#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;
    friend void distance(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

void distance(point p1, point p2)
{
    int x_diff = (p1.x - p2.x);
    int y_diff = (p1.y - p2.y);
    double diff = sqrt(pow(x_diff ,2) + pow(y_diff,2));
    cout << "The distance is " << diff << endl;
}

// Create a function which takes 2 point objects and computes the distance between them
int main()
{
    point p1(5, 9);
    p1.displaypoint();

    point p2 = point(2, 5);
    p2.displaypoint();

    distance(p1, p2);

    return 0;
}