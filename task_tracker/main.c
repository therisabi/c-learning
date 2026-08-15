#include "structure.h"
#include "gui.h"
#include <stdbool.h>
#include <stdio.h>


int main() {
    int action = -1;
    print_welcome_message();
    while (true) {
        print_actions_list_message();
        print_user_input_message();
        if (scanf("%d", &action) != 1 || !(0 <= action && action <= 4)) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            print_incorrect_action_message();
            continue;
        }
        print_reset_text();
        if (action == 1) {
            //вот здесь реализация добавления 1 новой задачи в файл
        } else if (action == 2) {
            //здесь изменить описание уже существующей задачи из файла
        } else if (action == 3) {
            //здесь увидеть список всех задач из файла
        } else if (action == 4) {
            //здесь пометить какую-то задачу как выполненную
        } else if (action == 5) {
            //здесь сразу удалить задачу
        } else {
            print_program_finished_message();
            break;
        }
    }
    
    Task storage[50]; // !сделать динамическим

    FILE *f = fopen("tasks.csv", "r");
    if (f != NULL) {
        csv_parse(f, storage);

        fclose(f);
    }
}
