#pragma once
#ifndef BASIC_ARRAY_FUNC
#define BASIC_ARRAY_FUNC

typedef int element;
void array_print(element* nums, int n);
void array_print_two_dim(element** nums, int x, int y);
element* array_generate(int n);
element** create_two_dim_array(int x, int y);
bool del_two_dim_array(element** array, int x);

#endif // !BASIC_ARRAY_FUNC

