numbers = []
for i in range(5):
    print("Enter Number", i+1)
    number = int(input())
    numbers.append(number)

print("The Square of each number you entered is: ")
for i in range(5):
    print("Square of", numbers[i], "=", numbers[i]*numbers[i])