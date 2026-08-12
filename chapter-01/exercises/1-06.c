#include <stdio.h>

/* verify getchar() != EOF is 1 or 0 */

int main()
{
    printf("%d\n", getchar() != EOF);
}