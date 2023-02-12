#include "middle_list.h"

vector <char> itc_strtlist(string str){
    vector <char> mass;
    for(int i = 0; i < str.size(); i++){
        mass.push_back(str[i]);
    }
    for(int f = 0; f < mass.size(); f++){
        cout << mass[f] << ' ';
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
