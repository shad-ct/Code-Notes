# Slicing 
```
import numpy as np

array = np.array([[1, 2, 3, 4],
[5,6,7,8],
[9,10,11, 12],
[13, 14, 15,16]])

# array[start: end: step]

print(array[0:3])
```

out : 
```
[[ 1  2  3  4]
 [ 5  6  7  8]
 [ 9 10 11 12]]
```

# Broadcasting : 
doing arithmetic operations in different dimesions of matrix--
rules : 
- They are exactly the same size.
- One of them is exactly size 1 (so it can be stretched to match the other).


# Filtering : 
```
import numpy as np

ages = np.array([[21, 17, 19, 20,16, 30, 18, 65],
[39, 22, 15, 99, 18, 19, 20, 21]])

teenagers = ages[ages < 18]

print(teenagers)
```

## Filtering using where function [keeping the og size of the array ] : 
```
import numpy as np

ages = np.array([[21, 17,19, 20, 16, 30, 18, 65],
[39, 22, 15, 99, 18, 19, 20, 21]])

adults = np.where(ages >= 18, ages, 0)

print(adults)
```
OUT : 

```
[ [21 0 19 20 0 30 18 65]
[39 22 0 99 18 19 20 21]]
```


# Choosing random stuff array : (here selects 3)

```
import numpy as np

rng = np.random.default_rng()

fruits = np.array(["apple", "orange", "banana", "coconut", "pineapple"])
fruits = rng.choice(fruits, size=3)
print(fruits)
```

# Numpy Arrays : 

### To check dimension : 
```
arr1.ndim
```
### To check num of elements : 
```
arr1.size
```


## Three Dimensional Arrays
<img width="1107" height="584" alt="image" src="https://github.com/user-attachments/assets/28acf7d8-a4db-4231-8945-e9b441453cc5" />

## Shape of an Array 
<img width="1151" height="694" alt="image" src="https://github.com/user-attachments/assets/1e63c9dc-952d-4354-a3f8-1a8d1f6a5b21" />

## Reshape an Array
<img width="1115" height="571" alt="image" src="https://github.com/user-attachments/assets/ce0a4eb8-ad2b-4058-b790-ba1067eb7c0d" />

### 1D -> 2D :
<img width="328" height="221" alt="image" src="https://github.com/user-attachments/assets/4483a4be-3d3a-4638-b6ff-1d986d7d5003" />

### 1D -> 3D :
<img width="371" height="270" alt="image" src="https://github.com/user-attachments/assets/4451875f-aa8f-41ef-b93b-04fc5f402aab" />

### 2D -> 2D :
<img width="340" height="458" alt="image" src="https://github.com/user-attachments/assets/d35133f8-0d75-4490-8c17-dfeb00c89dc2" />
