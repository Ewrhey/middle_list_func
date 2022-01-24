#include "middle_list.h"
long itc_sumlst(const vector <int> &lst){
long itog = 0;

if (lst.size() != 0){

for(long long i = 0; i < lst.size(); i++)
    itog += lst[i];
return itog;

}

}
