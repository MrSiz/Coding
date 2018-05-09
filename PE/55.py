def Lycheck(n):
    for i in range(0,50):
        n = n+int(str(n)[::-1])
        if str(n)==str(n)[::-1]: return False
    return True
print(len([n for n in range(10000) if Lycheck(n)]))