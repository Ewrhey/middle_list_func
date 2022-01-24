#include "middle_list.h"

string itc_rmstrspc(string str){
    string new_str = "";
    for(long long i = 0; i < itc_len(str); i++){
        if (str[i] != 32)
            new_str += str[i];
    }
    return new_str;
}
