
#include "middle_list.h"

string itc_rmstrchar(string str, string less1){
    string new_str = str;
    int start = 0, ind = 0;
    int lon = itc_len(less1);
    if (less1 == "")
        return str;
    if (less1 == str)
        return "";
    for (int i = 0; i < lon; i++){
        ind = itc_find_str(str, less1[i]);
    while(ind != -1){
        new_str = itc_slice_str(str, start, ind - 1);
        new_str += itc_slice_str(str, ind + 1, itc_len(str));
        ind = itc_find_str(new_str, less1[i]);
        str = new_str; 
    }
    }
    return new_str;
}
