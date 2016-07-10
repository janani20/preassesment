#include <stdio.h>
 
void tower(int, char, char, char);
 
int main()
{
    int n;
    printf("\n Enter the number of disks:");
    scanf("%d", &n);
    tower(n, 'A', 'C', 'B');
    return 0;
}
void tower(int n, char frompeg, char top, char auxp)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, top);
        return;
    }
    tower(n - 1, frompeg, auxp, top);
    printf("\n Move disk %d from peg %c to peg %c", n, frompeg, top);
    tower(n- 1, auxp, top, frompeg);
}
