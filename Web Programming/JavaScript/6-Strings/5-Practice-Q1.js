//Prompt the user to enter their full name. Generate a username for them based on the input.
//Start username with @, followed by thgeir full name and ending with thr fullname length.
//eg. user name = "rajitaraundal", username should be "rajitaraundal45"

let fullname = prompt("Enter your full name:");
console.log("fullname:", fullname);

let username = "@" + fullname + fullname.length;
console.log(username);
//Output: @rajitaraundal45 (if the input is "rajitaraundal")

