#include<iostream>

using namespace std;

int main(){
int M[10][10], transM[10][10], r, c, i, j;
cout << "Enter the number of rows and columns of the matrix: ";
cin >> r >> c;
// Matrix M[][] for recording the values entered by the user
cout << endl << "Enter the matrix elements: " << endl;
for (i = 0; i < r; ++i)
     for (j = 0; j < c; ++j) {
         cout << "Enter the elements of M" << i + 1 << j + 1 << ": ";
             cin >> M[i][j];
}
// Paradisana of Martica M[][].
cout << endl << "Entered Matrix: " << endl;
for (i = 0; i < r; ++i)
         for (j = 0; j < c; ++j) {
             cout << " " << M[i][j];
                 if (j == c - 1)
                     cout << endl << endl;
}
// Transpose matrix M[][] to transM[][]
for (i = 0; i < r; ++i)
     for (j = 0; j < c; ++j) {
         transM[j][i] = M[i][j];
}
// Transponet matrix transM[][] paradisa-a
cout << endl << "Transpose Matrix: " << endl;
for (i = 0; i < c; ++i)
for (j = 0; j < r; ++j) {
cout << " " << transM[i][j];
if (j == r - 1)
cout << endl << endl;
}
return 0;
}
