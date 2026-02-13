#include<iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int A[10][10], B[10][10], sum[10][10], product[10][10];

    // Input matrices
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> B[i][j];

    // Addition
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = A[i][j] + B[i][j];

    cout << "Matrix Addition:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    // Multiplication (only if square matrix)
    cout << "Matrix Multiplication:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            product[i][j] = 0;
            for(int k = 0; k < c; k++)
                product[i][j] += A[i][k] * B[k][j];
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
