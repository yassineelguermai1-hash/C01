# include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x;
    int y;

    x = 2;
    y = 3;
    
    printf("x : %d , y : %d\n", x, y);
    ft_swap(&x, &y);
    printf("x : %d, y : %d \n", x, y);
    return (0);

}