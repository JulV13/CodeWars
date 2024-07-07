#include <iostream>

using namespace std;

int litres(const double time) {
    return time*0.5;
}

int main() {
    cout << "litres: " << litres(3);
    return 0;
}
