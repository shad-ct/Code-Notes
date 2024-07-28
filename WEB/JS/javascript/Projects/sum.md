

# summing and displaying user input in html with js 

    # HTML
    <body>
    <h1>Enter 2 numbers</h1>
       <input type="text" id="no.1">
       <input type="text" id="no.2">
       <br>
       <br>
    <h2 id="something"> </h2>

    <button type="button" onclick="sum()">output</button>
    </body>

    # JS 
    function sum(){
        let num1 = parseFloat(document.getElementById("no.1").value)
        let num2 = parseFloat(document.getElementById('no.2').value)
        let result = num1 + num2
        document.getElementById('something').innerHTML=result;
}