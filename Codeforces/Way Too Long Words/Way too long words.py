n = int(input())
i = 0
while i < n:
    i += 1
    word = input()
    if word.len() < 10:
        print(word)
    else:
        r = int(word.len()) - 2
        