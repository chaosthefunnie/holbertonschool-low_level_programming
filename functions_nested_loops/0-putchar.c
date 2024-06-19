#include <unistd.h>

int main() {
    char *message = "_putchar\n";
    write(1, message, 9); // Using write to output the message to stdout
    return 0;
}
