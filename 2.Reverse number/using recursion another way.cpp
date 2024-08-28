#include<stdio.h>
int reverse(int n, int k) // recursive function
{
    if(n == 0)
    {
        return k;
    }
    return reverse(n/10, k * 10 + n % 10);
	}
int main()
{
    int num = 98321;
    int rev_num = 0;
    int ans = reverse(num, rev_num);
    printf("Reversed Number: %d", ans);
    return 0;
}