#include "middle_list.h"

long long itc_len(string str){
    long long kol = 0, i = 0;
    while (str[i] != '\0'){
        kol++;
        i++;
    }
   return kol;
}


int itc_find_str(string str1, char str2){
    long long len1 = 0;
    len1 =  itc_len(str1);
    long long len2 = 0;
    long long kol = 0;
    for (long long i = 0; i < len1; i++){
        kol = 0;
        if (str1[i] == str2){
            return i;
        }
    }
    return -1;
}

#include "middle_list.h"

string itc_slice_str(string str, int start, int finish){
    long long len = itc_len(str);
    string new_str = "";
    if (finish >= len){
        for (long long i = start; i < len; i++){
            new_str += str[i];
        }
    }
   else if (start >= len){
        return str;
    }
    else if (start == (len - 1)){
        return new_str += str[len - 1];
    }
    else{
        for (long long i = start; i <= finish; i++){
            new_str += str[i];
        }
    }
    return new_str;
return "-1";
}
