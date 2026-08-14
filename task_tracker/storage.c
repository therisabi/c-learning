#include "structure.h"
#include <stdio.h>

void csv_parse(FILE *file, Task *storage) {
    char buffer[200];

    int index = 0;
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        sscanf(buffer, "%d;%99[^;];%d;%d", &storage[index].id,
               storage[index].title, &storage[index].is_completed,
               &storage[index].priority);

        index += 1;
    }
}

void save_to_csv(Task storage) {}