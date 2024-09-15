# custom module making 
   module.js 
  const sum = function(a,b){
    return a + b;
  }
  const mul = function(a,b){
      return a * b;
  }
  module.exports = {
      add : sum,
      product : mul
  }
   main.js
  var calc = require('./module')
  console.log(calc.add(20,30))
  
