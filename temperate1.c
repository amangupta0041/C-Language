//Write C program to print all alphabets from a to z. using do while loop.

#include<stdio.h>
main()

{ 
  char letter ='A';
  do
  {
  	printf("%c ",letter);
  	letter++;
  }while(letter <= 'Z');
  
}
