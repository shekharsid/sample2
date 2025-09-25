# Function to generate Fibonacci sequence
def fibonacci(n):
    a, b = 0, 1
    sequence = []
    while len(sequence) < n:
        sequence.append(a)
        a, b = b, a + b
    return sequence

if __name__ == "__main__":
    num_terms = int(input("Enter the number of Fibonacci terms: "))
    print(fibonacci(num_terms))
