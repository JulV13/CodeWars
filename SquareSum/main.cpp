#include <iostream>
#include <vector>

using namespace std;

int square_sum(const vector<int>& numbers)
{
    int sum=0;
    for (auto n : numbers) {
        sum=sum+(n*n);
    }
    return sum;
}

int main() {
    cout << "square sum is: " << square_sum({1,2,3});
}
