//Create a const object called "profile" to store information about a user profile.

const profile = {
    ImageUrl: "www.images.com/rajita_profile.jpg",
    username: "Rajita_03", //key: username, value: "codeMaster"
    followers: 1500, //key: followers, value: 1500
    following: 300, 
    isfollowed: true,
    posts: 75, 
    isVerified: false,
    url: "www.socialmedia.com/Rajita_03",
    bio: "pasionate about Photography and Technology",
    
};

console.log(profile);
console.log("Username:", profile.username);
//can access other properties similarly using profile.propertyName