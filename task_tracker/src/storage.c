#include "../includes/storage.h"

#include "../includes/structure.h"

int csv_parse(FILE* file, Task* storage) {
    char buffer[200];

    int size_counter = 0;
    int index = 0;
    while (fgets(buffer, sizeof(buffer), file) != NULL ||
           size_counter < MAX_COUNT_OF_TASKS) {
        if (sscanf(buffer, "%d;%99[^;];%d;%d", &storage[index].id,
                   storage[index].title, &storage[index].is_completed,
                   &storage[index].priority) != 4) {
            printf("csv-read error: Task id-%d is corrupted\n",
                   storage[index].id);
        }

        index += 1;
        size_counter += 1;
    }

    return size_counter;
}

void save_to_csv(Task storage[], size_t len) {
    FILE* file = fopen(SAVE_FILE_PATH, "w");
    if (file != NULL) {
        for (int i = 0; i < len; i++) {
            fprintf(file, "%d;%s;%d;%d\n", storage[i].id, storage[i].title,
                    storage[i].is_completed, storage[i].priority);
        }
        fclose(file);
    } else {
        printf("save error: failed to open file");
    }
}