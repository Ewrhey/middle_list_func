
 #include "middle_list.h"

vector <char> itc_strtlist(string str){
    vector <char> mass(itc_len(str));
    for(int i = 0; i < itc_len(str); i++){
        mass[i] = str[i];
    }
    return mass;
}
