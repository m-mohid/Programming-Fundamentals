full_name = input("Enter your full name: ") # Takes input and stores it in a variable
age = int(input("Enter age: ")) # Takes input and stores it in a variable
print(f"Hello, {full_name}! You are {age} years old.") # Displays the output on screen using f-string
subject = input("Enter your favorite subject: ") # Takes input and stores it in a variable
print("Your favorite subjcet is ", subject) # Displays the output on screen
favorite_fruits = []
print("Enter your five favorite fruits: ")
for i in range (5):
    fruit = input("Enter fruit: ")
    favorite_fruits.append(fruit)

print("Your favorite fruits are: ")
for i in range (5):
    print(i+1,".", favorite_fruits[i])


