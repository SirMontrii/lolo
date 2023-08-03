#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in;
    ofstream out;
    in.open("sample.txt");
    out.open("sample2.txt");
    string samString;
    while(in.eof()==0){
        in>>samString;
        out<<samString;
    }
    cout<<"string successfully copieedd yey!";
    in.close();
    out.close();
    return 0;
}