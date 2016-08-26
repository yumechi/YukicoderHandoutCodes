def gcd(a, b):
    if a < b:
        a,b = b,a
    while b > 0:
        r = a % b
        a,b = b,r
    return a

if __name__=="__main__":
    n, d = map(int, input().split())
    print(n // gcd(n, d) - 1)