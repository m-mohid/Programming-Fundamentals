numbers = []
for i in range(5):
    print("Enter Number", i+1)
    number = int(input())
    numbers.append(number)

print("The numbers you entered in reverse order are: ")
for i in range(4,-1,-1):
    print(numbers[i])

