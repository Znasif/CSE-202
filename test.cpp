#include "point.cpp"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    Point A, B, C, D, I(0, 0);

    A.scan();
    B.scan();
    D.scan();


    C = A + (D - A) + (B - A);
    C.print();

    I = ( D + B ) / 2;
    I.print();

    double area = fabs((D - A) * (B - A));
    cout << area <<endl;

    return 0;
}
