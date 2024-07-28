
# to do list 

    # HTML

    
    <body> 
    
        <input type="text" name="" id="inputt" placeholder="enter to do list">
        <button id="add">Add</button>
        <br>
        <ul id="list">

    </ul>

    </body>    

    # JS

    let input = document.getElementById('inputt')
    let add = document.getElementById('add')
    let list = document.getElementById('list')

    function adding(){
    let data = input.value
    let li = document.createElement('li')
    li.innerText=data

    list.appendChild(li)
        }

    add.addEventListener('click',adding)
