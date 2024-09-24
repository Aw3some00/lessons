/*#include <iostream>
#include <vector>
void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {

    size_t length = 3;
    size_t width = 3;
    std::vector<int> column(width, 0);
    std::vector<std::vector<int>> matrix(length, column);
    std::vector<std::vector<int>> matrix_mod(length, column);
    for(int f = 0; f <length; f++) {
        for(int j = 0;j< width; j++) {
            std::cin >> matrix[f][j];
        }
    }
 for (int i = 0; i < length; i++) {
     for (int j = 0; j < width; j++) {
         matrix_mod[i][j]=matrix[i][j];
     }
     
   
 }


   for (int k = 0; k < length; k++) {
        for (int j = k + 1; j < width; j++) {
            swap(matrix_mod[k][j], matrix_mod[j][k]);
        }
    }


    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << matrix_mod[i][j] << "  ";
        }
        std::cout<<"\n";
      
    }

    return 0;
}*/
 
