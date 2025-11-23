//Objects Data Types
//Collection of related data and/or functionality.
//In JavaScript, objects are used to store multiple values in a single variable.
//Objects are created using curly braces {} and consist of key-value pairs.

const student = {
    name: "Harry Potter", //key: name, value: "Rajita"

    age: 22,      //key: age, value: 22

    isEnrolled: true, //key: isEnrolled, value: true

    courses: ["Web", "Java", "Frameworks"], //key: courses, value: array of course names

    address: {      //key: address, value: another object

        street: "3000 F C Road",
        city: "Hogwarts",           //nested object 
        zipCode: "12345"
    } 
    
}

console.log(student); //prints the entire student object

console.log(student.name); //Accessing string property
console.log(student["name"]); //Alternative way to access string property

console.log(student.age); //Accessing number property
console.log(student["age"]); 

console.log(student.isEnrolled); //Accessing boolean property 
console.log(student.courses); //Accessing array property within the object
console.log(student.address.city); //Accessing nested object property



//Objects allow you to group related data together, making it easier to manage and access.
//You can add, modify, or delete properties of an object as needed.

student.phoneNumber = "123-456-7890"; //Adding new property
console.log(student.phoneNumber); //Accessing newly added property

student.age = 23; //Modifying existing property
console.log(student.age); //Accessing modified property

delete student.isEnrolled; //Deleting a property
console.log(student); //prints the updated student object


//Objects are fundamental in JavaScript and are widely used in various applications, including web development, data manipulation, and more.


student.courses.push("Data Structures"); //Adding new course to the courses array
console.log(student.courses); 

student.address.zipCode = "54321"; //Modifying nested object property
console.log(student.address.zipCode);

student.age = student.age + 1; //Incrementing age by 1
console.log(student.age);