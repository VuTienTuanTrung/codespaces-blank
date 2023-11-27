#include <iostream>
using namespace std;
int** keepEven(int** matrix, int nRows, int nCols) {
    // Bước 1: Tạo ma trận mới
    int** newMatrix = new int*[nRows];
    for (int i = 0; i < nRows; ++i) {
        newMatrix[i] = new int[nCols];
    }

    // Bước 2: Duyệt qua từng phần tử
    for (int i = 0; i < nRows; ++i) {
        for (int j = 0; j < nCols; ++j) {
            if (*(*(matrix+i)+j) % 2 == 0) {
                newMatrix[i][j] = matrix[i][j];
            } else {
                newMatrix[i][j] = 0;
            }
        }
    }

    // Bước 3: Trả về ma trận mới
    return newMatrix;
}
int main() {
    int nRows , nCols;
    cin>>nRows>>nCols;
    int** matrix = new int*[nRows];
    for (int i = 0; i < nRows; ++i) {
        matrix[i] = new int[nCols];
    }

    // Nhập ma trận
for (int i=0;i<nRows;i++){
    for (int j=0;j<nCols;j++){
        cin>>matrix[i][j];
    }
}

    // Gọi hàm keepEven
    int** newMatrix = keepEven(matrix, nRows, nCols);

    // In ra ma trận mới
    for (int i = 0; i < nRows; ++i) {
        for (int j = 0; j < nCols; ++j) {
            cout << newMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // Giải phóng vùng nhớ
    for (int i = 0; i < nRows; ++i) {
        delete[] matrix[i];
        delete[] newMatrix[i];
    }
    delete[] matrix;
    delete[] newMatrix;

    return 0;
}