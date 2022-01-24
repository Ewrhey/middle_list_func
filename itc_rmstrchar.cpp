#include "middle_list.h"

string itc_rmstrchar(string str, string less1){
    string itog = "", sup = "";

if (less1 == "")
    return str;
if (less1 == str || str == "")
    return "";

    for (int i = 0; str[i] != '\0'; i++){
        sup += str[i];
        if (itc_find_str(less1, sup) == -1)
            itog += str[i];
        sup = "";
    }
    return itog;
}
