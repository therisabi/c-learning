#include <stdbool.h>
#include <stdio.h>

#include "includes/control.h"
#include "includes/gui.h"
#include "includes/storage.h"

int main() {
    Task storage[50];  // !сделать динамическим

    size_t len = 0;  // количество тасков
    FILE* f = fopen("tasks.csv", "r");
    if (f != NULL) {
        len = csv_parse(f, &storage[0]);
        fclose(f);
    }

    int action = -1;
    int c;
    print_welcome_message();
    while (true) {
        print_actions_list_message();
        print_user_input_message();
        if (scanf("%d", &action) != 1 || !(0 <= action && action <= 5)) {
            while ((c = getchar()) != '\n' && c != EOF);
            print_incorrect_action_message();
            continue;
        }
        while ((c = getchar()) != '\n' && c != EOF);
        print_reset_text();
        if (action == 1) {
            char title[MAX_TITLE_LEN - 1];
            int priority;
            char format[20];
            snprintf(format, sizeof(format), "%%%ds", MAX_TITLE_LEN - 1);
            print_create_task_message();
            print_user_input_message();
            scanf(format, title);
            print_choose_task_id_message();
            print_user_input_message();
            if (scanf("%d", &priority) == 1 && (priority > 0)) {
                // и вот сюда короче нужно реализацию добавление задачи в файл
            } else {
                print_incorrect_task_id_message();
            }
        } else if (action == 2) {
            // здесь изменить описание уже существующей задачи из файла
        } else if (action == 3) {
            // здесь увидеть список всех задач из файла
        } else if (action == 4) {
            // здесь пометить какую-то задачу как выполненную
        } else if (action == 5) {
            // здесь сразу удалить задачу
        } else {
            print_program_finished_message();
            break;
        }
        while ((c = getchar()) != '\n' && c != EOF);
    }

    save_to_csv(storage, len);
    // пока это ломает файл
}
