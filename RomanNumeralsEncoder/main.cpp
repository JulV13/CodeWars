#include <iostream>
#include <string>

using namespace std;

string solution(int number){
    string out="";
   if (number >= 1000 && number <= 3999) {
       // numbers from 1000 to 3999
       for(int i=0;i<number/1000;i++) {
           out+="M";
       }
       number = number % 1000;
   }
    if(number >=100 && number <= 999) {
        if (number/100==9 || number/100==4) {
            if (number/100==9) {
                out+="CM";
            }
            if (number/100==4) {
                out+="CD";
            }
        } else {
            if (number >=100 && number <500) {
                for (int i = 0; i < number/100; i++) {
                    out+="C";
                }
            }
            if (number == 500) {
                out+="D";
            }
            if (number > 500) {
                out+="D";
                for (int i = 0; i < (number/100)-5; i++) {
                    out+="C";
                }
            }
        }
       number = number % 100;
   }
    if(number >=10 && number <=99){
        if (number/10==9 || number/10==4) {
            if(number/10==9) {
                out+="XC";
            }
            if(number/10==4) {
                out+="XL";
            }
        } else {
            if(number>=10 && number <50) {
                for (int i = 0; i < number/10; i++) {
                    out+="X";
                }
            }
            if (number==50) {
                out+="L";
            }
            if (number>50) {
                out+="L";
                for (int i = 0; i < (number/10)-5; ++i) {
                    out+="X";
                }
            }
        }
        number = number % 10;
   }
    if (number >=1 && number <=9) {
        switch(number) {
            case 1:
                out+="I";
                break;
            case 2:
                out+="II";
                break;
            case 3:
                out+="III";
                break;
            case 4:
                out+="IV";
                break;
            case 5:
                out+="V";
                break;
            case 6:
                out+="VI";
                break;
            case 7:
                out+="VII";
                break;
            case 8:
                out+="VIII";
                break;
            case 9:
                out+="IX";
                break;
            default:
                break;
        }
   }
    return out;
}

int main() {
    cout << solution(1666);
}
