#include "structure.h"
#include <stddef.h>
#include <stdio.h>

void csv_parse(FILE *file, Task *storage) {
    char buffer[200];

    int index = 0;
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        if (sscanf(buffer, "%d;%99[^;];%d;%d", &storage[index].id,
                   storage[index].title, &storage[index].is_completed,
                   &storage[index].priority) != 4) {
            printf("csv-read error: record id:%d is corrupted",
                   storage[index].id);
        }

        index += 1;
    }
}

void save_to_csv(Task storage[], size_t len) {
    FILE *file = fopen("tasks.csv", "w");
    if (file != NULL) {

        for (int i = 0; i < len; i++) {
            fprintf(file, "%d;%s;%d;%d\n", storage[i].id, storage[i].title,
                    storage[i].is_completed, storage[i].priority);
        }
    } else {
        printf("save error: failed to open file");
    }

    fclose(file);
}