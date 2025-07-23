#include <iostream>
using namespace std;

//Function Prototypes
void getLength_Width(double& length, double& width);
double calcPerimeter(double length, double width);
double calcArea(double length, double width);
void displayProperties(double perimeter, double area);


/*
 
 This program gets the length and width of a rectangle, then calculates and displays its perimeter and area.
 It repeats until the user decides to quit.
*/
int main() 
{
    double length = 0.0, width = 0.0;
    char choice = 'Y';

    while (toupper(choice) == 'Y') 
    {
        //Get and validate input
        getLength_Width(length, width);

        //Calculate perimeter
        double perimeter = calcPerimeter(length, width);

        //Calculate area
        double area = calcArea(length, width);

        //Display results
        displayProperties(perimeter, area);

        //Ask to repeat
        cout << "Do you want to process another rectangle? (Y/N): ";
        cin >> choice;
        cout << endl;
    }

    cout << "Goodbye!" << endl;
    return 0;
}

/*
 Prompts the user to enter length and width, validating both must be > 0.
 Preconditions: none.
 Postconditions: 'length' and 'width' contain positive values entered by user.
*/
void getLength_Width(double& length, double& width) 
{
    cout << "Enter length: ";
    cin >> length;
    while (length <= 0) 
    {
        cout << "Invalid—must be positive. Re-enter length: ";
        cin >> length;
    }

    cout << "Enter width: ";
    cin >> width;
    while (width <= 0) 
    {
        cout << "Invalid—must be positive. Re-enter width: ";
        cin >> width;
    }
}

/*
Calculates and returns the perimeter: 2*(length + width)
Preconditions: length and width are valid (>0).
Postconditions: returns the perimeter value.
*/
double calcPerimeter(double length, double width) 
{
    return 2.0 * (length + width);
}

/*
Calculates and returns the area: length * width
Preconditions: length and width are valid (>0).
Postconditions: returns the area value.
*/
double calcArea(double length, double width) 
{
    return length * width;
}

/*
Displays the perimeter and area.
Preconditions: valid numeric values.
Postconditions: outputs results to cout; returns nothing.
*/
void displayProperties(double perimeter, double area) 
{
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area     : " << area << endl;
}