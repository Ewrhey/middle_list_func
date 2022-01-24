#include "middle_list.h"

long long itc_len(string str){
    long long counter = 0, i = 0;
    while (str[i] != '\0'){
        counter++;
        i++;
    }
   return counter;
}



int itc_find_str(string str1, char str2){ 
    for (long long i = 0; i < itc_len(str1);i++){
        if (str1[i] == str2){
            return i;
        }
    }
    return -1;
}

string itc_slice_str(string str, int start, int finish){
    string itog = "";
    if (finish >= itc_len(str)){
        for (long long i = start; i < itc_len(str); i++){
            itog += str[i];
        }
    }
   else if (start >= itc_len(str)){
        return str;
    }
    else if (start == (itc_len(str) - 1)){
        return itog += str[itc_len(str) - 1];
    }
    else{
        for (long long i = start; i <= finish; i++){
            itog += str[i];
        }
    }
    return itog;
return "-1";
}
