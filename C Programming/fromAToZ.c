// Given a string indicating a range of letters, return a string which includes all the letters in that range, including the last letter.
// Note that if the range is given in capital letters, return the string in capitals also!

// Examples
// "a-z" ➞ "abcdefghijklmnopqrstuvwxyz"
// "h-o" ➞ "hijklmno"
// "Q-Z" ➞ "QRSTUVWXYZ"
// "J-J" ➞ "J"
// Notes
// A hyphen will separate the two letters in the string.
// You don't need to worry about error handling in this kata (i.e. both letters will be the same case and the second letter will not be before the first alphabetically).

void letters_range(char letters[26 + 1], const char range[3 + 1]) {
    // Initialize index for the letters string
    int index = 0;

    // Iterate through the range and append characters to letters
    for (char ch = range[0]; ch <= range[2]; ch++) {
        letters[index++] = ch;
    }

    // Null-terminate the string
    letters[index] = '\0';
}