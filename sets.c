//*******************************************************************
// Written by Steven Smail for COP3514
//
// sets.c (Project 3)
//
// This program reads in two sets of numbers, A and B, and calculates
// and prints their union (A ∪ B) and intersection (A ∩ B).
//*******************************************************************

#include <stdio.h>
#define N 10

int main(void)
{
  int a[N] = {0};
  int b[N] = {0};
  int x, y, i, n;

  //Set A
  printf("Please enter the number of elements in set A:\n");
  scanf("%d", &x);

  printf("Enter the numbers in set A:\n");
  for(i = 0; i < x; i++)
  {
    scanf("%d", &n);
    a[n]++;
  }

  //Set B
  printf("Please enter the number of elements in set B:\n");
  scanf("%d", &y);

  printf("Enter the numbers in set B:\n");
  for(i = 0; i < y; i++)
  {
    scanf("%d", &n);
    b[n]++;
  }

  //Print Union
  printf("Union of A and B: ");
  for(i = 0; i < N; i++)
    if(a[i] || b[i])
      printf("%d ", i);
  printf("\n");

  //Print Intersection
  printf("Intersection of A and B: ");
  for(i = 0; i < N; i++)
    if(a[i] && b[i])
      printf("%d ", i);
  printf("\n");

  return 0;
}