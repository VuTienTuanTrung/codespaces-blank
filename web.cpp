/* Cấp phát mảng động */ 

#include <iostream>
using namespace std; 
int main() 
{ 
    const int SIZE = 5; int * pArray; pArray = new int[SIZE]; 
// Cấp phát mảng động thông qua toán tử new[] 
// Gán mỗi phần tử của mảng với một số ngẫu nhiên nằm trong khoảng 1 và 100 
for (int i = 0; i < SIZE; ++i) 
{ *(pArray + i) = rand() % 100; } 
// In ra mảng 
for (int i = 0; i < SIZE; ++i) 
{ cout << *(pArray + i) << " "; }
 cout << endl; 
delete[] pArray; 
// Giải phóng vùng nhớ thông qua toán tử new[]
 return 0; 
}
/*
int **a=new int*[n];    // cấp phát mảng 2 chiều
 for (int i=0;i<n;i++)
 for (int j=0;j<m,j++)
{
    cin>>a[i][j];
    a[i]=*(a+i);
    a[i][j]=*(a[i]+j)=*(*(a+i)+j);
} */
