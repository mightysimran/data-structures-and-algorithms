# I. Brute force
## Intuition

You want to find the **largest element** in an array. The code uses a **brute force approach** by sorting the entire array and then picking the last element.

### Step-by-Step Logic

1. **Input the Array:**
   - Read the size `n` and the array elements into vector `v`.

2. **Sort the Array:**
   - `sort(v.begin(), v.end());`
   - This rearranges the elements in **ascending order** (smallest to largest).

3. **Pick the Last Element:**
   - After sorting, the **largest element** will always be at the **last index** (`v[n-1]`).

4. **Output the Result:**
   - Print `v[n-1]`, which is the largest value.

## Why Does This Work?

- **Sorting** guarantees that all elements are arranged from smallest to largest.
- Thus, the **last element** is always the maximum.

## Efficiency

- **Time Complexity:** `O(n log n)` due to sorting.
- **Brute Force:** This is not the most efficient way (a single pass with `O(n)` is better), but it’s simple and always works.

## Summary

> **Intuition:**  
> "If you sort all the numbers, the biggest one will always end up at the end. So, just sort and the last one would be the largest!"

# II. Optimal
## Intuition 
Instead of sorting the whole array (which takes extra time), we simply **scan through the array once** and keep track of the biggest number we've seen so far.

### Step-by-Step Logic

1. **Initialize the Maximum:**
   - Start by assuming the **first element** (`v[0]`) is the largest, and store it in a variable called `max`.

2. **Scan the Array:**
   - Go through each remaining element in the array (from index 1 to n-1).
   - For each element, **compare** it with the current `max`.
     - If the current element is **greater**, update `max` to this new value.

3. **Result:**
   - After checking every element, `max` will contain the **largest value** in the array.

### Why is this Optimal?

- **Time Complexity:** Only one pass through the array (`O(n)`).
- **Space Complexity:** Constant extra space (`O(1)`), since we just use one variable for `max`.
- **No unnecessary work:** We don’t rearrange or sort the array - just look for the biggest number.

## Summary 

> **"Keep track of the biggest number you’ve seen so far as you look at each element. At the end, you’ll have the largest one!"**

This is the most efficient and direct way to find the largest element in an array.