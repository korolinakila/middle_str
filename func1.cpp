#include <iostream>
#include "middle_str.h"
#include <string>
using namespace std;

long long itc_len(string str){
    long long k;
    for(long long i=0; str[i]!='\0'; i++){
    k = i;
    }
    return k+1;
}   //0

bool itc_isDigit(unsigned char c){
    return (c>='0' && c<='9');
} //1

unsigned char itc_toUpper(unsigned char c){
    if(c>='a' && c<='z'){
        return c-32;    }
return c;
}   //2

unsigned char itc_changeCase(unsigned char c){
    if(c>='a' && c<='z'){
        return c-32;
    }
    if(c>='A' && c<='Z'){
        return c+32;
    }
return c;
}   //3

bool itc_compare(string s1, string s2){
     if(itc_len(s1)==itc_len(s2)){
        for(long long i=0; i<itc_len(s1); i++){
            if(s1[i]!=s2[i]){
                return 1<0;
            }
        }
        return 0<1;
     }
     return 0>1;
 }  //4

bool slo (string s1){
for (int i=0; i < itc_len(s1); i++){
    if(!((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z'))){
        return false;
    }

}
return true;
}
string pol(int pr1, int pr2, string S){
    string slovo="";
    pr1=pr1+1;
    for(pr1; pr1<pr2; pr1++){
        slovo+=S[pr1];
    }
    return slovo;
}

int itc_countWords(string str){
    string S = ' ' +str+ ' ', NS="";
    int pr1 = 0, pr2, kol=0;
    for(int i=1; i<itc_len(S); i++){
        if(S[i]==' '){
            pr2=i;
            NS = pol(pr1, pr2, S);
            if(slo(NS)){
                kol++;
            }
            NS="";
            pr1=pr2;
        }

}
return kol;
}    //5

