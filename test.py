

arr = [3,3,2,2]
arr[0] =(arr[2]&arr[0])+arr[2]

for j in range(4,8): #4,5,6,7
    arr[j%3] = (arr[0] + 4) + arr[1]
    # print (j)
    
arr[0] = (arr[2]&5) + arr[3]

print(arr[2]+arr[3])  