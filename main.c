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
 char*n = readline("Enter an int:");
 int c = atof(n);
 double sum1 = sum_n(c);
 printf("sum is %f\n",sum1);
 char*f = readline("Enter a string:");
 int d = atof(f);
 print_n(f,c);
}
int sum_n(int n){
  int a, sum=0;
  for(a=0; a<=(n); a++){
   sum+=a;
}
return sum;
}
void print_n(const char *s, int n){
  int b;
  for(b=0; b<=n; b++)
   printf("%s",s);
}