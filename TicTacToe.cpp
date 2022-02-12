#include <iostream>
#include<vector>

using namespace std;

void CreateBoard(vector<int> &b){

    for(int i = 0; i < 9; i++){
            b.push_back(0);
    }
}
void DisplayBoard(const vector<int> &b){
    for(int x =0;x<3;x++){
        for(int y =0;y<3;y++){
            cout<<b[x*3+y];
        }
        cout<<endl;
    }
}

void DisplayBoard(vector<int> &b){
    cout<< b[0];
    cout<< b[1];
    cout<< b[2] << endl;
    cout<< b[3];
    cout<< b[4];
    cout<< b[5] << endl;
    cout<< b[6];
    cout<< b[7];
    cout<< b[8] << endl;

}

int main(){
    vector<int> board;
    CreateBoard(board);
    DisplayBoard(board);
}