#include<stdio.h>
main(){
int a=8;
int b=3;
int c=12;
if(a<b){
if(a<c)
printf("a is smaller");
} else if (b<c){
printf("b is smaller");
} else {
printf("c is smaller");
}
}