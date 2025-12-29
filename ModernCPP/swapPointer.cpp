// You are given the method swap which accepts two pointers and performs a swap between them.
// The method is invoked as follows:
// void* left = new int[0];
// void* right = new int[0];
// swap(left, right);
// After such execution, left should point to the previous address of right and vice versa.
// But... something is wrong! Can you fix the method so it will actually swap the pointers?

void swap(void* &left, void* &right)
{
    void* temp = left;
    left = right;
    right = temp;
};