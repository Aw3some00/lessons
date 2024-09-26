#include <iostream>
#include <vector>

int main() {
    size_t length = 4;
    size_t width = 3;

    std::cout << "Введите матрицу размером " << width << " на " << length << "\n";

    std::vector<std::vector<int>> matrix(width, std::vector<int>(length));
    std::vector<std::vector<int>> matrix_mod(length, std::vector<int>(width));

    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < length; ++j) {
            std::cin >> matrix[i][j];
        }
    }



    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < length; ++j) {
            matrix_mod[j][i] = matrix[i][j];
        }
    }


    std::cout << "\nМатрица после транспонирования:\n";
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << matrix_mod[i][j] << "  ";
        }
        std::cout << "\n";
    }

    std::cout << "Размер стал " << length << " на " << width << "\n";
    return 0;
}

