/*
Author : "Aviral"
Date: 16/3/2023
Time: 10:32
*/

#include<stdio.h>

int main(){
    int x = 11;
    int y  = 12;

    // x = y++;  //Post increment 
    // printf("%d\n",x);
    // printf("%d\n",y);
 
    // x = ++y;  //Pre increment 
    // printf("%d\n",x);
    // printf("%d\n",y);

    // Ternary operator

    int a = 30;
    int b = 20;
    int tern = (a>b)?a:b;
    printf("%d\n",tern);
}