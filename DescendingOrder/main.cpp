#include <algorithm>
#include <iostream>
#include <cinttypes>
#include <sstream>
#include <string>

using namespace std;

uint64_t descendingOrder(uint64_t a)
{
    string text = to_string(a);
    sort(text.begin(),text.end(),greater<int>());
    uint64_t val;
    istringstream(text) >> val;
    return val;
}

int main() {
    cout << descendingOrder(1505557726779394822);
}
