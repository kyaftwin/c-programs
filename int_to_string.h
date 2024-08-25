#ifndef INT_TO_STRING_H
#define INT_TO_STRING_H

/**
 * @brief Converts an integer to its string representation.
 *
 * This function takes an integer as input and returns a dynamically
 * allocated string containing the integer's string representation.
 * The caller is responsible for freeing the allocated memory using
 * the `free` function.
 *
 * @param num The integer to be converted to a string.
 * @return A pointer to the dynamically allocated string containing
 *         the integer's string representation.
 */
char* int_to_string(int num);

#endif

