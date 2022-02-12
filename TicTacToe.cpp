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
void PlaceMarker(int index, int marker, vector<int> &b){
    b[index]=marker;
}

int voidGetPlayerChoice(int b){
    string s;
    getline(cin,s);
    return stoi(s);
}

int main(){
    vector<int> board;
    CreateBoard(board);
    DisplayBoard(board);
    PlaceMarker(1,1,board);
    cout<<endl;
    DisplayBoard(board);
}