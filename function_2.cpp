#include "middle_list.h"

long itc_sumlst(const vector <int> &lst){
    long sum;
    for(int i = 0; i < lst.size(); i++){
        sum = sum + lst[i];
    }
    return sum;
}

long itc_sum_even_lst(const vector <int> &lst){
    long sum;
    for(int i = 0; i < lst.size(); i+=2){
        sum = sum + lst[i];
    }
    return sum;
}

long itc_sum_even_part_lst(const vector <int> &lst){
    long sum;
    for(int i = 0; i < lst.size(); i++){
        if (lst[i] % 2 == 0)
            sum = sum + lst[i];
    }
    return sum;
}

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){
    for(int i = 0; i < lst.size(); i++){
        if (lst[i] % 2 == 0)
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);
    }
}

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){
    for(int i = 0; i < lst.size(); i++){
        if (lst[i] == 0)
            lst1.push_back(lst[i]);
        else if(lst[i] > 0)
            lst2.push_back(lst[i]);
        else if(lst[i] < 0)
            lst3.push_back(lst[i]);
    }
    for(int i = 0; i < lst3.size(); i++){
        cout << ' ' << lst3[i];
    }
    cout << ", ";
    for(int i = 0; i < lst1.size(); i++){
        cout << " " << lst1[i];
    }
    cout << ",  " << lst2[0];
    for(int i = 1; i < lst2.size(); i++){
        cout << "  " << lst2[i];
    }
}
