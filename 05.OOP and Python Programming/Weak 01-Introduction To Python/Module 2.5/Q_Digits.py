def print_digits(n):
    reversed_digits = str(n)[::-1]
    print(*reversed_digits)

t = int(input())

for _ in range(t):
    num = int(input())
    print_digits(num)
