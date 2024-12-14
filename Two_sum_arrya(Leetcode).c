#include<stdio.h>
#include<stdlib.h>

// Function declaration
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {
    int numSize = 5;
    int nums[numSize] = {2, 7, 11, 15, 12};
    int returnSize;
    
    // Call twoSum and store the result
    int* result = twoSum(nums, numSize, 9, &returnSize);

    // Print the result if a solution is found
    if (result != NULL) {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result); // Don't forget to free the dynamically allocated memory
    } else {
        printf("No solution found.\n");
    }

    return 0;
}

// Function definition
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));  // Allocate memory for the result
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;  // Set the return size to 2
                return result;    // Return the result array
            }
        }
    }
    
    // If no solution is found, return NULL
    *returnSize = 0;
    return NULL;
}
