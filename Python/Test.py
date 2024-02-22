def find_approximation(x, e):
    a = 1
    b = e

    while True:
        if a / b >= x - e and a / b <= x + e:
            break
        a += 1
        b = round(a / (x + e))
    return a, b

# Chạy thử chương trình
x = 3.5
e = 1
a, b = find_approximation(x, e)

print(f"a = {a}")
print(f"b = {b}")