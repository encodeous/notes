# Mock CCC '18 Contest 2 J3/S1 - An Array Problem

> DMOJ link: https://dmoj.ca/problem/nccc2j3s1

### Solution

Given a set of numbers:

#### [1, 2, 1, 10, 3]

 We select the Largest and Smallest Number

**1** [**1**, 2, 1, **10**, 3]

Perform our modification, and then repeat.

[0, 2, 1, 9, 3]

**2** [0, 2, **1**, **9**, 3]

[0, 2, 0, 8, 3]

**3** [0, **2**, 0, **8**, 3]

[0, 1, 0, 7, 3]

**4** [0, **1**, 0, **7**, 3]

[0, 0, 0, 6, 3]

**5** [0, 0, 0, **6**, **3**]

[0, 0, 0, 5, 2]

**6** [0, 0, 0, **5**, **2**]

[0, 0, 0, 4, 1]

**7** [0, 0, 0, **4**, **1**]

[0, 0, 0, 3, 0]

At this step, we cannot make any modifications without producing negative numbers.

Thus, our answer is **7**.
