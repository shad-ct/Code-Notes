when any change is made, every function is called in react. even though it is not usefull function. to prevent it being called whenever anything is changed.
useMemo is used

useMemo(callbackfunction, [dependency])
in here, when dependency is changed the callbackfunction is called. only when dependency is changed.

it may sound similar to useEffect , but in useEffect it trigger re-rendering... but this 
