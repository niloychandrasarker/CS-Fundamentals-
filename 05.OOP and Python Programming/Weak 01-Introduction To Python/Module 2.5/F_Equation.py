def calculate_equation_result(x, n):
    result = 0
    power_of_x = 1

    for i in range(0, n + 1, 2):
        result += power_of_x
        power_of_x *= x * x

    return result

x, n = map(int, input().split())
result = calculate_equation_result(x, n)
print(result-1)
