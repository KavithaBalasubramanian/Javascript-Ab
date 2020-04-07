//You are provided with two numbers. Find and print the smaller number.

const readline = require('readline');
const inp = readline.createInterface({
  input: process.stdin
});
const userInput = [];
inp.on("line", (data) => {
	userInput.push(data);
});
inp.on("close", () => {
	console.log(small(userInput));
});

function small(Data){
  var a = Data;
 
  for(var i=0;i<small.length;i++)
  {
    a[i]=parseInt(a[i]);
    if(a[i]<a[i+1])
      console.log(a[i])
    else
       console.log(a[i+1])
  }
  exit;
}
