### Installation : 
```
pip install opencv-python
```

### Read, Display & Write : 
```
import cv2 as cv

img = sv.imread('bird.jpg',1) // now a color img, if 0 B/W

cv.imshow('windows name' , img) // shows the img

// save img :
cv.imwrite('newName.jpg',img)


cv.waitKey(0)
cv.destroyAllWindows() // the above 2 are for keeping the window on .

```
