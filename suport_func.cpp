#include "middle_list.h"


long long itc_len(string str){
 int i = 0, counter = 0;
 while (str[i] != '\0'){
    i++;
    counter++;
 }
 return counter;
 }

int itc_find_str(string s1, string s2){
string s3;
int i1 = 0, i2 = 0, i;
long long len2;
 while (s1[i1] != '\0'){
 if (s1[i1] == s2[i2]){
    i = 0;
    len2 = itc_len(s2);
    s3 = "";
    while ( i < len2){
        s3 += s1[i1 + i];
        i++;
    }
    if (s3 == s2){
        return i1;
    }
 }
 i1++;

 }
return -1;
}

string itc_slice_str(string str, int start, int end_){
if(end_ < start){
    return str;
}
else if(end_ > itc_len(str)-1){
    end_ = itc_len(str)-1;
}
string str1 = "";
while (start <= end_){
    str1 += str[start];
    start ++;
}
return str1;
}

string itc_three_str(string str1, string str2, string str3){
string str, str_sup;
long long index = itc_find_str(str1, str2), sup;
while(index != -1){
    str_sup = itc_slice_str(str1, 0, index - 1);
    if (index == 0)
        str_sup = "";
    sup = itc_len(str_sup);
    str_sup += str3;
    str1 = str_sup + itc_slice_str(str1, sup + itc_len(str2), itc_len(str1));
    index = itc_find_str(str1, str2);
}
return str1;
}
