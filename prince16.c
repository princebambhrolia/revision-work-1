#include<stdio.h>
main(){
int a=8;
int b=3;
int c=12;
int d=7;
if(a>b){
if(a>c){
if(a>d){
printf("a is max");
}else{
printf("d is max");
}
}else{
if(c>d){
printf("c is max");
}else{
printf("d is max");
}
}
}else{
if(b>c){
if(b>d){
if(c>d){
printf("a is max");
}else{
printf("d is max");
}
}else{
if(c>d){
printf("c is max");
}else{
printf("d is max");
}
}
}
}
}
