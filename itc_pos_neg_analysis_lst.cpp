#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus");
    vector <int> lst1;
    vector <int> lst2;
    vector <int> lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst2, lst3);
    cout << "�������������:"<< '\t'	<< '\t' << "�������������:" << endl;
    cout << "���������� �����: " << lst3.size() << "," << '\t'	<< '\t' << "���������� �����: " << lst1.size() << "," << endl;
    cout << "������������ �����: " << itc_max_lst(lst3) << "," << '\t'	<< '\t' << "������������ �����: " << itc_max_lst(lst1) << "," << endl;
    cout << "����������� �����: "<< itc_min_lst(lst3) << "," << '\t' << '\t' << "����������� �����: "<< itc_min_lst(lst1) << "," << endl;
    cout << "����� �����: "<< itc_sumlst(lst3) << "," << '\t'	<< '\t' << "����� �����: "<< itc_sumlst(lst1) << "," << endl;
    cout << "������� ��������: "<< itc_sumlst(lst3) / lst3.size()<< '\t'	<< '\t' << "������� ��������: "<< itc_sumlst(lst1) / lst1.size() << endl;
    cout << "���������� �����: " << lst2.size() << endl;
}
