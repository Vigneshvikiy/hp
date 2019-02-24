start,end=map(int,input().split())
num=start+1
for num in range(start+1,end):
    if(num%2==0):
        print(num,end=" ")
