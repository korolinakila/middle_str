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

 int itc_countWords(string str){
     int t=1, f=0, d=1, lox=0;
 for(long long i=0; i<itc_len(str); i++){
        if(str[i]==' '){
            t++;
            d=1;
        }
    if(((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||str[i]==' ')&&d!=1){
        lox++;

 }


 }
 return (f);
 }
