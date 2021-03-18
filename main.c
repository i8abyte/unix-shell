#include <stdlib.h>
#include <stdio.h>

void ush_loop(void) {
    char *line;
    char **args;
    int status;

    do {
        printf("> ");
        // line = ush_read_line();
        // args = ush_split_line(line);
        // status = ush_execute(args);
        status = 0;

        // free(line);
        // free(args);
    } while (status);
}

int main(int argc, char **argv) {
    ush_loop();

    return EXIT_SUCCESS;
}