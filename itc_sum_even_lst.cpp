#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst){
        long itog = 0;
    if (lst.size() != 0){
        for(int i = 0; i < lst.size(); i += 2){
            itog += lst[i];
        }
    }
    return itog;
}

