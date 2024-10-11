#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int total_area, roof_area, garden_area, without_roof, material_type, basic_services, floors;

    cout << "Enter the total area:" << endl;
    cin >> total_area;
    cout << "Enter the area of the roof:" << endl;
    cin >> roof_area;
    cout << "Enter the area of the garden:" << endl;
    cin >> garden_area;
    without_roof = total_area - (roof_area + garden_area);
    double tax = 5 * roof_area + 3 * without_roof + 1 * garden_area;
    
    double total_area1, total_area2, total_area3;
    total_area1 = 1.15;
    total_area2 = 1.1;
    total_area3 = 1.05;
    cout << "Choose the type of material: (1 - high quality, 2 - straw, 3 - other materials) " << endl;
    cin >> material_type;
    switch (material_type) {
        case 1: 
        tax *= total_area1;
        break;
        case 2:
        tax *= total_area2;
        break;
        case 3:
        tax *= total_area3;
        break;
        default:
        cout << "Error"<< endl;
        return 0;
    }
    cout << "Enter 1 if you have basic services and 2 in case you don't have them:" << endl;
    cin >> basic_services;
    switch (basic_services) {
      case 1:
        tax = tax + 2.5;
        break;
        case 2:
        tax = tax;
        break;
        default:
        cout << "Error";
    }
    cout << "Enter the number of floors: (1 - 2 floors, 2 - 3 or 4 floors, 3 - more than 4 floors" << endl;
    cin >> floors;

    switch (floors) {
        case 1:
        tax *= tax * 1.1;
        break;
        case 2:
        tax = tax * 1.15;
        break;
        case 3: 
        tax = tax * 1.2;
        break;
        default:
        cout << "Error";
    }
    
cout << "The final tax: " << tax * 1000 << "rubles" << endl;
    return 0;
}