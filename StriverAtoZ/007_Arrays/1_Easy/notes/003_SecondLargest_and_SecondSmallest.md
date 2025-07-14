# Optimal

## Intuition 

### What are we trying to do?
We want to find:
- The **second largest** element (the biggest number that isn’t the absolute largest)
- The **second smallest** element (the smallest number that isn’t the absolute smallest)
...in just **one pass each** through the array.

### How does the code achieve this?

#### For **Second Largest**:
- **Keep two variables:**  
  - `largest` (the biggest number so far)
  - `secondLargest` (the second biggest number so far)
- **For every element**:
  - If it’s **bigger than the current largest**, it becomes the new largest, and the old largest gets "pushed down" to second largest.
  - If it’s **not the largest** but **bigger than second largest**, update `secondLargest`.

#### For **Second Smallest**:
- **Keep two variables:**  
  - `smallest` (the smallest number so far)
  - `secondSmallest` (the second smallest number so far)
- **For every element**:
  - If it’s **smaller than the current smallest**, it becomes the new smallest, and the old smallest gets "pushed up" to second smallest.
  - If it’s **not the smallest** but **smaller than second smallest**, update `secondSmallest`.

### Why is this optimal?

- **Single pass:** Each function only loops through the array once - **O(n)** time.
- **Constant space:** Only a couple of extra variables are used.
- **Handles duplicates:**  
  - For second largest: skips over numbers equal to the largest.
  - For second smallest: skips over numbers equal to the smallest.

<br>

This code is like keeping a **leaderboard** as you scan through the array:  
- Whenever you find someone who beats the current "champion," the old champion moves to second place.
- If someone can’t beat the champion but is better than the runner-up, they take the runner-up spot.

**It’s efficient, elegant, and covers all edge cases (like duplicates or all elements being the same).**

> In short:  
> **"As you look at each number, always keep track of the top two biggest and top two smallest. Edit your leaderboard as you go, and you’ll have your answers by the end!"**
