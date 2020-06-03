def ensure(a,b):
  return a>b
def gcd(a,b):
 if ensure(a,b):
   if a%b == 0:
     return b
   else:
     return gcd(b,a%b)
 else:
  return gcd(b,a)
if "_name_" == "_main_":
 a = input("Enter a number:")
 b = input("Enter a number:")
 print (gcd(a,b))
