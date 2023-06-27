#include <unistd.h>

/**
 * Writes a single character to the standard output (stdout).
 *
 * @param c The character to be written.
 * @return On success, returns the written character as an unsigned char cast to an int.
 *         On error, returns -1.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}
