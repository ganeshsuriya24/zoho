numToFind=input().strip()
array,visited=input().split(" "),-1
for i in range(0,len(array)):
    if array[i]==numToFind:
        visited=i
        break
print(visited)
