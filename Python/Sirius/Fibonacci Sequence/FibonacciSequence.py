#Rules: Input a number, if the number is in the Fibonacci Sequence - 
#output the order of the number. Else if the number isnt in the Fibonacci
#Sequence - output "-1"
A = int(input())
x = 0
i = 0
y = 1
b = i
num = 0
num = int(num)
while x <= A:
  num += 1
  if x == A:
    print (int(num-1))
    exit()
  else:
    num += 1
    i=x + y
    if i == A:
      print (int(num-1))
      exit()
    else:
      b = x
      x=x + i
      y = i
print (-1)