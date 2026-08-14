#include "structure.h"
#include <stdbool.h>
#include <stdio.h>

void render() {
    Task task;

    const char bold_text[] = "\x1b[1m";
    const char cyan_text[] = "\x1b[36m";
    const char green_text[] = "\x1b[32m";
    const char red_text[] = "\x1b[31m";
    const char reset_text[] = "\x1b[0m";

    int action;
    printf("\n%s%sWelcome to your own TODO-list!%s\n\n", bold_text, cyan_text,
           reset_text);
    while (true) {
        printf("\n%sSelect an action%s\n\n", cyan_text, reset_text);
        printf("1 - add task\n");
        printf("2 - view the list of tasks\n");
        printf("3 - mark the task as completed\n");
        printf("4 - delete task\n");
        printf("0 - exit\n");
        printf("%s\n>>", green_text);

        if (scanf("%d", &action) != 1 || !(0 <= action && action <= 4)) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("\n%sIncorrect action, try again%s\n\n", red_text,
                   reset_text);
            continue;
        }
        printf("%s", reset_text);
        if (action == 1) {

        } else if (action == 2) {

        } else if (action == 3) {

        } else if (action == 4) {

        } else {
            break;
        }
    }
    printf("\n%s%sProgramm has finished work\n", bold_text, cyan_text);
}

int main() {
    render();
    
    Task storage[50]; // !сделать динамическим

    FILE *f = fopen("tasks.csv", "r");
    if (f != NULL) {
        csv_parse(f, storage);

        fclose(f);
    }
}
