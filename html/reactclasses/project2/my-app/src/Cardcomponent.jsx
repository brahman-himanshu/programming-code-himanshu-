
import React from "react";
import Card from "./Card";
import "./App.css";

const teamMembers = [
  // {
  //   image: "https://randomuser.me/api/portraits/men/32.jpg",
  //   name: "Mayank Kumar",
  //   bio: "Btech cs 2nd year and they become a frontend developer .",
  // },
  // {
  //   image: "https://randomuser.me/api/portraits/men/33.jpg",
  //   name: "Abhishek Kumar",
  //   bio: "12 passout he become a frontend developer.",
  // },
  // {
  //   image: "https://randomuser.me/api/portraits/men/34.jpg",
  //   name: "Suraj Jha",
  //   bio: " in 12 standard he is also a frontend developer .",
  // },
  // {
  //   image: "https://randomuser.me/api/portraits/men/35.jpg",
  //   name: "Sachin",
  //   bio: " he is my friend in 6 class and he currently doing bca and he is also a web developer .",
  // },
  // {
  //   image: "https://randomuser.me/api/portraits/men/36.jpg",
  //   name: "Himanshu",
  //   bio: "Web Developer building responsive, accessible websites. and i am btech cse student senior branch of this batch ",
  // },

  {
    image: "https://ui-avatars.com/api/?name=Mayank+Kumar&background=0D8ABC&color=fff",
    name: "Mayank Kumar",
    bio: "Btech cs 2nd year and they become a frontend developer .",
  },
  {
    image: "https://ui-avatars.com/api/?name=Abhishek+Kumar&background=F39C12&color=fff",
    name: "Abhishek Kumar",
    bio: "12 passout he become a frontend developer.",
  },
  {
    image: "https://ui-avatars.com/api/?name=Suraj+Jha&background=9B59B6&color=fff",
    name: "Suraj Jha",
    bio: " in 12 standard he is also a frontend developer .",
  },
  {
    image: "https://ui-avatars.com/api/?name=Sachin&background=2ECC71&color=fff",
    name: "Sachin",
    bio: " he is my friend in 6 class and he currently doing bca and he is also a web developer .",
  },
  {
    image: "https://ui-avatars.com/api/?name=Himanshu&background=E74C3C&color=fff",
    name: "Himanshu",
    bio: "Web Developer building responsive, accessible websites. and i am btech cse student senior branch of this batch ",
  },
];
function Cardcomponent() {
  return (
    <div className="app-container">
      {teamMembers.map(function (member, index) {
        return (
          <Card
            key={index}
            image={member.image}
            name={member.name}
            bio={member.bio}
          />
        );
      })}
    </div>
  );
}

export default Cardcomponent;