/*
compute the areas of different geometric shapes: circle, square, rectangle, triangle
*/

#include <iostream>

using namespace std;

int main()
{
    const char CIRCLE = 'c', SQUARE = 's', RECTANGLE = 'r', TRIANGLE = 't';
    float circle, square, rectangle, triangle;
    char input;
    float area, radius, side, length, width;
    const float PI = 3.1416;


    cout << "Enter the shape that the areas you want to know?\n"
    "(If it is circle, enter 'c'. If it is square, enter 's'."
    " If it is rectangle, enter 'r'. If it is triangle, enter 't') " << endl;
    cin >> input;

    switch (input)
    {
        case CIRCLE:
            cout << "What is the radius of the circle? " << endl;
            cin >> radius;
            circle = radius * radius * PI; // The formula to find the area of the circle.
            cout << "\nIf the radius is " << radius << " and the PI is 3.1416" << endl;
            cout << "Area of Circle = (radius * radius * PI)" << endl;
            cout << "Therefore, the area of the circle is " << circle << endl;
            break;

        case SQUARE:
            cout << "What is the side of the square? " << endl;
            cin >> side;
            square = side * side; // The formula to find the area of the square.
            cout << "\nIf the side is " << side << endl;
            cout << "Area of Square = (side * side)" << endl;
            cout << "Therefore, the area of the square is " << square << endl;
            break;

        case RECTANGLE:
            cout << "What is the height of the rectangle? ";
            cin >> length;
            cout << "What is the width of the rectangle? ";
            cin >> width;
            rectangle = length * width; // The formula to find the area of the rectangle.
            cout << "\nIf the height is " << length << " and the width is " << width << endl;
            cout << "Area of Rectangle = (height * width)" << endl;
            cout << "Therefore, the area of the rectangle is " << rectangle << endl;
            break;

        case TRIANGLE:
            cout << "What is the height of the triangle? ";
            cin >> length;
            cout << "What is the width of the triangle? ";
            cin >> width;
            triangle = length * width * 0.5; // The formula to find the area of triangle.
            cout << "\nIf the height is " << length << " and the width is " << width << endl;
            cout << "Area of Triangle = (height * width * 0.5)" << endl;
            cout << "Therefore, the area of the triangle is " << triangle << endl;
            break;
        default:
            cout << "Read the instruction carefully, and retype the abbreviation of the shape you want!" << endl;
    }

    return 0;
}

