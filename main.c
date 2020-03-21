#include <stdio.h>

int check(char *array, int a ,int b)
{
    if (array[0] == '\0')
    {
        if (a == b) return 1;
        else return 0;
    }
    else if (b > a) return 0;
    else if (array[0] == '(') return check(array+1, ++a, b);
    else return check(array+1, a, ++b);
}

int main()
{
    //char a[50]={"((()(())()))"};
    char a[50];
    scanf("%s",a);
    printf("%s!\n",(check(a,0,0))?"True":"False");
    return 0;
}
