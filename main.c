#include <stdlib.h>
#include <stdio.h>

// Run command loop
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

char *ush_read_line(void) {
    char *line = NULL;
    ssize_t bufsize = 0;

    if (getline(&line, &bufsize, stdin) == -1) {
        if (feof(stdin)) {
            exit(EXIT_SUCCESS); // EOF character was recieved
        } else {
            perror("readline");
            exit(EXIT_FAILURE);
        }
    }

    return line;
}

int main(int argc, char **argv) {
    ush_loop();

    return EXIT_SUCCESS;
}