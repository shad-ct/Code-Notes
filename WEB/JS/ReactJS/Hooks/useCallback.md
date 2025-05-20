useCallback stores the functions, it is used to prevent the creation of instance of same function again and again. it actually remembers the function.
normally when a component re-renders, function within it (even if they've not changed) will get re-created or create instance of it again.

NB : It doesn't store the function results, only the function itself.  
let's say, if you have a component from other tsx file, that is called in App, when there's a change in app, like re-rendering, the components is also called again. 

when exporting the component : 
```
export default React.memo(name)
```
