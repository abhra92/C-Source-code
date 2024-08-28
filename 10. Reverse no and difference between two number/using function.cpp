#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
  int reversedNumber = 0;
  while (num > 0) {
    reversedNumber = reversedNumber * 10 + num % 10;
    num /= 10;
  }
  return reversedNumber;
}

// Function to calculate the difference between two numbers
int difference(int num1, int num2) {
  if (num1 > num2) {
    return num1 - num2;
  } else {
    return num2 - num1;
  }
}

int main() {
  int number1, number2;

  // Get input from the user
  printf("Enter the first number: ");
  scanf("%d", &number1);

  printf("Enter the second number: ");
  scanf("%d", &number2);

  // Reverse the first number
  int reversedNumber1 = reverseNumber(number1);

  // Calculate the difference between the two numbers
  int diff = difference(number1, number2);

  // Print the results
  printf("The first number reversed is: %d\n", reversedNumber1);
  printf("The difference between the two numbers is: %d\n", diff);

  return 0;
}