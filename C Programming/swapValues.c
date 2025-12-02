// I would like to be able to pass an array with two elements to my swapValues function to swap the values. However it appears that the values aren't changing.
// Can you figure out what's wrong here?

//  mutate values in place
// by swapping its elements

void swap_values(int values[2]) {
    values[2] = values[0];
    values[0] = values[1];
    values[1] = values[2];
}