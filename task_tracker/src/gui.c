#include <stdio.h>

#include "structure.h"

const char bold_text[] = "\x1b[1m";
const char cyan_text[] = "\x1b[36m";
const char green_text[] = "\x1b[32m";
const char red_text[] = "\x1b[31m";
const char reset_text[] = "\x1b[0m";

void print_welcome_message() {
    printf("\n%s%sWelcome to your own TODO-list!%s\n\n", bold_text, cyan_text, reset_text);
}

void print_actions_list_message() {
    printf("\n%sSelect an action%s\n\n", cyan_text, reset_text);
    printf("1 - add task\n");
    printf("2 - change task's description\n");
    printf("3 - view the list of tasks\n");
    printf("4 - mark the task as completed\n");
    printf("5 - delete task\n");
    printf("0 - exit\n");
}

void print_user_input_message() { printf("%s\n>>", green_text); }

void print_reset_text() { printf("%s", reset_text); }

void print_incorrect_action_message() {
    printf("\n%sIncorrect action, try again%s\n\n", red_text, reset_text);
}

void print_create_task_message() {
    printf("\n%sChoose title for your task (maximum %d symbols)%s", cyan_text, MAX_TITLE_LEN - 1,
           reset_text);
}

void print_program_finished_message() {
    printf("\n%s%sProgramm has finished work%s\n", bold_text, cyan_text, reset_text);
}