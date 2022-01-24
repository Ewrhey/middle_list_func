
#include "middle_list.h"

string itc_join(vector <char> lst, string sep){
    string new_str = "";
    if (lst.size() > 0){
    for(int i = 0; i < (lst.size() - 1); i++){
        new_str += lst[i];
        new_str += sep;
    }
    new_str += lst[lst.size() - 1];
    }
    return new_str;
}
