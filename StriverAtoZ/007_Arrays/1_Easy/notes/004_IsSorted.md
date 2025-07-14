# Optimal

## Intuition

### What are we trying to do?
We want to determine if the array is **sorted in ascending order** (each element is less than or equal to the next).

### How does the code work?

1. **Assume Sorted:**  
   - Start by assuming the array is sorted (`sorted = true`).

2. **Check Each Pair:**  
   - Go through the array and compare each element with the next one (`v[i]` with `v[i+1]`).
   - If you ever find an element that is **greater than** the next (`v[i] > v[i+1]`), the array is **not sorted**.
   - As soon as you find such a pair, set `sorted = false` and break out of the loop (no need to check further).

3. **Output the Result:**  
   - If you never find such a pair, the array is sorted (`sorted` remains `true`).
   - Print `"true"` if sorted, `"false"` otherwise.

### Why is this efficient?

- **Single pass:** You only check each adjacent pair once - **O(n)** time.
- **Early exit:** As soon as you find the array is not sorted, you stop checking further (efficient for unsorted arrays).

<br>

This approach is like **walking down a line of people** and checking that everyone is at least as tall as the person before them.  
- If you ever find someone shorter than the previous person, you immediately know the line isn’t sorted by height.
- If you get to the end without finding this, the line is sorted.

> In short:  
> **"Just check each neighbor pair - if you ever see a drop, the array isn’t sorted. Otherwise, it is!"**
