## Linear Search

Linear search is a simple algorithm used to find a target value within an **array**. It works by sequentially checking each element in the array until the target value is found or the end of the array is reached. Linear search does not require the array to be sorted.

### How It Works

1. **Initialization:**

   - Start from the beginning of the array.

   ![Initial Array](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-initial-array.png)

2. **Compare Each Element:**

   - Check each element of the array one by one.
   - If the current element matches the target, return the index of the element.

   ![Comparisons](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-comparisons.png)

3. **Continue Searching:**

   - If the current element does not match the target, move to the next element.
   - Repeat until the target is found or the end of the array is reached.

4. **Terminate:**

   - If the end of the array is reached and the target is not found, return a value indicating the target is not found (e.g., `-1`).

   ![Found](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-found.png)
