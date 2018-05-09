s = set()
for i in range(2, 101):
    for j in range(2, 101):
        temp = i ** j
        s.add(temp)
print(len(s))