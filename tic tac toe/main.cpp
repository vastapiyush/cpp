//tic tac toe

#include<iostream>
using namespace std;


char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void draw();
void move1(int inp);
void move2(int inp);
int er=0;
int main(){
    int inp,null=1;
    draw();
        for (int i=0; i<5; i++) {
            
            
            
            cout<<"player 1 move:";
            cin>>inp;
            move1(inp);
            if (er==1) {
                break;
            }
            draw();
            if (board[0][0]=='x'&&board[1][1]=='x'&&board[2][2]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            if (board[0][2]=='x'&&board[1][1]=='x'&&board[2][0]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            if (board[0][0]=='x'&&board[0][1]=='x'&&board[0][2]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            if (board[1][0]=='x'&&board[1][1]=='x'&&board[1][2]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            if (board[2][0]=='x'&&board[2][1]=='x'&&board[2][2]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            if (board[0][0]=='x'&&board[1][0]=='x'&&board[2][0]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            if (board[0][1]=='x'&&board[1][1]=='x'&&board[2][1]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            if (board[0][2]=='x'&&board[1][2]=='x'&&board[2][2]=='x') {
                cout<<"player 1 wins";
                cout<<endl;
                break;
            }
            for (int z=0; z<3; z++) {
                for (int j=0; j<3; j++) {
                    if (board[z][j]=='x'||board[z][j]=='O')
                        null=0;
                    else{
                        null=1;
                        break;
                    }
                }}
            if (null==0) {
                cout<<"tie";
                cout<<endl;
                break;
            }
            
            cout<<"player 2 move:";
            cin>>inp;
            move2(inp);
            if (er==1) {
                break;
            }
            draw();
            
            
            if (board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
            if (board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
            if (board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
            if (board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
            if (board[2][0]=='O'&&board[2][1]=='x'&&board[2][2]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
            if (board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
            if (board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
            if (board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O') {
                cout<<"player 2 wins";
                cout<<endl;
                break;
            }
    }
    return 0;
}

void draw(){
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<"|"<<board[i][j]<<"|";
        }
        cout<<endl;
    }
    cout<<endl;
}

void move1(int inp){
    int row,col;
    if (inp==1) {
        row=0;
        col=0;
    } else if(inp==2){
        row=0;
        col=1;
    }else if(inp==3){
        row=0;
        col=2;
    }else if(inp==4){
        row=1;
        col=0;
    }else if(inp==5){
        row=1;
        col=1;
    }else if(inp==6){
        row=1;
        col=2;
    }else if(inp==7){
        row=2;
        col=0;
    }else if(inp==8){
        row=2;
        col=1;
    }else {
        row=2;
        col=2;
    }
    
    if (board[row][col]=='x'||board[row][col]=='O'){
        cout<<"error";
        cout<<endl;
        er=1;}
    else
        board[row][col]='x';
    
}

void move2(int inp){
    
    int row,col;
    if (inp==1) {
        row=0;
        col=0;
    } else if(inp==2){
        row=0;
        col=1;
    }else if(inp==3){
        row=0;
        col=2;
    }else if(inp==4){
        row=1;
        col=0;
    }else if(inp==5){
        row=1;
        col=1;
    }else if(inp==6){
        row=1;
        col=2;
    }else if(inp==7){
        row=2;
        col=0;
    }else if(inp==8){
        row=2;
        col=1;
    }else {
        row=2;
        col=2;
    }
    
    if (board[row][col]=='x'||board[row][col]=='O'){
        cout<<"error";
        cout<<endl;
        er=1;}
    else
        board[row][col]='O';
}
