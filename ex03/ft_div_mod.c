
# include <stdio.h>


void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

}

int main()
{
    int a;
    int b;
    int res;
    int mod;

    
    a = 10;
    b = 3;
    // div = &res, mod = &mod;
    ft_div_mod(a, b, &res, &mod);
    printf("resultat: %d, reste: %d\n", res, mod);
    return (0);
}