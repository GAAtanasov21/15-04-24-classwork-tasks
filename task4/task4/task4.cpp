#include <iostream>
using namespace std;

class Point
{
private:
    int pointX, pointY, pointZ;

public:
    Point()
    {
        pointX = 0;
        pointY = 0;
        pointZ = 0;
    }
    Point(int newPointX, int newPointY, int newPointZ)
    {
        pointX = newPointX;
        pointY = newPointY;
        pointZ = newPointZ;
    }
    int getPointX()
    {
        return pointX;
    }
    int getPointY()
    {
        return pointY;
    }
    int getPointZ()
    {
        return pointZ;
    }
    void setPointX(int newPointX)
    {
        pointX = newPointX;
    }
    void setPointY(int newPointY)
    {
        pointY = newPointY;
    }
    void setPointZ(int newPointZ)
    {
        pointZ = newPointZ;
    }

};

int main()
{
    Point p1;
    Point p2(1, 2, 3);
    cout << "Point 1: " << p1.getPointX() << " " << p1.getPointY() << " " << p1.getPointZ() << endl;
    cout << "Point 2: " << p2.getPointX() << " " << p2.getPointY() << " " << p2.getPointZ() << endl;
    p1.setPointX(2);
    p1.setPointY(3);
    p1.setPointZ(4);
    cout << endl;
    cout << "New coordinates of point 1: " << p1.getPointX() << " " << p1.getPointY() << " " << p1.getPointZ() << endl;
    Point p3 = p2;
    p3.setPointX(p2.getPointX() + 1);
    p3.setPointY(p2.getPointY() + 2);
    p3.setPointZ(p2.getPointZ() + 3);
    cout << endl;
    cout << "Point 1: " << p1.getPointX() << " " << p1.getPointY() << " " << p1.getPointZ() << endl;
    cout << "Point 2: " << p2.getPointX() << " " << p2.getPointY() << " " << p2.getPointZ() << endl;
    cout << "Point 3 mutaiton: " << p3.getPointX() << " " << p3.getPointY() << " " << p3.getPointZ() << endl;
}

