#include <iostream>

using namespace std;

void smaller(int length, const int array[5], int results[5]) {
    for (int i = 0; i < length; ++i) {
        for (int j = i+1; j < length; ++j) {
            if(array[i]>array[j]) {
                results[i]+=1;
            }
        }
    }
}

int main() {
    const int tab[5]={5,4,3,2,1};
    int results[5]={0,0,0,0,0};
    smaller(5,tab,results);
    for (int i = 0; i < 5; ++i) {
        cout << results[i] << "\n";
    }
}
