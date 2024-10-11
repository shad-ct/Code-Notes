## Checkout [Theory](https://github.com/shad-ct/Code-Notes/blob/main/WEB/JS/ReactJS/RANDOM/Theory.md) to learn about mounting , unmounting and updating 

# Note : 
    while mounting and updating useEffect is worked/called
## example : 

      useEffect(() => {
        console.log('Mounting........')
        return () => {
          console.log('Unmounting........')
        }
      })
mounting is printed when you click on the button (mount/add) and when you click again, to hide unmounting is printed (unmount/remove) but whenever you click the increment button both are printted (check theory.md for the code!!!). to prevent this , pass an empty array 

#### example : 

      useEffect(() => {
        console.log('Mounting........')
        return () => {
          console.log('Unmounting........')
        }
      },[])
