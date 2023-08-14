//using a class to model (3 * 3) matirx overload * operator to multiply two matrices
#include <iostream>
using namespace std;

class Matrix3x3 {
private:
    int data[3][3];

public:
    Matrix3x3() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                data[i][j] = 0;
            }
        }
    }

    Matrix3x3(int values[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                data[i][j] = values[i][j];
            }
        }
    }

    Matrix3x3 operator*(const Matrix3x3& other) {
        Matrix3x3 result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int values1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {56, 8, 9}};

    int values2[3][3] = {{9, 8, 7},
                         {6, 5, 4},
                         {3, 2, 1}};

    Matrix3x3 matrix1(values1);
    Matrix3x3 matrix2(values2);

    cout << "Matrix 1:" << endl;
    matrix1.display();

    cout << "Matrix 2:" << endl;
    matrix2.display();

    Matrix3x3 result = matrix1 * matrix2;

    cout << "Result of multiplication:" << endl;
    result.display();

    return 0;
}
