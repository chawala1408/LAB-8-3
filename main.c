#include <stdio.h>
int main(void) {
  int i;char pass[80];char passN[3][10];
  do{printf("Enter new password (max 10): ");
  gets(pass);
  i = strlen(pass);
  if(i < 11){printf(" 1 Enter password : ");
  gets(passN[0]);
  if(strcmp(pass,passN[0]) != 0){
    printf("Password not correct!!!\n ");
  printf("2 Enter password : ");
  gets(passN[1]);
  if(strcmp(pass,passN[1]) != 0){
    printf("Password not correct!!!\n ");
  printf("3 Enter password : ");
  gets(passN[2]);
  if(strcmp(pass,passN[2]) != 0 ){
    printf("Password not correct!!!\n ");
  printf("Close program. ");
  exit(0);}}}}
  if(strcmp(pass,passN[0]) != 0||strcmp(pass,passN[1]) != 0||strcmp(pass,passN[2]) != 0||i > 10){printf("Password correct!!! \nPlease setup new password \n");
  }}while(strcmp(pass,passN[0]) != 0||strcmp(pass,passN[1]) != 0||strcmp(pass,passN[2]) != 0||i > 10);
  return 0;}