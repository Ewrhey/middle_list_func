#include "middle_list.h"
 string itc_join(vector <char> lst, string sep){
string str = "";
if (lst.size() > 0){

    
     for(int i = 0; i <= lst.size() - 1; i++){
        str += lst[i];
        if (i != lst.size() - 1)
            str += sep;
     }
}
     return str;
 }

