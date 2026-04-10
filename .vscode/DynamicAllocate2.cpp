#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input with validation (must not exceed 3)
    do {
        cout << "Enter number of rows (max 3): ";
        cin >> rows;
    } while (rows < 1 || rows > 3);

    do {
        cout << "Enter number of columns (max 3): ";
        cin >> cols;
    } while (cols < 1 || cols > 3);

    // Dynamically allocate 2D array
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Input values using nested loops
    cout << "\nEnter values for the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output values
    cout << "\nArray elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}