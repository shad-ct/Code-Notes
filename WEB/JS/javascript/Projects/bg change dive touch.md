# Bg changing div when touched : 
        <div class="lol" onclick="fun(this)" style="height: 50%; width: 50%; background-color:red;">
        <h1>hello</h1>
    </div>

    
    <script>
        function fun(lol){
            const bgclr = lol.style.backgroundColor;
            if(bgclr=="red"){
                lol.style.backgroundColor="green";
            }
            else{
                lol.style.backgroundColor="red";
            }
        }
    </script>