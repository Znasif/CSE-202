#include<iostream>
using namespace std;

class Point {
    double x, y;
    public:
    void scan();
    void print();
    Point(){}
    Point(double x, double y){
        this->x=x;
        this->y=y;
    }
    Point operator + (const Point &o){
        Point temp;
        temp.x=x+o.x;
        temp.y=y+o.y;
        return temp;
    }
    Point operator - (const Point &o){
        Point temp;
        temp.x=x-o.x;
        temp.y=y-o.y;
        return temp;
    }
    Point operator / (double a){
        Point temp;
        temp.x=x/a;
        temp.y=y/a;
        return temp;
    }
    double operator * (const Point &o){
        return x*o.y-y*o.x;
    }
};

void Point :: scan() {
    cin >> x >> y;
}

void Point :: print() {
    cout << "(" << x << "," << y << ")" << endl;
}
