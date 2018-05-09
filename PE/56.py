#python 3

import math

ans = -1
for a in range(1, 101):
    for b in range(1, 101):
        c = a ** b
        #print(c)
        s = sum(map(int, str(c)))
        #print("e")
        if s >= ans:
            ans = s
print(ans)