s,b=input().split()
b=int(b)
la=len(s)
d=[]
for i in range(0,la):
     f=a[i]
     d.append(f)
c=[]
for i in range(b,la):
         f=d[i]
         c.append(f)
c.sort()
print("".join(c))
