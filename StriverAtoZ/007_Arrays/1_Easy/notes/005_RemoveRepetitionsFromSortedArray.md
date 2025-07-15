# I. Brute force

## Intuition

### What's required?
We want to **remove repetitions** from a sorted array so that each element appears only once, and do this "in-place" (i.e., overwrite the original array).

### How does this code work?

1. **Collect Distinct Elements:**
   - Use a `set` to store array elements.  
   - A `set` automatically **removes repetitions** because it only allows distinct values.

2. **Insert All Elements:**
   - Loop through the array and insert each element into the set.
   - After this, the set contains all distinct elements from the array, sorted in ascending order (since sets are ordered by default).

3. **Overwrite the Original Array:**
   - Loop through the set and write each distinct value back into the original array (`v`), starting from index 0.
   - Keep track of how many distinct values you wrote (using `index`).

4. **Result:**
   - The first `index` elements of the array now contain all distinct values.
   - `index` tells you how many distinct elements there are.

### Why is this brute force?

- You use **extra space** (`set`) to collect distinct elements.
- Inserting into a set is `O(log n)` per element, so the process is slower than necessary.
- You make **two passes**: one to fill the set, one to overwrite the array.

### Why does it work?

- Sets guarantee **distinctness** and **sorted order**.
- By overwriting the array with set values, you ensure the "in-place" requirement is met (for the first `index` positions).


It’s simple and always works, but it’s not the most efficient way—especially since the array is already sorted, which you could take advantage of!

> In short:  
> **"Put every number into a set to remove repetitions, then copy the distinct numbers back into the array. Count how many you copied — that’s the answer!"**


# II. Optimal
Here’s the intuition behind the **optimal Two Pointer approach** for removing repetitions from a sorted array:

## Intuition 
Given a sorted array, we want to **remove repetitions in-place** so that each distinct element appears only once at the start of the array, and return the count of distinct elements.

### How does this method work?

#### Key Idea:
Since the array is **sorted**, all repetitions are grouped together. We can efficiently find and place distinct elements using two pointers.

#### Step-by-Step Intuition:

1. **Initialize Two Pointers:**
   - `i` (slow pointer): Points to the last distinct element found.
   - `j` (fast pointer): Scans through the array to find new distinct elements.

2. **Process the Array:**
   - Start `i` at index 0 (the first element is always distinct).
   - For each `j` from 1 to n-1:
     - If `v[j]` is **different** from `v[i]`, it means we found a new distinct element.
     - Move `i` forward by one, and copy `v[j]` to `v[i]`.
     - If `v[j]` is the same as `v[i]`, just continue (skip repetitions).

3. **Result:**
   - After the loop, the first `i+1` elements of the array are the distinct elements.
   - `i+1` is the count of distinct elements.

### Why is this optimal?

- **Single pass:** Only one scan through the array - **O(n)** time.
- **Constant space:** No extra data structures - **O(1)** space.
- **In-place:** The original array is modified directly.



This approach is like **walking along a row of sorted cards**:
- You keep a "distinct pile" at the start.
- Every time you see a card that’s different from the last one in your pile, you add it to the pile.
- By the end, your pile contains only distinct cards, and you know exactly how many there are.

> In short:  
> "**One pointer to build a list of distinct elements at the front of the array, and another to scan for new distinct elements. Only copy when you find something new!"**
