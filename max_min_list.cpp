#include "middle_list.h"

int itc_min_lst(const vector <int> &lst){
    int min_i = 2147483647;
    if (lst.size() > 0){
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] < min_i)
                min_i = lst[i];
        }
    }
    return min_i;
}

int itc_max_lst(const vector <int> &lst){
    int max_i = -2147483648;
    if (lst.size() > 0){
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] > max_i)
                max_i = lst[i];
        }
    }
    return max_i;
}
