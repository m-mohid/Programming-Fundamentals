import random
num = random.randrange(1,10)
guess = 0
while guess != num:
    guess = int(input("Guess the number ( 1 - 10 ): "))
    if ( guess > num ):
        print("A bit too high.")
    elif ( guess < num ):
        print("A bit too low.")
    else:
        print("Conratualtions! You guessed the correct number.")


