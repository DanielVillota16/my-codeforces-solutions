t = int(input())
for _ in range(t):
    s = input()
    c = input()
    flag = False
    for i,ch in enumerate(s):
        if c==ch:
            if not (i%2):
                flag=True
    print("YES" if flag else "NO")