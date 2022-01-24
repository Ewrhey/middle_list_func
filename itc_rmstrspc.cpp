#include "middle_list.h"

string itc_rmstrspc(string str){
    string itog = "";
    for(long long i = 0; i < itc_len(str); i++){
        if (str[i] != 32)
            itog += str[i];
    }
    return itog;
}

