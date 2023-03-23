#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 5, snake[x][y];

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            int k = (y - 1) * (i % 2) + (1 + (-2) * (i % 2)) * j;
            snake[i][k] = i * y + j;
        }
    }

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << snake[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}
