// Author: Jiarou Deng dpj5243@psu.edu
// Collaborator: Aaron Hester amh7806@psu.edu
// Collaborator: Kyle Chen kvc5823@psu.edu
// Collaborator: Livia Moore lmm6882@psu.edu
// Section: 010R
// Breakout: 11

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
// You may assume n >= 0, return the sum of 0+1+2+3+...+ n
int sum_n(int n);
// You may assume n >= 0, print s n times, each time in its own line
void print_n(const char *s, int n);
int main(void){
  char*n = readline("Enter an int: ");
  int c = atof(n);
  int sum1 = sum_n(c);
  printf("sum is %d.\n",sum1);
  char*f = readline("Enter a string: ");
  print_n(f,c);
}
int sum_n(int n){
  if (n > 0){
    return n+sum_n(n-1);
    }
  else{
    return n;
  }
  
}
void print_n(const char *s, int n){
  if (n>0){
    printf("%s\n",s);
    print_n(s,n-1);
  }
  
}