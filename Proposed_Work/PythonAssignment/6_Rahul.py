def ensure(x, y):
  if(x > y):
    return True
  else:
    return False
def gcd(x, y):
  if(ensure(x, y)):
    if(x % y == 0):
      return y
    else:
      return gcd(y, x%y)
  else:
    return gcd(y, x)
print (gcd(input("Enter number 1: "), input("Enter number 2: ")))
