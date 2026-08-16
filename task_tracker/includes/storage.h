#pragma once

#include "structure.h"
#include <stddef.h>
#include <stdio.h>

void csv_parse(FILE *file, Task *storage);
void save_to_csv(Task storage[], size_t len);