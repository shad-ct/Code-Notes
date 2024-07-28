
# Timers (countdown and more) : 
    var i = 0;
    var sh = setInterval(lol,100);
    function lol(){
        document.write('hello ');
        i++
            if(i==10){
                clearInterval(sh)}
    }  

    # Countdown 

        var i = 10 ;
            var x = setInterval(function() {
                document.getElementById('count').innerHTML=i;
                i--;
                    if(i==0){
                        clearInterval(x)
                    }
                }, 1000);
    
    # set timeout
        in this, it only work once, unlike setInterval, its not a loop
