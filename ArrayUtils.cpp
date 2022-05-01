/*!
 * @file  ArrayUtils.cpp
 * @brief  ArrayUtils library.
 * @details  Array utility functions for arduino.
 * @author  [Sandeep Prasad](https://github.com/SkyIsTheLimit)
 * @version  0.0.1
 */

#include "ArrayUtils.h"

/**
 * @brief Function to search for an item in an array with elements of T.
 *
 * @param searchItem The item to search for.
 * @param values Array to search.
 * @param length Length of the array.
 * @return int Returns -1 if not found else index of item.
 */
template <typename T>
int search(T searchItem, int values[], int length)
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