def ensure(x,y):
 if(x>=y):
  return True
 else:
  return False
def gcd(x,y):
 if not ensure(x,y):
   p=x
   x=y
   y=p
 if(y==0):
  return x
 else: 
  return gcd(y,x%y)
x=input("Enter first number:")	
y=input("Enter another number:")
print ("The greatest common divisor is ",gcd(x,y))
