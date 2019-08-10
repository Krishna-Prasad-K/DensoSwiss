p,d=[int(x) for x in input().split()]
sum=0
while p>0:
  sum+=p
  p=(p*d)//100
print(sum)
