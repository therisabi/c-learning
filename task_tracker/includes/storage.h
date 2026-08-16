#include "structure.h"
#include <stdio.h>
#pragma once

void csv_parse(FILE *file, Task *storage);
void save_to_csv(Task storage[], size_t len);