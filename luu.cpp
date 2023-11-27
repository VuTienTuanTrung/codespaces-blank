/*#include <iostream>
using namespace std;
int main(){
int m,n;
cin>>n>>m;
int **a=new int*[n];    // cấp phát mảng 2 chiều
 for (int i=0;i<n;i++)
 for (int j=0;j<m,j++)
{
    cin>>a[i][j];
    a[i]=*(a+i);
    a[i][j]=*(a[i]+j)=*(*(a+i)+j);
}
}*/
/*
test.cpp
    TEST1.
bool* isHigher(int* arr, int num, int thres) {
    bool* result = new bool[num]; // cấp phát mảng bool

    for (int i = 0; i < num; i++) {
        if (arr[i] >= thres) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }

    return result;
}

    TEST2.
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

    TEST3.
    int ** getImage(int nRows, int nCols){
    int **kq=new int *[nRows];
    for (int i=0;i<nRows;i++){
        kq[i]=new int [nCols];
        for(int j=0;j<nCols;j++){
            cin>>*(*(kq+i)+j);
        }
    }
    return kq;
}
void fillImage(int** image,int nRows, int nCols, int threshold){
    for(int i=0;i<nRows;i++){
        for (int j=0;j<nCols;j++){
            if(*(*(image+i)+j)<threshold) image[i][j]=0;
        }
    }
}

void print(int** image, int nRows, int nCols){
    for(int i=0;i<nRows;i++){
        for(int j=0;j<nCols;j++){
            cout<<*(*(image+i)+j)<<" ";
        }
        cout<<endl;
    }
}

    TEST4.
    int * merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int len=lenArr1+lenArr2;
    int *kq=new int [len];
    for(int i=0;i<len;i++){
        if(i<lenArr1) {
            kq[i]=firstArr[i];
        } else {
            kq[i]=secondArr[i - lenArr1]; // sửa ở đây
        }
    }
    bool kt=false;
    if(firstArr[1]<firstArr[4])kt=true;
    if(kt==true){
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            if(kq[i]>kq[j]) swap(kq[i],kq[j]);
        }
    }}
    else {
        for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            if(kq[i]<kq[j]) swap(kq[i],kq[j]);
        }
    }
    }
    return kq;
}

    TEST5.
    




*/