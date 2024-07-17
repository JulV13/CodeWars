#include <iostream>
#include <string>

using namespace std;

string reverse_words(string text) {
    cout << "Input text: " << text << "\n";
    int start=-1;
    int stop=-1;
    int spaces=0;
    int reverse_ready=0;
    int end_pass=0;
    string reversed_text="";
    for(int i=0;i<text.length();i++) {
        //whitespaces on start
        if(i==0 && isspace(text[i])) {
            while(text[i]==' ') {
                reversed_text.append(" ");
                i++;
            }
        }
        //whitespaces at then end
        if(i==text.length()-1 && isspace(text[i])) {
            reverse_ready=1;
            end_pass=1;
        }
        if(!isspace(text[i]) || end_pass==1) {
            if(i==text.length()-1) {
                stop=i;
                reverse_ready=1;
                if(end_pass==1) {
                    stop-=1;
                    spaces++;
                }
            }
            if(reverse_ready==1) {
                if(text[start+1]==' ') {
                    stop=start;
                }
                for(int j=stop;j>=start;j--) {
                    string str(1,text[j]);
                    reversed_text.append(str);
                }
                for(int k=0;k<spaces;k++) {
                    reversed_text.append(" ");
                }
                start=-1;
                stop=-1;
                spaces=0;
                reverse_ready=0;
            }
            if(start==-1) {
                start=i;
                if(start==text.length()-1 && text[start-1]==' ' && !isspace(text[start])) {
                    string str(1,text[start]);
                    reversed_text.append(str);
                }
            }
        } else {
            if(stop==-1) {
                stop=i-1;
                reverse_ready=1;
            }
            spaces++;
        }
    }
    cout << "Final text with reversed words: ";
    return reversed_text;
}

int main() {
    cout << reverse_words(" Test with a leading space");
}
