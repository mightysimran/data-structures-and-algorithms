# I. Brute force
The **intuition** behind this brute force approach to finding the **second largest element** in an array is:

- **Sort the array** in ascending order, so all the elements are arranged from smallest to largest.
- The **largest element** will now be at the last position (`v[n-1]`).
- To find the **second largest**, move backwards from the second last element (`v[n-2]`) and look for the first element that is **not equal** to the largest value.
  - This is necessary because the largest value might appear multiple times (duplicates).
- The first such element you find is the **second largest**.

**Why does this work?**
- Sorting puts all duplicates of the largest value at the end.
- By scanning backwards, you skip all those duplicates and stop at the next smaller unique value, which is by definition the second largest.

**Time Complexity:**  
- Sorting: `O(n log n)`
- Backward scan: `O(n)`
- **Total:** `O(n log n)` (dominated by sorting).

> **"Sort the array, then scan backward from the end to find the first value smaller than the maximum — this is the second largest element."**

# II. Better
## Intuition 

Here we'd want to avoid sorting (which is slow for big arrays) but still keep things simple and clear. That’s exactly what this method does:

### Step 1: Find the Largest

- First, make a pass through the array to find the **largest element**.
- This is straightforward: just keep updating your `largest` variable whenever you see a bigger number.

### Step 2: Find the Second Largest

- Now, you know what the largest number is.
- Make a **second pass** through the array, looking for the **biggest number that isn’t equal to the largest**.
- You do this by checking two things for each element:
  1. Is it **not equal** to the largest?
  2. Is it **bigger** than your current `secondLargest`?
- If both are true, update `secondLargest`.

### Why Two Passes?

- The first pass guarantees you know the largest, so in the second pass you can confidently skip all those and look for the next biggest.
- This method is **safe against duplicates** (if the largest value appears more than once, you won’t accidentally pick it as second largest).

### Why Is This "Better"?

- **No sorting needed**: Much faster for large arrays.
- **Simple logic**: Easy to understand and code.
- **Handles duplicates**: You won’t get tripped up by repeated largest values.
- **Time Complexity:** Only two passes, so `O(2n)`, which is basically `O(n)`.

> In short:  
> **"First, find the biggest number. Then, go through the array again and look for the biggest number that isn’t that one. That’s your second largest!"**

This is a simple, reliable approach that’s still efficient. It’s a great balance between clarity and performance - easy to explain, easy to debug, and much faster than sorting for big inputs.


# III. Optimal
Here’s the intuition behind the **most optimal (single-pass)** approach for finding the second largest element in an array:

## Intuition
Instead of 2 passes (one for the largest, then another for the second largest), you can **find both in a single iteration** through the array. The idea is to always keep track of two things as you go:

- The **largest** element seen so far.
- The **second largest** element seen so far.

### How does it work?

- **Initialize** two variables: `largest` and `secondLargest`. Start with very small values (like `INT_MIN`) to handle any possible array values.
- **For each element** in the array:
  - If the element is **greater than `largest`**, then:
    - `secondLargest` becomes the old `largest`
    - `largest` becomes this new element
  - Else if the element is **less than `largest`** but **greater than `secondLargest`**:
    - Update `secondLargest` to this element

This way, every time you see a new maximum, you "push" the previous maximum down to second place, and every time you see something that's not the biggest but is bigger than your current second biggest, you update that too.

### Why is this optimal?

- **One pass:** You only look at each element once - **O(n)** time.
- **Constant space:** You only use two variables, regardless of array size.
- **Handles duplicates:** If the largest value appears multiple times, you never accidentally pick it as the second largest.

> **"As you scan through the array, always keep the top two biggest numbers updated. By the end, the second biggest variable holds your answer."**

This approach is both **fast** and **simple**, and is the standard for this problem in coding interviews and real-world code.
