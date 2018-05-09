i = 2
a, b = 1, 1
while True:
	c = a + b
	a = b
	b = c
	i = i + 1
	if len(str(c)) == 1000:
		print(c)
		break
print(i)