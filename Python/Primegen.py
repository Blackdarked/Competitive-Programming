import math
from numpy import longlong
from numpy.lib.function_base import append, sqrt

def get_primes(n_min, n_max):
    result = []
    for x in range(max(n_min, 2), n_max):
        has_factor = False
        for p in range(2, int(sqrt(x)+1)):
            if x % p == 0:
                has_factor = True
                break
        if not has_factor:
            result.append(x)
    return result

mn, mx = int(input()), int(input())
ans = get_primes(mn, mx)
print(ans)