#include <iostream>
#include <string>

using namespace std;

string disemvowel(string str) {
    for (int i = 0; i < str.length(); ++i) {
        if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u') {
            for (int j = i; j < str.length(); ++j) {
                str[j]=str[j+1];
                i=0;
            }
            str.resize(str.size()-1);
        }
    }
    return str;
}

int main() {
    cout << disemvowel("No offense but, Your writing is among the worst I've ever read");
}
