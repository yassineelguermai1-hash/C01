# include <stdio.h>



void ft_ft(int *nbr)
{
    // *nbr = 42;
    nbr[0] = 42;
}


int main()
{
    int x;
    int *p;

    x = 4;
    ///
    p = &x;
    printf("%d\n",x);
    ft_ft(p);
    printf("%d\n",x);

    return (0);
}