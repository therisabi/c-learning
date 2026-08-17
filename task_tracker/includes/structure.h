#pragma once

#include <stddef.h>
#include <stdio.h>

#define MAX_COUNT_OF_TASKS 50
#define MAX_TITLE_LEN 100
#define SAVE_FILE_PATH "tasks.csv"

typedef struct {
    int id;
    char title[MAX_TITLE_LEN];
    int is_completed;
    int priority;
} Task;