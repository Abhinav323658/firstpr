#include<stdio.h>
#include <stdlib.h>
char l;
void E();
void match(char);
void T1();
void f();
void t();
void E();
void main()
{
    printf("Enter String \n");
    l=getchar();
    E();
    if(l=='$')
    printf("Given string is accepted\n"); else
    printf("Given string is  not accepted\n");
}
void match(char c)
{
if(l==c)
l=getchar();
else
{
printf("Invalid Input\n");
exit(0);
}
}
void T1()
{
    if(l=='*')
    {
        match('*');
        f();
        t();
    }
    else{
        return;
    }
}
void f()
{
    if(l=='(')
    {
        match('c');E();if(l==')')
        match(')');}else{if(l=='i')
        match('i');
        if(l=='d') match('d');
    }
}
void t()
{
    f();
    T1();
}
void E1()
{
    if(l=='+')
    {
        match('+');t();
        E1();
    }
    else return;
}
void E()
{
    t();
    E1();
}
