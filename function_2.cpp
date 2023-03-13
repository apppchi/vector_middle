#include "middle_list.h"

long itc_sumlst(const vector <int> &lst){
    long sum = 0;
    for(int i = 0; i < lst.size(); i++){
        sum = sum + lst[i];
    }
    return sum;
}

long itc_sum_even_lst(const vector <int> &lst){
    long sum = 0;
    for(int i = 0; i < lst.size(); i+=2){
        sum = sum + lst[i];
    }
    return sum;
}

long itc_sum_even_part_lst(const vector <int> &lst){
    long sum = 0;
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
    int a, b, c;
    for(int i = 0; i < lst.size(); i++){
        if (lst[i] < 0)
            lst1.push_back(lst[i]);
        else if(lst[i] == 0)
            lst2.push_back(lst[i]);
        else if(lst[i] > 0)
            lst3.push_back(lst[i]);
    }
    for(a = 0; a < lst1.size() - 1; a++){
        cout << lst1[a] << " ";
    }
    cout << lst1[a] << ", ";
    for(b = 0; b < lst2.size(); b++){
        cout << " " << lst2[b];
    }
    cout << ",";
    for(c = 0; c < lst3.size(); c++){
        cout << "  " << lst3[c];
    }
}
