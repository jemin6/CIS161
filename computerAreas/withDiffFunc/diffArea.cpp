/*
compute the areas of different geometric shapes: circle, square, rectangle, triangle
*/

#include <iostream>

using namespace std;

double circle(double radius) // This is the function to find the area of circle.
{
    const float PI = 3.1416;

    double circle_Area = radius * radius * PI;
    return circle_Area;
}

double square(double side) // This is the function to find the area of square.
{
    double square_Area = side * side ;
    return square_Area;
}
double rectangle(double length, double width) // This is the function to find the area of rectangle.
{
    double rectangle_Area = length * width;
    return rectangle_Area;
}
double triangle(double length, double width) // This is the function to find the area of triangle.
{
    double triangle_Area = length * width * 0.5;
    return triangle_Area;
}

bool getYN(string question) // It gives choose to try again or not.
{
    char anwser;
    cout << question;
    cin >> anwser;

    while ( anwser != 'Y' and anwser != 'N') //When the answer is not Y nor N, it says try again.
    {
        cout << "That was a yes or no question, please try again." ;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> anwser;
    }
    return anwser == 'Y';
}


int main()
{
    const char CIRCLE = 'c', SQUARE = 's', RECTANGLE = 'r', TRIANGLE = 't';
    char input;
    double c_area, s_area, r_area, t_area;
    double radius, side, length, width;
    string question1 = "Do you want to try another one? (Y/N)  " ;

    cout << "Welcome, this is a program to find Areas of Geometric Shapes" << endl;

    do {
        cout << "\nHere are the shapes that you can find out.\n"
             << "   //option1: To find area of circle, enter 'c'.\n"
             << "   //option2: To find area of square, enter 's'.\n"
             << "   //option3: To find area of rectangle, enter 'r'.\n"
             << "   //option4: To find area of triangle, enter 't'.\n"
             << "Input the short cut of the area of the shape you want to figure out: ";

        cin >> input;

        switch (input)
        {
            case CIRCLE: //If the input is 'c', find the area of circle.
                cout << "\n\nIf you want to know the area of the circle\n\n"
                     << "     Enter the radius: ";
                cin >> radius;
                c_area = circle(radius);
                cout << "\nWhen the radius is (" << radius << ") the area of the circle is (" << c_area << ")" <<  endl;
                break;
            case SQUARE: //if input is 's', find the area of square.
                cout << "\n\nIf you want to know the area of the square\n\n"
                     << "     Enter the side: ";
                cin >> side;
                s_area = square(side);
                cout << "\nWhen the side is (" << side << ") the area of square is (" << s_area << ")" << endl;
                break;
            case RECTANGLE: //If the input is 'r', find the area of rectangle.
                cout << "\n\nIf you want to know the area of the rectangle\n\n"
                     << "     Enter the length: ";
                cin >> length;
                cout << "     Enter the width: ";
                cin >> width;
                r_area = rectangle(length, width);
                cout << "\nWhen the length is (" << length << ") and width is (" << width
                     << ") the area of rectangle is (" << r_area << ")" << endl;
                break;
            case TRIANGLE: // if the input is 't', find the area of triangle.
                cout << "\n\nIf you want to know the area of the triangle\n\n"
                     << "     Enter the length: ";
                cin >> length;
                cout << "     Enter the width: ";
                cin >> width;
                t_area = triangle(length, width);
                cout << "\nWhen the length is (" << length << ") and width is (" << width
                     << ") the area of triangle is (" << t_area << ")" << endl;
                break;
            default:
                cout << "\n### Read the instruction carefully ###\n"
                     << "### Retype the abbreviation of the shape you want ### " << endl;
        }
    } while(getYN(question1));

    return 0;
}

