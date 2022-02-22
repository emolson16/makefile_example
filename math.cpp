#include <iostream>
using namespace std;
#include "Stats.h"
#include "Areas.h"


int main() {
    Areas area;
    cout << "The area of a 2 * 4 rectangle is " << area.rectArea(2, 4) << endl;
    cout << "The area of a 4 * 4 square is " << area.squareArea(4) << endl;
    cout << "The area of a triangle with base 2 and height 5 is " << area.triangleArea(2, 5) << endl << endl;

    Stats stats;
    int arr[] = {1, -100, -100, 9, 1};

    cout << "The average is " << stats.average(arr, 5) << endl;
    cout << "The max is " << stats.max(arr, 5) << endl;
    cout << "The min is " << stats.min(arr, 5) << endl;


    cout << "The mode is " << stats.mode(arr, 5) << endl;
}
