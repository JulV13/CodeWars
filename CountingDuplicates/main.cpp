#include <iostream>
#include <list>

using namespace std;

int duplicateCount(string stringy){
    list <char> lista;
    for(int i=0;i<stringy.length();i++) {
        for(int j=i+1;j<stringy.length();j++) {
            if(tolower(stringy[i])==tolower(stringy[j])) {
                lista.push_front(tolower(stringy[i]));
            }
        }
    }
    lista.sort();
    lista.unique();
    int number = lista.size();
    return number;
}

int main() {
    cout << duplicateCount("aabBcde");
}


