#include <iostream>
#include<vector>

using namespace std;

void CreateBoard(vector<int> &b){

    for(int i = 0; i < 9; i++){
            b.push_back(0);
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
}