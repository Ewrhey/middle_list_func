#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus");
    vector <int> lst1;
    vector <int> lst2;
    itc_odd_even_separator_lst(lst, lst1, lst2);
    cout << "Анализ списка:" << endl;
    cout << "Количество четных чисел: " << lst1.size() << "," << '\t'	<< '\t' << "Количество нечетных чисел: " << lst2.size() << endl;
    cout << "Максимальная четная цифра: " << itc_max_lst(lst1) << "," << '\t'	<< '\t' << "Максимальная нечетная цифра: " << itc_max_lst(lst2) <<"," << endl;
    cout << "Минимальная четная цифра: "<< itc_min_lst(lst1) << "," << '\t' << '\t' << "Минимальная нечетная цифра: "<< itc_min_lst(lst2) << "," << endl;
    cout << "Сумма четных чисел: "<< itc_sumlst(lst1) << "," << '\t'	<< '\t' << "Сумма нечетных чисел: "<< itc_sumlst(lst2) << "," << endl;
}
