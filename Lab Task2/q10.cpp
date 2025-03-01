#include <iostream>

using namespace std;

int main() {
    int daynumber;

    cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    cin >> daynumber;

    switch  (daynumber) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid Day Number" << endl;
    }

    return 0;
}
