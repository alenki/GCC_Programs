num = int(input())
ok = 0
d = 1
r = 0
  while ok <= num:
    ok = ok*2
    if ok == num:
      print("YES")
      exit()
print("NO")