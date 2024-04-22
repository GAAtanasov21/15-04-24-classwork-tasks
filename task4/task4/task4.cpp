#include <iostream>
using namespace std;

class Point
{
private:
    int x, y, z;

public:
    Point()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Point(int newX, int newY, int newZ)
    {
        x = newX;
        y = newY;
        z = newZ;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
    void setX(int newX)
    {
        x = newX;
    }
    void setY(int newY)
    {
        y = newY;
    }
    void setZ(int newZ)
    {
        z = newZ;
    }

};

int main()
{
    Point p1;
    Point p2(1, 2, 3);
    cout << "Point 1: " << p1.getX() << " " << p1.getY() << " " << p1.getZ() << endl;
    cout << "Point 2: " << p2.getX() << " " << p2.getY() << " " << p2.getZ() << endl;
    p1.setX(2);
    p1.setY(3);
    p1.setZ(4);
    cout << endl;
    cout << "New coordinates of point 1: " << p1.getX() << " " << p1.getY() << " " << p1.getZ() << endl;
    Point p3 = p2;
    p3.setX(p2.getX() + 1);
    p3.setY(p2.getY() + 2);
    p3.setZ(p2.getZ() + 3);
    cout << endl;
    cout << "Point 1: " << p1.getX() << " " << p1.getY() << " " << p1.getZ() << endl;
    cout << "Point 2: " << p2.getX() << " " << p2.getY() << " " << p2.getZ() << endl;
    cout << "Point 3 mutaiton: " << p3.getX() << " " << p3.getY() << " " << p3.getZ() << endl;
}

