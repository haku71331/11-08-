//https://atcoder.jp/contests/abc297/tasks/abc297_c
#include <iostream>
using namespace std;
string line[128];

void to_pc(int i,int w);

void to_pc(int i,int w){

    for (int j = 0; j < w-1; j++)
    {

        if (line[i][j] == 'T' && line[i][j+1] == 'T')
        {
            line[i][j] = 'P';
            line[i][j+1] = 'C';
        }
        
    }
    
    
}

int main(void){
    int h,w;

    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        cin >> line[i];
        to_pc(i,w);
    }

    for (int i = 0; i < h; i++)
    {
        cout << line[i] << endl;
    }

    return 0;
    
}