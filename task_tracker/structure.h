#pragma once

#include <stdio.h>

#define MAX_COUNT_OF_TASKS 50
#define SAVE_FILE_NAME "tasks.csv"

typedef struct {
    int id;
    char title[100];
    int is_completed;
    int priority;
} Task;

// storage
void csv_parse(FILE *file, Task *storage);
void save_to_csv(Task storage);

// control
void delete_task();