#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows (max 3): ";
    cin >> rows;
    cout << "Enter number of columns (max 3): ";
    cin >> cols;

    // Enforce dimension limit
    if (rows > 3 || cols > 3) {
        cout << "Dimensions must not exceed 3!" << endl;
        return 1;
    }

    // Allocate 2D array dynamically
    double** matrix = new double*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new double[cols];
    }

    // Input values
    cout << "\nEnter values for the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Output values
    cout << "\nMatrix values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
