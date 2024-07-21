### Merging Two Sorted Arrays

**Initial Arrays:**

arr1: [1, 3, 5, 7]
arr2: [2, 4, 6, 8]

**Pointers:**

- `i = 0` (for `arr1`)
- `j = 0` (for `arr2`)

**Merged Array:**

merged: []

**Steps:**

1. **Compare `arr1[i]` and `arr2[j]`:**

   - `1` vs `2`
   - Append `1` to `merged`
   - Increment `i`
   - `merged: [1]`

2. **Compare `arr1[i]` and `arr2[j]`:**

   - `3` vs `2`
   - Append `2` to `merged`
   - Increment `j`
   - `merged: [1, 2]`

3. **Compare `arr1[i]` and `arr2[j]`:**

   - `3` vs `4`
   - Append `3` to `merged`
   - Increment `i`
   - `merged: [1, 2, 3]`

4. **Compare `arr1[i]` and `arr2[j]`:**

   - `5` vs `4`
   - Append `4` to `merged`
   - Increment `j`
   - `merged: [1, 2, 3, 4]`

5. **Compare `arr1[i]` and `arr2[j]`:**

   - `5` vs `6`
   - Append `5` to `merged`
   - Increment `i`
   - `merged: [1, 2, 3, 4, 5]`

6. **Compare `arr1[i]` and `arr2[j]`:**

   - `7` vs `6`
   - Append `6` to `merged`
   - Increment `j`
   - `merged: [1, 2, 3, 4, 5, 6]`

7. **Compare `arr1[i]` and `arr2[j]`:**

   - `7` vs `8`
   - Append `7` to `merged`
   - Increment `i`
   - `merged: [1, 2, 3, 4, 5, 6, 7]`

8. **Append remaining elements from `arr2`:**
   - `merged: [1, 2, 3, 4, 5, 6, 7, 8]`

**Final Merged Array:**

merged: [1, 2, 3, 4, 5, 6, 7, 8]
