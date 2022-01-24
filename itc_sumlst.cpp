#include "middle_list.h"

long itc_sumlst(const vector <int> &lst){
    long summ = 0;
    if (lst.size() != 0){
        for(int i = 0; i < lst.size(); i++){
            summ += lst[i];
        }
    }
    return summ;
}
