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

double cfibonacci(int n){
  int i;
  double a = 0.0, b = 1.0, tmp;
  for (i = 0; i < n; ++i){
    tmp = a; a = a + b; b = tmp;
  }
  return a;
}

int main(int argc, char *argv[]){

  char *greeting = argv[1];
  sayHello(greeting);

  int age = 34;
  int height = 75;

  stateAge(age);
  stateHeight(height);

  int areas[] = {10, 12, 13, 14, 20};
  printf("The size of an int is %1lu\n", sizeof(int));
  printf("The length of the areas array is %1lu\n", sizeof(areas) / sizeof(int));
  
  printf("10th number of the Fibonacci sequence is: %f", cfibonacci(10));

  return 0;
}
