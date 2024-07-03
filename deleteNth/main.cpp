#include <iostream>
#include <vector>

using namespace std;

//Delete occurrences of an element if it occurs more than n times

vector<int> deleteNth(vector<int>wektor,int n) {
    int checker=1;
    /*
    for(auto test : wektor) {
        cout << test <<", ";
    }
    cout << "N: " << n << "\n";
    */
    for(vector <int>::iterator it=wektor.begin();it!=wektor.end();++it) {
        for (vector <int>::iterator it2=it+1;it2!=wektor.end();++it2) {
            /*
            cout << "Compare " <<*it<< " with " << *it2 << "\n";
            cout << "checker == " << checker << "\n";
            */
            if(*it==*it2) {
                checker++;
                if(checker>n) {
                    /*
                    for(auto test : wektor) {
                        cout << test <<" ";
                    }
                    cout << "\n";
                    cout << "checker == " << checker << "\n";
                    cout << "Erasing: " << *it2 << "\n";
                    */
                    wektor.erase(it2);
                    it2--;
                    /*
                    for(auto test : wektor) {
                        cout << test <<" ";
                    }
                    cout << "\n";
                    */
                }
            }
        }
        checker=1;
    }
    return wektor;
}

int main() {
    vector <int> wektor={28, 47, 4, 28, 27, 47, 27, 47, 28, 27, 4, 4, 27, 47, 27, 47, 47, 28, 28, 47, 27, 47, 27};
    cout << "Vector before operation:\n";
    for(auto test : wektor) {
        cout << test <<" ";
    }
    cout << "\n";
    wektor=deleteNth(wektor,4);
    cout << "Vector after operation:\n";
    for(auto test : wektor) {
        cout << test <<" ";
    }
}


