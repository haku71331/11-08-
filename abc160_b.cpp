#include <iostream>
using namespace std;

int main(void){
    int in,a;
    int out = 0;

    cin >> in;
    a = in/500;
    out = a*1000 + ((in - a*500)/5) * 5;
    cout << out << endl;
}