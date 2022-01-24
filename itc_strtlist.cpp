#include "middle_list.h"
 vector <char> itc_strtlist(string str){
     vector <char> mass(itc_len(str));
     for(int i = 0; str[i] != '\0'; i++)
         mass.push_back(str[i]);
     return mass;

 }
