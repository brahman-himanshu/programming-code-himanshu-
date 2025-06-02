import './container.css'
import Clothes from 'clothe.jpg'
import Glass from 'glass.jpeg'
import Toy from 'toy.jpeg'
import Children  from 'childrenclothe.jpeg'
import Electronic from 'fan.jpeg'
import Furniture from 'furniture.jpeg'
import Headphone from 'headphone.jpeg'
import Animaltoy from 'animaltoy.jpeg'
import Shoe from 'shoe.jpeg'
import Women from 'womenclothe.webp'
import Supplement from 'supplement.jpeg'
import Animaltoy2 from 'animaltoy2.jpeg'
import Fitness from 'fitness.jpeg'
import More from 'tv.jpeg'




function Container (){
    return (
               <div className ="containers"> 
            <div className ="box1 box  "> 
                <h2>Glasses </h2>
                <div className ="boximg">
                    <a href="#">
                        <img src={Glass} alt="" />
                    </a>
                </div>
            </div>
            <div className ="box2 box"> 
                <h2>clothes </h2> 
                <div className ="boximg">
                  <a href="#">
                    <img src={Clothes} alt="" />
                  </a>
                </div>
            </div>
            <div className ="box3 box"> 
                <h2>Toys </h2> 
                <div className ="boximg">
                    <a href="#">
                        <img src={Toy} alt="" />
                    </a>
                    
                </div>
            </div>
            <div className ="box4 box"> 
                <h2>children clothes</h2>
                <div className ="boximg">
                   <a href="#">
                    <img src={Children} alt="" />
                   </a>
                    
                </div>
            </div>
            <div className ="box5 box  "> 
                <h2>elecronics</h2>
                <div className ="boximg">
                   <a href="#">
                    <img src={Electronic} alt="" />
                   </a>
                </div>
            </div>
            <div className ="box6 "> 
                 <h2>Furniture</h2> 
                <div className ="boximg">
                  <a href="#">
                    <img src={Furniture} alt="" />
                  </a>
                </div>
            </div>
            <div className ="box7 box"> 
            <h2>Headphones </h2>
            <div className ="boximg">
               <a href="#">
                <img src={Headphone} alt="" />
               </a>
                   
            </div>    
            </div>
            <div className ="box8 box"> 
                <h2>Animals toys </h2>
                <a href="#">
                    <img src={Animaltoy} alt="" />
                </a>
            </div>
            <div className ="box9 box  "> 
                <h2>Shoes </h2>
                <div className ="boximg">
                    <a href="#">
                        <img src={Shoe} alt="" />
                    </a>
                </div>
            </div>
            <div className ="box10 box"> 
                <h2> Womens clothes </h2>
                <div className ="boximg">
                   <a href="#">
                    <img src={Women} alt="" />
                   </a>
                </div>
            </div>
            <div className ="box11 box"> 
                <h2>Study table </h2> 
                <div className ="boximg">
                   <a href="#">
                    <img src={Furniture} alt="" />
                   </a>
                </div>
            </div>
            <div className ="box12 box"> 
                <h2>Table fans </h2>
                <div className ="boximg">
                    <a href="#">
                        <img src={Electronic} alt="" />
                    </a>
                </div>
            </div>
            <div className ="box13 box  "> 
                <h1 style="margin-left: 3rem;">up to 50% off  </h1>
                <div className ="boximg">

                <a href="#">
                    <img src={More} alt="" /></a>       
                </div>
            </div>
            <div className ="box14 box"> 
                <h2>Fans </h2>
                <div className ="boximg">
                    <a href="#">
                        <img src={Electronic} alt="" />
                    </a>
                </div>
            </div>
            <div className ="box15 box"> 
            <h2>Health product</h2>
            <div className ="boximg">
               <a href="#">
                <img src={Supplement} alt="" />
               </a>
                 
            </div>    
            </div>
            <div className ="box8 box"> 
                <h2>Animals toys </h2>
              <a href="#">
                <img src={Animaltoy2} alt="" />
              </a>
            </div>
            
            <div className ="box15 box"> 
                <h2>Fitness accesories</h2>
                <div className ="boximg">
                   <a href="#">
                    <img src={Fitness} alt="" />
                   </a>
                </div>    
                </div>
            <div className ="box17 box"> 
                <h2>More items to consider </h2>
                <a href="#">
                    <img src={More} alt="" />
                </a>
            </div>
        </div>
    )
}
export default Container