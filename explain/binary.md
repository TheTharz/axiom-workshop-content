## Binary Search

Binary search is an efficient algorithm for finding a target value within a **sorted** array. It works by repeatedly dividing the search interval in half. If the target value is less than the item in the middle of the interval, the algorithm narrows the search to the lower half; otherwise, it narrows it to the upper half. This process continues until the target value is found or the interval is empty.

### How It Works

1. **Initialization:**

   - Set two pointers: `left` to the beginning of the array (index `0`) and `right` to the end of the array (index `n-1`).

   ![Initial Array](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-initial-array.png)

   ![Set Pointers](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-set-pointers.png)

2. **Calculate the Middle:**

   - Compute the middle index: `mid = left + (right - left) / 2`.
     ![Find Middle](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid.png)

3. **Compare Target with Middle Element:**

   - If the middle element equals the target, return the middle index.
   - If the target is less than the middle element, update `right` to `mid - 1` (search in the left half).
   - If the target is greater than the middle element, update `left` to `mid + 1` (search in the right half).

   ![Compare Middle](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-find-mid.png)

4. **Repeat:**

   - Repeat steps 2-3 until `left` exceeds `right`.

   ![Mid Again](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid-again.png)

5. **Terminate:**

   - If `left` exceeds `right`, the target is not in the array. Return a value indicating the target is not found (e.g., `-1`).

   ![Found](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-found.png)
