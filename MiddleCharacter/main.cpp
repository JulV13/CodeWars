#include <iostream>
#include <string>

using namespace std;

string get_middle(string input)
{
    if(input.length() % 2 == 0) {
        return(input.substr(input.size()/2-1,2));
    } else {
        return(input.substr(input.size()/2,1));
    }
}

int main() {
    cout << (get_middle("testing"));
    cout << "\n";
    cout << get_middle("middle");
}
