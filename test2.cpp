#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Enter the dimensions of the array: ";
    cin >> n >> m;

    int **a = new int*[n];    // cấp phát mảng 2 chiều
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Remember to deallocate the memory
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}