# Display prime numbers
# Compare with PrimeNumbersWithFunctionsA.c from Week 5 
# and PrimeNumbers.py

NUMBER_OF_PRIMES = 50
NUMBER_OF_PRIMES_PER_LINE = 10

# Function to check whether or not a number is prime (return True or False)
def isPrime (number):
    isPrime = True # Assume the number is prime

    # Test whether otherwise
    divisor = 2

    while divisor <= number / 2:
        if number % divisor == 0: # If divided, not prime
            isPrime = False 
        divisor +=1 # Next divisor

    return isPrime

# Function to display the results in the correct number per line
def displayPrime(number, count):
    if count % NUMBER_OF_PRIMES_PER_LINE == 0: # display number and advance to new line
        print (number)
    else:             # display number and stay on same line
        print (number, end=" ")

count = 0 # start counting from zero
number = 2 # set next number to be tested to 2

print("The first 50 prime number are:")

# Find, count and display another prime number until 50 found
while count < NUMBER_OF_PRIMES:
    if isPrime (number):
        count += 1
        displayPrime(number, count)
    number +=1
print()
