#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 20
char stack[max];
int top=-1;
void push(char item)
{
  if(top==(max-1))
  {
    printf("stack in overflow");
    return ;
  }
  stack[++top]=item;
}
char pop()
{
  if(top==-1)
  {
    printf("stack underflow");
    exit(1);
  }
  return stack[top--];
}
int main(void) {
  char str[30];
  int i;
  printf("enter your string :");
  gets(str);
  for(i=0;i<strlen(str);i++)
    push(str[i]);
  for(i=0;i<strlen(str);i++)
    str[i]=pop();
  printf("Reverse string is :");
  printf("%s",str);
}