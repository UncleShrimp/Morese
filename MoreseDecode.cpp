#include <iostream>
#include <string>
using namespace std;

string morseAlph[36] {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..", "----." };
string Alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

void code(string in) {
    getline(cin, in);
    string ret;
    for (int i=0; i<in.size(); i++) {
        for (int ii=0; ii<36; ii++) {
            if (in[i]==Alph[ii]) {
                cout<<morseAlph[ii]<<" ";
            }
        }
    }
}

int main() {
    /*
    string input;
    code(input);*/
    string input;
    getline(cin, input);
    string sup2=morseAlph[0];
    if (input[0]==sup2[0] && input[1]==sup2[1]) {
        cout<<"h"<<endl;
    }
}