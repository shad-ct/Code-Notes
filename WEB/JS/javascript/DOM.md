# Taking tags from html to js class!
    let something = document.querySelector(".h1");

# to output the calculation/variables within the js to html : 
    console.log("something is ${sum}" )
# taking data from html to js (list)
let allList = document.querySelectorAll('li')
let array = [];
allList.forEach(function(listItem){
    let listText = listItem.innerHTML
    array.push(listText)
})

console.log(array)

# something.evenListener('click',function())


