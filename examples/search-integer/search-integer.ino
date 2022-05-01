#include <ArrayUtils.h>

void setup()
{
    // Integer Array
    int nums[] = {1, 6, 3, 2, 5, 6};

    // Search for the number 5 in the <code>nums</code> array with length 6
    int result = search(5, nums, 6);

    Serial.begin(9600);

    // Prints the index of the search item in the array.
    Serial.println(result);
}

void loop()
{
}