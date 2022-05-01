#include <ArrayUtils.h>

void setup()
{
    // String Array
    char *strings[] = {"hello", "world", "what's", "up"};

    // Search for the string 'world' in the <code>strings</code> array with length 6
    int stringResult = search("world", strings, 6);

    Serial.begin(9600);

    // Prints the index of the search item in the array.
    Serial.println(stringResult);
}

void loop()
{
}