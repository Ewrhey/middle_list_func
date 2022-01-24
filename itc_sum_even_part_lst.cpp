#include "middle_list.h"

long itc_sum_even_part_lst(const vector <int> &lst){
        long summ = 0;
    if (lst.size() != 0){
        for(int i = 0; i < lst.size(); i++){
            if(lst[i] % 2 == 0)
                summ += lst[i];
        }
    }
    return summ;
}
