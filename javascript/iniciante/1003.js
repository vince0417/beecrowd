//Soma Simples
var input = require("fs").readFileSync(0, "utf8");
var lines = input.split("\n");

var n1 = parseInt(lines[0]);
var n2 = parseInt(lines[1]);
var soma = n1 + n2;

console.log("SOMA = " + soma);
