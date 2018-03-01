numToFind=input().strip()
array,visited=input().split(" "),0
for i in range(0,len(array)):
    if array[i]==numToFind:
        print(i)
        visited=1
        break
if visited==0:
    print("-1")
