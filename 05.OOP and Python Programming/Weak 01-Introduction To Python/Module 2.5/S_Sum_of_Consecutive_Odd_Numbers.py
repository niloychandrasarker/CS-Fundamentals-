def sum_of_odd_numbers(x, y):
    if x > y:
        x, y = y, x

    odd_sum = 0

    for num in range(x + 1, y):
        if num % 2 != 0:
            odd_sum += num

    return odd_sum

t = int(input())

for _ in range(t):
    x, y = map(int, input().split())
    print(sum_of_odd_numbers(x, y))
