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

    // int a = 30;
    // int b = 20;
    // int tern = (a>b)?a:b;
    // printf("%d\n",tern);

    // Comparision

    int a = 10,b=12,c,d;
    b = a++;
    c=++b;
    d=a++;
    // printf("%d\n",a);
    // printf("%d\n",b);
    // printf("%d\n",c);

    // printf("%d",a>b<a<b);
    // printf("%d\n",a>=b);
    // printf("%d\n",a-->--a);
    // printf("%d\n",a--<a++);

    /*Logical Operator*/
    
    int k = 10,l=5;
    // int m = k&&l || k<l;
    // printf("%d",m);
    int r2 = 10%=2;
    printf("%d\n",r2);
}