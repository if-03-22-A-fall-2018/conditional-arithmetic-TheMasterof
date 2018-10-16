#include "stdio.h"
#include "stdbool.h"
#include "Methods.h"

int main(int argc, char const *argv[]) {
  int choice;
choice=Choice(choice);
if (choice==1) {
  Add();
}

  return 0;
}
int Choice(int choice)
{
  do {
  printf("Menu\n");
  printf("=========\n");
  printf("1.) Add\n");
  printf("2.) Multiply\n");
  printf("======================\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  if (Check(choice)) {
    printf("\nInvalid Input!\n");
  }
}while(Check(choice)==true);

return choice;
}

bool Check(int choice){
  if (choice==1||choice==2) {
  return false;
  }
else{
  return true;
  }
}
void Add(){
  Bordernum();
}
void Mul(){
  Bordernum();
}
int Bordernum(){
  int border;
  printf("\nEnter a breaknumber: \n", );
  scanf("%d\n", );
}
