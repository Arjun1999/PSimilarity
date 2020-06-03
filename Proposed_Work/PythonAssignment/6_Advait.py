def ensure(x,y):
  if (x>y):
    return True
def gcd(x,y):
  if(ensure(x,y)):
    if y==0:
      return x
    else : 
      return gcd(y,x%y)
x = input("Enter any number ")
y = input("Enter another smaller number ")
print (gcd(x,y))
