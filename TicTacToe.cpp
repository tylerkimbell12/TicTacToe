#include <iostream>
#include<vector>

using namespace std;

void CreateBoard(vector<int> &b){

    for(int i = 0; i < 9; i++){
            b.push_back(0);
    }
}

int main(){
    vector<int> board;
    CreateBoard(board);
}