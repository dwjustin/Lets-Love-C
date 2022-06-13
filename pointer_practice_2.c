#include <stdio.h>

int main()
{
    int i = 5, *ptr;
    ptr = &i;
    void *vptr;
    vptr = &ptr; // vptr->ptr->i
    printf("\nValue of iptr=%d", **(int **)vptr);
    printf("\nValue of iptr=%d", **(int ***)vptr);
    printf("\nValue of iptr=%d", **(int *******)vptr);

    return 0;
}