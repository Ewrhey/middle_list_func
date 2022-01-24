#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst){

if (lst.size() != 0){

long itog = 0;
for(long long i = 0; i < lst.size(); i++)
    if (i % 2 == 0)
        itog += lst[i];
}
return itog;
}
