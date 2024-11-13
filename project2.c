#include<stdio.h>

int snakeWaterGun(char you ,char comp){
    // return 1 if you win, -1 if you lose and 0 if draw
    // condition for draw
    if(you==comp){
        return 0;
    }
    //Not draw conditions
    if(you=='s'&& comp=='g'){
        return 1;
    }
    else if(you=='g'&& comp=='s'){
        return 1;
    }
    if(you=='s'&& comp=='w'){
        return -1;
    }
    else if(you=='w'&& comp=='s'){
        return 1;
    }
    if(you=='g'&& comp=='w'){
        return -1;
    }
    else if(you=='w'&& comp=='g'){
        return 1;
    }
}

int main(){
    char you,comp;
    comp='s';
    printf("Enter s for snake, w for water and g for gun\n");
    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    printf("you choose %c and computer choose %c.",you,comp);
    if (result==0){
        printf("Game draw\n");
    }
    else if(result==1){
        printf("you win\n");
    }
    else{
        printf("you loose\n");
    }
    return 0;
}