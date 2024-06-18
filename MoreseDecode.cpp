#include <iostream>
#include <string>
#include <cstring>
#pragma once

#ifndef MRS_H
#define MRS_H

using namespace std;

string moreseAlph[36] {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..", "----." };
string Alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // 36 letters in total
string SpaceSample = " ";

class actions {
    private:
    string getMWord = moreseAlph[0]; // any num in range 0-36 is ok
    char getCharfromMWord = getMWord[0]; // any num in range 0-gitMWord.size() is ok
    char space = SpaceSample[0];

    public:
    int getWords(string in) {
        int amount=0;
        for (int i=0; i<in.size(); i++) {
            if (in[i]==space) {
                amount+=1;
            }
        }
        return amount;
    }

    void code(string in) {
    string ret;
    for (int i=0; i<in.size(); i++) {
        for (int ii=0; ii<36; ii++) {
            if (in[i]==Alph[ii]) {
                cout<<moreseAlph[ii]<<" ";
                }
            }
        }
    }

    void decode(string in) {
        int WordsAmount = getWords(in);
        int i=0;
        for (int iWordsN=0; iWordsN<WordsAmount; iWordsN++) {
            string Wresult;
            while (in[i]!=space) {
                Wresult+=in[i];
                i+=1;
            }
            for (int WordCompare=0; WordCompare<36; WordCompare++) {
                if (Wresult==moreseAlph[WordCompare]) {
                    cout<<Alph[WordCompare]<<" ";
                    break;
                }
            }
            i+=1;    
        }
    }
};

int main() {
    /*
    string input;
    code(input);*/
    actions actReference;
    string input;
    cout<<"There must be space after last morse letter to decode!"<<endl;
    getline(cin, input); 
    actReference.decode(input);
}
#endif