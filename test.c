 #include<stdio.h>
    #include<cs50.h>
    // Void function
void print_hello_world() {
  printf("Hello, world!\n");
}

// Parameter function
int add(int a, int b) {
  return a + b;
}



int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  // Call void function
  print_hello_world();

  // Call parameter function and assign the returned value to a variable
  int sum = add(10, 20);

  // Call return function and print the returned value
  int factorial_of_5 = factorial(5);
  printf("The factorial of 5 is %d\n", factorial_of_5);

  return 0;
}