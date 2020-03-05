// CIS108_lab6_8.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int width;
    int height;
    int x_axis = 1;
    int y_axis = 1;

    int up_left_corner = 218;
    int up_right_corner = 191;
    int low_left_corner = 192;
    int low_right_corner = 217;
    int sides = 179;
    int top_bottom = 196;

    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Enter height of rectangle: ";
    cin >> height;

    //while (x_axis < 1) 
    //{

    width *= 2;
    cout << char(up_left_corner);
    //    x_axis++;
    //}

    while (/*x_axis >= 1 &&*/ x_axis < width)
    {
        cout << char(top_bottom);
        x_axis++;
    }
    /* for (x_axis; x_axis = width; x_axis++)
     {
         cout << char(up_right_corner);

     }*/

    cout << char(up_right_corner) << endl;

    while (y_axis < height)
    {
        cout << char(sides) << setw(width) << char(sides) << endl;
        y_axis++;
    }
    //x_axis = 0;

    cout << char(low_left_corner);

    for (y_axis = height, x_axis = 1; y_axis = height, x_axis < width; x_axis++)
    {
        cout << char(top_bottom);

    }

    cout << char(low_right_corner) << endl;
}