#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplication_table(int n){
    vector<int> v1;
    vector<vector<int>> v2;
    int repeat=1;
    for (int i = 0; i < n; ++i) {
        for (int i = 0; i < n; ++i) {
            v1.push_back((i+1)*repeat);
        }
        v2.push_back(v1);
        v1.clear();
        repeat+=1;
    }
    return v2;
}

int main() {
    multiplication_table(3);
}
