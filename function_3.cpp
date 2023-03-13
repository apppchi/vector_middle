#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> &lst){
    int kolch, kolnch, maxch, maxnch, minch, minnch, sumch, sumnch;
    maxch = -2147483648;
    maxnch = -2147483648;
    minch = 2147483647;
    minnch = 2147483647;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0){
            kolch++;
            sumch+=lst[i];
            if(lst[i] < minch)
                minch = lst[i];
            if(lst[i] > maxch)
                maxch = lst[i];
        }else{
            kolnch++;
            sumnch+=lst[i];
            if(lst[i] < minnch)
                minnch = lst[i];
            if(lst[i] > maxnch)
                maxnch = lst[i];}}
    cout << "������ ������:" << endl;
    cout << "���������� ������ �����: " << kolch << ',' << "       " << "���������� �������� �����: " << kolnch << endl;
    cout << "������������ ������ �����: " << maxch << ',' << "       " << "������������ �������� �����: " << maxnch << ',' << endl;
    cout << "����������� ������ �����: " << minch << ',' << "       " << "����������� �������� �����: " << minnch << ',' << endl;
    cout << "����� ������ �����: " << sumch << ',' << "       " << "����� �������� �����: " << sumnch << ',';}

void itc_pos_neg_analysis_lst(const vector <int> &lst){
    int kolp, koln, kolz = 0;
    int maxp, maxn = -2147483648;
    int minp, minn = 2147483647;
    int sump, sumn = 0;
    int srp, srn = 0;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] > 0){
            kolp++; sump+=lst[i];
            if(lst[i] < minp)
                minp = lst[i];
            if(lst[i] > maxp)
                maxp = lst[i];}
        else if(lst[i] < 0){
            koln++; sumn+=lst[i];
            if(lst[i] < minn) {minn = lst[i];}
            if(lst[i] > maxn) {maxn = lst[i];}
        }else {kolz++;}}
    srp = sump / kolp; srn = sumn / koln;
    cout << "�������������:" << "       " << "�������������:" << endl;
    cout << "���������� �����: " << kolp << ',' << "        " << "���������� �����: " << koln << ',' << endl;
    cout << "������������ �����: " << maxp << ',' << "        " << "������������ �����: " << maxn << ',' << endl;
    cout << "����������� �����: " << minp << ',' << "        " << "����������� �����: " << minn << ',' << endl;
    cout << "����� �����: " << sump << ',' << "        " << "����� �����: " << sumn << ',' << endl;
    cout << "������� ��������: " << srp << ',' << "        " << "������� ��������: " << srn << endl;
    cout << "���������� �����: " << kolz;}
