#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void HashInit(map<char, char>&);
void Transform(map<char, char>&, string&);

class StringSet{
public:
    StringSet(const int&);
    ~StringSet(){ delete[] _data; }

    void Push(const string&);
    void Sort();
    void Print()const;
private:
    string* _data;
    const int _max;
    int _top;
};


int main(int argc, char** argv){
    map<char, char> char_hash;
    HashInit(char_hash);

    int testdata_num;
    cin >> testdata_num;

    for(int eax = 0 ; eax < testdata_num ; ++eax){
        if(eax){ cout << endl; }

        int phone_num;
        string phone;
        cin >> phone_num;
        StringSet phone_set(phone_num);

        for(int i = 0 ; i < phone_num ; ++i){
            cin >> phone;
            Transform(char_hash, phone);
            phone_set.Push(phone);
        }

        phone_set.Sort();
        phone_set.Print();
    }

    return EXIT_SUCCESS;
}



void HashInit(map<char, char>& hash_table){
    char second = '1';
    for(char first = 'A' ; first < 'Q' ; ++first){
        if( (first - 'A') % 3 == 0){ ++second; }
        hash_table[first] = second;
    }
    for(char first = 'R' ; first < 'Z' ; ++first){
         if( (first - 'Q') % 3 == 0){ ++second; }
         hash_table[first] = second;
    }
    for(char i = '0' ; i <= '9' ; ++i){
        hash_table[i] = i;
    }
}


void Transform(map<char, char>& char_hash, string& msg){
    string result = "000-0000";
    int eax = 0;
    for(int i = 0 ; i < msg.length() ; ++i){
        if(msg[i] != '-'){
            result[eax++] = char_hash[ msg[i] ];
            if(eax == 3){ ++eax; }
        }
    }

    msg = result;
}



StringSet::StringSet(const int& num)
    :_max(num), _data(new string[num]), _top(-1){}

void StringSet::Push(const string& origin){
    ++_top;
    try{
        if( _top >= _max ){ throw; }
    }catch(...){
        cout << "Error at StringSet::Push(), over the limit!!" << endl;
        exit(EXIT_FAILURE);
    }
    _data[ _top ] = origin;
}

void StringSet::Sort(){
    sort(_data, _data + _top + 1);
}

void StringSet::Print()const{
    bool printed_flag = false;
    string now("");
    int same_num = 0;

    for(int i = 0 ; i <= _top ; ++i){
        if(_data[i] == now){ ++same_num; }
        else{
            if(same_num >= 2){
                cout << now << ' ' << same_num << endl;
                printed_flag = true;
            }
            now = _data[i];
            same_num = 1;
        }
    }
    if(same_num >= 2){
        cout << now << ' ' << same_num << endl;
        printed_flag = true;
    }
    if(!printed_flag){ cout << "No duplicates." << endl;}
}
