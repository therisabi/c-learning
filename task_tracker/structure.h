#include <stdbool.h>
#pragma once

#define MAX_COUNT_OF_TASKS 50

typedef struct {
    int id;
    char title[100];
    bool is_completed;
    int priority;
} task;

void delete_task();