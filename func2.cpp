#include <iostream>
#include "middle_str.h"
#include <string>
using namespace std;
///////////

string itc_maxCharWord(string str){
int h=0,pr1 = 0, pr2, kol=0;
string S = ' ' +str+ ' ', NS="", hw;
for(int i=1; i<itc_len(S); i++){
        if(S[i]==' '){
            pr2=i;
            NS = pol(pr1, pr2, S);
            if(itc_len(NS)>h && slo(NS)){
                h=itc_len(NS);
                hw=NS;
            }
            NS="";
            pr1=pr2;
        }

}
if(h==0){
    return "error";
}
return hw;
}   //6

char itc_sameChar(string str){
for(int i=0; i<itc_len(str); i++){
    for(int m=i+1; m<itc_len(str); m++){
        if(str[i]==str[m] && ((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))){
            return str[i];
        }
    }
}
return 0;
}   //7

bool itc_isFirstInSecond(string s1, string s2){
    int f=0;
        if(s1 == ""){
        return true;
    }
for(int i=0; i<itc_len(s2); i++){
    for(int m=0; m<itc_len(s1); m++){
        if(s1[m]==s2[i+m]){
            f++;
            }
        }
        if(f==itc_len(s1)){
            return true;
        }
        else{
            f=0;
        }

    }
return false;
}   //8

string itc_Cezar(string str, int k){
    string new_str="";
    if(k>=0){
    k=k%26;
for(int i=0; i<itc_len(str); i++){
    if(str[i]==' '){
        new_str+=str[i];
    }
    else if(str[i]>='0' && str[i]<='9'){
        new_str+=str[i];
    }
    else if(str[i]+k>'z'){
        str[i]= str[i]+k-'z'+'a'-1;
        new_str+=str[i];
        }
    else{
        new_str+=str[i]+k;
    }
}
    }

//////////
if(k<0){
    k=k%26;
for(int i=0; i<itc_len(str); i++){
    if(str[i]==' '){
        new_str+=str[i];
    }
    else if(str[i]>='0' && str[i]<='9'){
        new_str+=str[i];
    }
    else if(str[i]+k<'a'){
        str[i]= str[i]+k-'a'+'z'+1;
        new_str+=str[i];
        }
    else{
        new_str+=str[i]+k;
    }
}
    }
return new_str;
}   //9


string itc_rmFreeSpace(string str){
    string n_str="";
    for(int i=0; i<itc_len(str); i++){
        if(str[i]!= ' ' || str[i+1]!=' '){
           n_str+=str[i];

        }
    }
    if(str[itc_len(str)-1]==' '){
        str = n_str;
        n_str="";
        for(int i = 0; i<itc_len(str)-1; i++){
            n_str+=str[i];
        }
    }
    if(str[itc_len(str)-1]==' '){
        str = n_str;
        n_str="";
        for(int i = 1; i<itc_len(str); i++){
            n_str+=str[i];
        }
    }

return n_str;
}
