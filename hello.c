#include <stdio.h>

void sayHello(char *greeting){
  printf("%s!\n", greeting);
}

void stateAge(int age){
  printf("I am %d years old.\n", age);
}

void stateHeight(int heightInInches){
  printf("I am %d inches tall.\n", heightInInches);
}

int main(int argc, char *argv[]){

  char *greeting = argv[1];
  sayHello(greeting);

  int age = 34;
  int height = 75;

  stateAge(age);
  stateHeight(height);

  return 0;
}
