#include <stdio.h>

// BUBBLE SORT
int bubbleSort(int a[], int lengtha);
void printBubbleSort(int a[], int lengtha);

// SELECTION SORT
int selectionSort(int b[], int lengthb);
void printSelectionSort(int b[], int lengthb);

// INSERTION SORT
int insertionSort(int c[], int lengthc);
void printInsertionSort(int c[], int lengthc);

int main()
{
  // Bubble sort
  int a[] = {3, 4, 5, 2, 6, 5, 8, 34, 56, 2, 11, 4, 5};
  int lengtha = sizeof(a) / sizeof(a[0]);
  // printf("%d\n ", length);

  bubbleSort(a, lengtha);
  printBubbleSort(a, lengtha);

  int b[] = {3, 4, 5, 2, 6, 5, 8, 34, 56, 2, 11, 4, 5};
  int lengthb = sizeof(b) / sizeof(b[0]);

  selectionSort(b, lengthb);
  printSelectionSort(b, lengthb);

  // Selection Sort
  int c[] = {3, 4, 5, 2, 6, 5, 8, 34, 56, 2, 11, 4, 5};
  int lengthc = sizeof(c) / sizeof(c[0]);

  insertionSort(c, lengthc);
  printInsertionSort(c, lengthc);

  return 0;
}

// NOTE Bouble sort method DONE

int bubbleSort(int a[], int lengtha)
{

  for (int i = 0; i < lengtha - 1; i++)
  {
    for (int j = 0; j < lengtha - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        // Swap
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

void printBubbleSort(int a[], int lengtha)
{
  printf("Bubble sort method: ");
  for (int i = 0; i < lengtha; i++)
  {
    printf("%d, ", a[i]);
  }
}

// NOTE Selection sort mothod: DONE

int selectionSort(int b[], int lengthb)
{
  for (int i = 0; i < lengthb - 1; i++)
  {
    int minimum = i;
    for (int j = i + 1; j < lengthb; j++)
    {
      if (b[j] < b[minimum])

        minimum = j;
    }
    if (minimum != i)
    {
      int temp = b[i];
      b[i] = b[minimum];
      b[minimum] = temp;
    }
  }
}

void printSelectionSort(int b[], int lengthb)
{
  printf("\nSelection Sort Method: ");

  for (int i = 0; i < lengthb; i++)
  {
    printf("%d, ", b[i]);
  }
}

// NOTE Insertion Sort Method

int insertionSort(int c[], int lengthc)
{

  int key;
  int j;
  for (int i = 1; i < lengthc; i++)
  {
    key = c[i];
    j = i - 1;
    while (j >= 0 && c[j] > key)
    {
      c[j + 1] = c[j];
      j = j - 1;
    }
    c[j + 1] = key;
  }
}

void printInsertionSort(int c[], int lengthc)
{
  printf("\nInsertion sort method: ");
  for (int i = 0; i < lengthc; i++)
  {
    printf("%d ", c[i]);
  }
}