import React from 'react';
import "./App.css"

function Card(props) {
  return (
    <div className="card">
      <img src={props.image} alt={props.name} className="card-image" />
      <h3 className="card-name">{props.name}</h3>
      <p className="card-bio">{props.bio}</p>
    </div>
  );
}

export default Card;

