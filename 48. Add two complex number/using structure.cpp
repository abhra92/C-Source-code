#include <stdio.h>
struct complex 
{
  float real;
  float imaginary;
};
struct complex add_complex_numbers(struct complex c1, struct complex c2) 
{
  struct complex sum;
  sum.real = c1.real + c2.real;
  sum.imaginary = c1.imaginary + c2.imaginary;
  return sum;
}
int main() 
{
  struct complex c1, c2, sum;
  printf("Enter the first complex number (a + bi): ");
  scanf("%f %f", &c1.real, &c1.imaginary);
  printf("Enter the second complex number (a + bi): ");
  scanf("%f %f", &c2.real, &c2.imaginary);
  sum = add_complex_numbers(c1, c2);
  printf("The sum of the two complex numbers is %f + %fi\n", sum.real, sum.imaginary);
  return 0;
}