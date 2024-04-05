
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int choice, n;
    float result = 0;
    vector<float> numbers;

    do {
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "How many numbers do you want to add? ";
                cin >> n;
                numbers.resize(n);
                cout << "Enter " << n << " numbers: ";
                for (int i = 0; i < n; ++i) {
                    cin >> numbers[i];
                    result += numbers[i];
                }
                cout << "Sum = " << result << endl;
                break;
            case 2:
                cout << "Enter the first number: ";
                cin >> result;
                cout << "How many numbers do you want to subtract? ";
                cin >> n;
                numbers.resize(n);
                cout << "Enter " << n << " numbers to subtract: ";
                for (int i = 0; i < n; ++i) {
                    cin >> numbers[i];
                    result -= numbers[i];
                }
                cout << "Result = " << result << endl;
                break;
            case 3:
                result = 1; // Initialize to 1 for multiplication
                cout << "How many numbers do you want to multiply? ";
                cin >> n;
                numbers.resize(n);
                cout << "Enter " << n << " numbers: ";
                for (int i = 0; i < n; ++i) {
                    cin >> numbers[i];
                    result *= numbers[i];
                }
                cout << "Product = " << result << endl;
                break;
            case 4:
                cout << "Enter the first number: ";
                cin >> result;
                cout << "How many numbers do you want to divide? ";
                cin >> n;
                numbers.resize(n);
                cout << "Enter " << n << " numbers to divide: ";
                for (int i = 0; i < n; ++i) {
                    cin >> numbers[i];
                    if (numbers[i] != 0)
                        result /= numbers[i];
                    else {
                        cout << "Error! Division by zero." << endl;
                        result = 0;
                        break;
                    }
                }
                cout << "Result = " << result << endl;
                break;
            case 5:
                cout << "Exiting calculator. Bye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
