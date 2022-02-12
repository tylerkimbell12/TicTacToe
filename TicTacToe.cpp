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

int GetPlayerChoice(){
    string s;
    getline(cin,s);
    return stoi(s);
}

int main(){
    vector<int> board;
    CreateBoard(board);
    DisplayBoard(board);
    int c;
    for(int i = 0; i < 4; i++){
        cout << "Player 1:";
        c =GetPlayerChoice();
        PlaceMarker(c,1,board);
        DisplayBoard(board);
        cout << "Player 2:";
        c =GetPlayerChoice();
        PlaceMarker(c,2,board);
        DisplayBoard(board);

    }
        cout << "Player 1:";
        c =GetPlayerChoice();
        PlaceMarker(c,1,board);
        DisplayBoard(board);
}