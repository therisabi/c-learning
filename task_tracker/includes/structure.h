#pragma once

#include <stddef.h>
#include <stdio.h>

#define MAX_COUNT_OF_TASKS 50
#define SAVE_FILE_PATH "tasks.csv"

typedef struct {
    int id;
    char title[100];
    int is_completed;
    int priority;
} Task;