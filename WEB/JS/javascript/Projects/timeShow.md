

# Show time and date 
    let display = document.getElementById('timenow')

    function putZero(num){
        return num<10?'0'+num:num;
    }


    function showTime (){
        let dt = new Date();
        var dateString = putZero(dt.getHours())+' : '+ putZero(dt.getMinutes())+' : '+dt.getSeconds();
        setInterval(() => {
        showTime()
    }, 0);
        display.innerHTML=dateString;
    }

    showTime();