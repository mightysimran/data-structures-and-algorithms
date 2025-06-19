🫧 **Bubble Sort**

    How it works: Keep swapping adjacent elements if they're in the wrong order. Keep doing that until everything is sorted.

    Time Complexity:

        Best: O(n)
        Only one pass needed if the array is already sorted. Early-exit optimization detects no swaps.

        Worst: O(n²)
        Each element may need to be compared and swapped with every other element → nested loops.

    Space: O(1)

    Stable: Yes

    When to use: Honestly? Don’t. Too slow. But good for learning basics.

🔍 **Selection Sort**

    How it works: Find the smallest element and place it at the front. Repeat for rest.

    Time Complexity: Always O(n²)
    Always scans the remaining unsorted array to find the minimum element for each position, regardless of initial order.

    Space: O(1)

    Stable: No

    When to use: If you care more about minimizing swaps than speed.

📥 **Insertion Sort**

    How it works: Like sorting a hand of cards. Insert each element into its correct position in the sorted part.

    Time Complexity:

        Best: O(n) (if already nearly sorted)
        If the array is nearly sorted, each new element is just compared once and inserted with minimal shifting.

        Worst: O(n²)
        In reverse order, each new element must be compared and shifted through the whole sorted part → nested loops.

    Space: O(1)

    Stable: Yes

    When to use: Works great for small or almost-sorted data. Fast and simple.

🧩 **Merge Sort**

    How it works: Split the array in half, sort both halves, and merge them back together in order.

    Time Complexity: Always O(n log n)
    Divides the array in half each time (log n levels), and merging takes linear time (n) at each level.

    Space: O(n) (uses extra space for merging)

    Stable: Yes

    When to use: When you need guaranteed performance or want a stable sort. Great for linked lists too.

⚡ **Quick Sort**

    How it works: Pick a pivot, move smaller stuff to one side, bigger stuff to the other, and recurse.

    Time Complexity:

        Best/Average: O(n log n)
        If the pivot consistently splits the array into two roughly equal parts, you get a balanced recursion tree. 
        The elements are sorted efficiently.

        Worst: O(n²) (bad pivot choice, like sorted input)
        If the pivot always ends up being the smallest or largest element.
        Creates extremely unbalanced partitions — one side has all the elements, the other has none. 
        This turns the recursion tree into a straight line with n levels, each processing up to n elements → O(n²).

    Space: O(log n) (due to recursion stack)

    Stable: No

    When to use: Fast in practice, used in many real-world systems. Just use a good pivot strategy.