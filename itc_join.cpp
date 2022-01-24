
#include "middle_list.h"

string itc_join(vector <char> lst, string sep){
    string itog = "";
    if (lst.size() > 0){
    for(int i = 0; i < (lst.size() - 1); i++){
        itog += lst[i];
        itog += sep;
    }
    itog += lst[lst.size() - 1];
    }
    return itog;
}
