word=input().split()
dict ={}
value = []
for alphabet in word:
    dict[alphabet]=word.count(alphabet)
value=set(word)
print(dict)
