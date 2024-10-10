// https://www.uobabylon.edu.iq/eprints/publication_11_24675_1652.pdf
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to perform the Gauss-Jordan elimination
void gaussJordan(vector<vector<double>> &matrix, int n) {
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1 by dividing the entire row
        double diagElement = matrix[i][i];
        if (diagElement == 0) {
            cout << "No unique solution exists (singular matrix)" << endl;
            return;
        }

        for (int j = 0; j <= n; j++) {
            matrix[i][j] /= diagElement;
        }

        // Make the other elements in the column 0
        for (int k = 0; k < n; k++) {
            if (i != k) {
                double factor = matrix[k][i];
                for (int j = 0; j <= n; j++) {
                    matrix[k][j] -= factor * matrix[i][j];
                }
            }
        }
    }

    // Display the solution
    cout << "Solution: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << matrix[i][n] << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of variables: ";
    cin >> n;

    vector<vector<double>> matrix(n, vector<double>(n + 1));

    cout << "Enter the augmented matrix (coefficients of the equations followed by the constant terms):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> matrix[i][j];
        }
    }

    gaussJordan(matrix, n);

    return 0;
}
