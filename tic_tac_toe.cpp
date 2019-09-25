#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
char board[9]={'_','_','_','_','_','_','_','_','_'};
void display(){
    int m=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c ",board[m]);
            m++;
        }
        printf("\n");
    }
}
int player1(){
    if(board[0]=='X'&&board[1]=='X'&&board[2]=='X'){
        return 1;
    }
    else if(board[3]=='X'&&board[4]=='X'&&board[5]=='X'){
        return 1;
    }
    else if(board[6]=='X'&&board[7]=='X'&&board[8]=='X'){
        return 1;
    }
    else if(board[0]=='X'&&board[3]=='X'&&board[6]=='X'){
        return 1;
    }
    else if(board[1]=='X'&&board[4]=='X'&&board[7]=='X'){
        return 1;
    }
    else if(board[2]=='X'&&board[5]=='X'&&board[8]=='X'){
        return 1;
    }
    else if(board[0]=='X'&&board[4]=='X'&&board[8]=='X'){
        return 1;
    }
    else if(board[2]=='X'&&board[4]=='X'&&board[6]=='X'){
        return 1;
    }
    else{
        return 0;
    }
}
int player2(){
    if(board[0]=='O'&&board[1]=='O'&&board[2]=='O'){
        return 1;
    }
    else if(board[3]=='O'&&board[4]=='O'&&board[5]=='O'){
        return 1;
    }
    else if(board[6]=='O'&&board[7]=='O'&&board[8]=='O'){
        return 1;
    }
    else if(board[0]=='O'&&board[3]=='O'&&board[6]=='O'){
        return 1;
    }
    else if(board[1]=='O'&&board[4]=='O'&&board[7]=='O'){
        return 1;
    }
    else if(board[2]=='O'&&board[5]=='O'&&board[8]=='O'){
        return 1;
    }
    else if(board[0]=='X'&&board[4]=='X'&&board[8]=='X'){
        return 1;
    }
    else if(board[2]=='X'&&board[4]=='X'&&board[6]=='X'){
        return 1;
    }
    else{
        return 0;
    }
}
void play(){
    int t;
    display();
    for(int k=1;k<=9;k++){
        if(k%2!=0){
            bac:
            printf("\nPlayer 1(X) Turn: Which Position ? ");
            scanf("%d",&t);
            if(board[t-1]=='_'){
               board[t-1]='X';
               display();
               int win=player1();
               if(win==1){
                cout<<"\n!--------------Congratulations Player 1 Win-------------------\n";
                break;
               }
               else{
                continue;
               }
            }
            else{
                goto bac;
            }

        }
        else{
            bac2:
           printf("\nPlayer 2(0) Turn: Which Position ? ");
            scanf("%d",&t);
            if(board[t-1]=='_'){
               board[t-1]='O';
               display();
               int win2=player2();
               if(win2==1){
                cout<<"\n!--------------Congratulations Player 2 Win-------------------\n";
                break;
               }
               else{
                continue;
               }
            }
            else{
                goto bac2;
            }
        }

    }


}
int main(){

    printf("-----------!WELCOME!-------------\n\n");
    printf(" START GAME 1\n QUITE  0\n");
    int des;
    scanf("%d",&des);
    if(des==1){
        play();
    }
    else{
        printf("\n-------------  BYE   -----------");
    }

return 0;
}
