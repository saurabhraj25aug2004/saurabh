
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of rows and columns: ";
    cin >> n;
    cout << "Enter the elements of the 2D matrix: ";
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j]; // Corrected indexing
        }
    }

    // 90 degree rotation
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { // changed condition from j<n to j<i
            if(i<=j)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    }
    cout<<"swap"<<endl;

     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<< a[i][j]<<" "; // Corrected indexing
        }
        cout<<endl;
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n / 2; i++) {
            swap(a[i][j], a[n-i-1][j]); // corrected swapping indices
        }
    }

    cout << "After 90 degree rotation, the matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}
