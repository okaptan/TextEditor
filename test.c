#include "input.h"

int main(void)
{
    int c;

    while (1) {
        c = kbget();        // Get input
        if (c == KEY_ENTER || c == KEY_ESCAPE) {
            break;
        } else
        if (c == KEY_LEFT) {
            printf("\00[1C");      // Move cursor one left
        } else
        if (c == KEY_RIGHT) {
            printf("\00[1D");      // Move cursor one right
        } else
        if (c == KEY_UP){
            printf("\00[1A");      // Move cursor to 5th row, 3rd column
        }else
        if (c == KEY_DOWN){
            printf("\00[1B");
        } else {
            putchar(c);
        }
    }
    printf("\n");

    return 0;
}
