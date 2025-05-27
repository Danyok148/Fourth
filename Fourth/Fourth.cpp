#include <iostream>
using namespace std;

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = i - 10;
    }

    cout << "Even values:" << endl;
    for (int i = 0; i < 20; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Negative values:" << endl;
    for (int i = 0; i < 20; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += arr[i];
    }
    cout << "Sum of all elements: " << sum << endl;

    double average = sum / 20.0;
    cout << "Average value: " << average << endl;

    int userNumber;
    bool found = false;
    cout << "Enter a number to search: ";
    cin >> userNumber;
    for (int i = 0; i < 20; i++) {
        if (arr[i] == userNumber) {
            cout << "Index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Number is not part of the array" << endl;
    }

    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < 20; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    cout << "Max value: " << maxVal << endl;
    cout << "Min value: " << minVal << endl;

    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 20; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << "Fibonacci array:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array in reverse order:" << endl;
    for (int i = 19; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
