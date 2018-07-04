#include "gtest/gtest.h"

#include "task1.c"
#include "task2.c"
#include "task3.c"

//#define TASK1
//#define TASK2
//#define TASK3

#ifdef TASK1
// ****************************************************************************
// Тесты для задачи 
//   Задан вещественный отрезок[a, b].
//   Определить, принадлежит ли число x этому отрезку.
// ****************************************************************************

TEST(check_x_in_bounds, check_x_in_ab_return_true)
{
  float a = -1;
  float b = 2;
  float x = 1;
  int check = x_in_bounds(a, b, x);

  EXPECT_EQ(1, check);
}

TEST(check_x_in_bounds, check_x_less_a_return_false)
{
  float a = -1;
  float b = 2;
  float x = -2;
  int check = x_in_bounds(a, b, x);

  EXPECT_EQ(0, check);
}

TEST(check_x_in_bounds, check_x_greater_b_return_false)
{
  float a = -1;
  float b = 2;
  float x = -2;
  int check = x_in_bounds(a, b, x);

  EXPECT_EQ(0, check);
}
#endif

#ifdef TASK2
// ****************************************************************************
// Тесты для задачи 
//   Заданы целые числа A и В.
//   Определить среднее арифметическое чисел  A и B.
// ****************************************************************************

TEST(check_ab_average, check_positive_ab)
{
  int a = 1;
  int b = 2;
  double check = ab_average(a, b);

  EXPECT_EQ(1.5, check);
}

TEST(check_ab_average, check_negative_ab)
{
  int a = -2;
  int b = -3;
  double check = ab_average(a, b);

  EXPECT_EQ(-2.5, check);
}

TEST(check_ab_average, check_zero_ab)
{
  int a = 0;
  int b = 0;
  double check = ab_average(a, b);

  EXPECT_EQ(0, check);
}

TEST(check_ab_average, check_odd_a_even_b)
{
  int a = -3;
  int b = 4;
  double check = ab_average(a, b);

  EXPECT_EQ(0.5, check);
}

TEST(check_ab_average, check_even_a_odd_b)
{
  int a = 2;
  int b = -5;
  double check = ab_average(a, b);

  EXPECT_EQ(-1.5, check);
}
#endif

#ifdef TASK3
// ****************************************************************************
// Тесты для задачи 
//   Дан непустой массив вещественных чисел.
//   Определить, является ли он строго возрастающей последовательностью.
// ****************************************************************************

TEST(check_sorting, check_sorted_array_return_true)
{
  float arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(1, check);
}

TEST(check_sorting, check_not_sorted_array_return_false)
{
  float arr[5] = { 1,2,3,4,0 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(0, check);
}

TEST(check_sorting, check_reverse_sorted_array_return_false)
{
  float arr[6] = { 6,5,4,3,2,1 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(0, check);
}

TEST(check_sorting, check_equal_array_return_false)
{
  float arr[4] = { 4,4,4,4 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(0, check);
}

TEST(check_sorting, check_one_element_return_true)
{
  float arr[1] = { 3 };
  int check = check_sorting(arr, sizeof(arr) / sizeof(float));

  EXPECT_EQ(1, check);
}
#endif
