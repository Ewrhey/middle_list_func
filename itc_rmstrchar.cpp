
#include "middle_list.h"

string itc_rmstrchar(string str, string less1){
    string itog = str;
    int start = 0, sup = 0;
    if (less1 == "")
        return str;
    if (less1 == str)
        return "";
    for (int i = 0; i < itc_len(less1); i++){
        sup = itc_find_str(str, less1[i]);
    while(sup != -1){
        itog = itc_slice_str(str, start, sup - 1);
        itog += itc_slice_str(str, sup + 1, itc_len(str));
        sup = itc_find_str(itog, less1[i]);
        str = itog; 
    }
    }
    return itog;
}

