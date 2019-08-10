# DensoSwiss
P,D=[int(x) for x in input().split()]
sum=0
while P>0:
  sum=sum+P
  P=(P*D)//100
print(sum)
