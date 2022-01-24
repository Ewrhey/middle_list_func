#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst){

long itog = 0;

if (lst.size() != 0){

for(long long i = 0; i < lst.size(); i++)
    if (i % 2 == 0)
        itog += lst[i];
}
return itog;
}
