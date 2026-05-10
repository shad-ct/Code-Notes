## List Comprehension
taking the loop above and squishing it into brackets [].

```
[ (WHAT TO DO) for (ITEM) in (LIST) if (CONDITION) ]
```

```
raw_celsius = [22.5, -100, 30.1, 999, 12.0, 45.2, -5]
print( [(c * 9/5) + 32   for c in raw_celsius if c>= -10 and c<= 50 ] )
```
