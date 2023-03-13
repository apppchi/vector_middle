#include "middle_list.h"

vector <char> itc_strtlist(string str){
    vector <char> mass;
    for(int i = 0; i < str.size(); i++){
        mass.push_back(str[i]);
    }
    return mass;
}

string itc_join(vector <char> lst, string sep){
    string str;
    for(int i = 0; i < lst.size(); i++){
        char c = lst[i];
        str = str + c + sep;
    }
    return str;
}

string itc_rmstrspc(string str){
    string s;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            s = s + str[i];
        }
    }
    return s;
}

int itc_find_str(string str1, string str2){
    long long i = 0;
    long long p = 0;
    long long kol = 0;
    long long len1 = str1.size();
    long long len2 = str2.size();
    for (i = 0; i < len1; i++){
        if (str1[i] == str2[0]){
            kol = 0;
            for (p = 0; p < len2; p++){
                if (str1[i+p] == str2[p]){
                    kol++;
                }
            }
        }
        if (kol == len2){
            return i;
        }
    }
    return -1;
}

string itc_rmstrchar(string str, string less){
    int pos = itc_find_str(str, less);
    string it;
    for(int i = 0; i < pos; i++){
        it = it + str[i];
    }
    for(int i = pos + less.size(); i < str.size(); i++){
        it = it + str[i];
    }
    return it;
}
