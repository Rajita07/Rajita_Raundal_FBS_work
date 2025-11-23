//Block in JavaScript - A block is a section of code that is grouped together using curly braces {}. 
// Blocks are used to define the scope of variables and control structures like loops and conditionals.
//Block = {  code  }

const a = 18;
{ code }
console.log(a);
//In the above code, the block contains a single statement that logs the value of 'a' to the console.

{
    let b = 25; // 'b' is scoped to this block
    console.log(b); 
}

//We will see this in Functions