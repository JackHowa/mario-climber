#include <stdio.h>
#include <cs50.h>

int main(void) {
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    } while (height > 23 && height < 0);

    int i = 0;
    do
    {
        for (int x = 0; x < i; x++) {
            printf("#");
        }
        printf("\n");
        i++;
    } while (i < height);
}
