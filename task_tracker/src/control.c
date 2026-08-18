#include "structure.h"

#include <stddef.h>

void delete_task(Task storage[], int task_id, size_t* storage_len) {
    for (int j = task_id; j < *storage_len - 1; j++) {
        storage[j] = storage[j + 1];
    }
    *storage_len -= 1;
}