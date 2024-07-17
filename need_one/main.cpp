#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool check(const vector<string>& vec, const string& el) {
    for (auto v : vec) {
        if (v==el) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<string> siema = {"a","b","c"};
    string element = "b";
    cout << check(siema,element);
}
