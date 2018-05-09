cnt = 0
n, d = 1, 2
for i in range(1000):
    n = n + 2 * d 
    d, n = n, d
   # print(n, d)
    t = n + d 
    if len(str(t)) > len(str(d)):
        cnt += 1 
print(cnt)
    
    
