
void foo1(int xval)
{
int x;

x = xval;
/* print the address of x here – “The address of x is ..” */
}

void foo2(int yval)
{
int y;

y = yval;
/* print the address of y here – “The address of y is..” */
}

/*
void foo3(void)
{
int z; foo1(z);
}
*/

int main(void)
{
foo1(7);
foo2(11);
/* foo3(); */ system("PAUSE"); return 0;
}
