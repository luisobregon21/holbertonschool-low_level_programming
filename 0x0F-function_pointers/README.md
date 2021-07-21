#int *func(int,int) //returns a type of pointer
#int (*func)(int,int) //declare functionpinter
#the following tasks are based on function pointers.
#understand that the computer only understand binary.
#the program we write on C gets compiled to machine code.
#Machine code/instructions copied from executable file.
#store instuctions and other data.
#function is a set of instructions that perform a subtask.
#a pointer of a function points to the entry point of a function
#this is the first instruction of the function.
#
#
#RESUMEN: function pointers stores the starting address of a function
#ejemplo:

#include<stdio.h>

int Add( int a, int b)
{
  return a+b;
}
int main()
{
  int c;

  //first type return type of function
  //then --> (*name of the variable)
  //type of the parameters pointer will point

  int (*p)(int,int);
  //initialize the function.
  //points to the address of function
  p = &Add;
  //dereference
  //passed arguement
  c=(*p)(2,3);
  //c = p(2,3) is the same as above...
  printf("%d\n",c);
}
#end ejemplo
