#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
    double area = 0.0;
    switch(ch) {
        case 1:
            area = M_PI * a[0] * a[0];
            break;
        case 2:
            area = a[0] * a[1];
            break;
    }
    return area;
}

int main() {
    int choice;
    vector<double> dimensions;

    cout << "Enter your choice (1 for circle, 2 for rectangle): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        dimensions.push_back(radius);
    } else if (choice == 2) {
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        dimensions.push_back(length);
        dimensions.push_back(width);
    } else {
        cout << "Invalid choice. Exiting..." << endl;
        return 1;
    }

    double result = areaSwitchCase(choice, dimensions);
    cout << "Area: " << result << endl;

    return 0;
}
