def factorial(n):
    if n==0 or n==1 :
        return 1
    else:
        return n*factorial(n-1)
a=list(map(str,input().strip()))
n=len(a)
if a.count(a[1])==len(a):
    print('1')
else:
    print(factorial(n))