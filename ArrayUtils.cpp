/*!
 * @file  ArrayUtils.cpp
 * @brief  ArrayUtils library.
 * @details  Array utility functions for arduino.
 * @author  [Sandeep Prasad](https://github.com/SkyIsTheLimit)
 * @version  0.0.1
 */

#include "ArrayUtils.h"

/**
 * @brief Function to search for an item in an integer array.
 *
 * @param searchItem The item to search for.
 * @param values Integer array to search.
 * @param length Length of the array.
 * @return int Returns -1 if not found else index of item.
 */
int search(int searchItem, int values[], int length)
{
  for (int index = 0; index < length; index++)
  {
    if (values[index] == searchItem)
    {
      return index;
    }
  }

  return -1;
}

/**
 * @brief Function to search for an item in a string array.
 *
 * @param searchItem The item to search for.
 * @param values String array to search.
 * @param length Length of the array.
 * @return int Returns -1 if not found else index of item.
 */

int search(char *searchItem, char *values[], int length)
{
  for (int index = 0; index < length; index++)
  {
    if (values[index] == searchItem)
    {
      return index;
    }
  }
}