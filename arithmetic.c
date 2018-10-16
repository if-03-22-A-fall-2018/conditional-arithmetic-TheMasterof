#include <stdio.h>


int main(int argc, char const *argv[]) {
  int choice;

  return 0;
}
int Choice(int choice)
{
  do {
  printf("Menu\n", );
  printf("=========\n", );
  printf("1.) Addieren\n", );
  printf("2.) Multiplizieren\n", );
  printf("======================\n", );
  printf("Enter your choice: ", );
  scanf("%d\n"choice );
  if (Check(choice)) {
    /* code */
  }
}while(Check(choice));


}
bool Check(int choice){
  return choice==1||choice==2;
  }
}
