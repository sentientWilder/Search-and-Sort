/*  Author: 		Dan Wilder
 *
 *  School:		University of Missouri - St. Louis
 *  Semester:		Fall 2015
 *  Class: 		CS 3130 - Design and Analysis of Algorithms   
 *  Instructor:		Galina N. Piatnitskaia
 */

#include "../include/array_utilities.h"
#include <stdio.h>
#include <stdlib.h>

void fprintArray(FILE *stream, int arr[], int size) {
/* Print 10 values per line with aligned columns
 */
  int i;

  for (i=0; i < size; i++) {
    fprintf(stream, "%5d ", arr[i]);
    if ((i+1)%10 == 0)
      fprintf(stream, "\n");
  }

  printf("\n");
}

void randomInitialize(int arr[], int size, int minVal, int maxVal) {
/* Initialize arr[0..size-1] to random int in interval [1, maxVal]
 * srand() should be called in application program ONCE prior to calling this
 */
  int i, randomInt;
   
  for (i = 0; i < size; i++) {
    randomInt = (rand() % maxVal-minVal) + minVal;
    arr[i] = randomInt;
  }
}

void copyArray(int dest[], int source[], int size) {

  int i;
  for (i = 0; i < size; ++i)
    dest[i] = source[i];
}

void readArrayFile(FILE *stream, int arr[], int size) {
  int i, read;

  for (i = 0; i < size; ++i) {
    if (fscanf(stream, "%d", &read) == EOF) 
      break;
    arr[i] = read;
  }
}
