#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
long long itc_len(string str);
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
bool itc_compare(string s1, string s2);
unsigned char itc_changeCase(unsigned char c);
int itc_countWords(string str);
string itc_maxCharWord(string str);
bool slo (string s1);
string pol(int pr1, int pr2, string S);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
#endif // MIDDLE_STR_H_INCLUDED
