#include <iostream>

using namespace std;

int summation(const int num) {
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum = sum+i;
    }
    return sum;
}

int main() {
    cout << "grasshopper - sumation: " << summation(13);
    return 0;
}
