import './Header.css'
import image from "./image.jpg"


  function Header (){
    return (
  <header>
        <div className ="navbar">
            <div className ="nav-logo">
                <div className ="logo">
              
{/* <img src={image} alt="" /> */}
                </div>
            </div>
            <div className ="nav-address">
                <p>deliver to </p>
                <div className ="add-icon">
                    <i className ="fa-solid fa-location-dot"></i>
                    <p>india </p>
                </div>
            </div>
            <div className ="nav-search">
                <select className ="search-select">
                    <option value="">ALL </option>
                    <option value="">children toys  </option>
                    <option value="">children clothes </option>
                    <option value="">women clothes </option>
                    <option value="">mens shirt </option>
                    <option value="">mens jeans </option>
                    <option value="">toys</option>
                </select>
                {/* <input placeholder="search amazon" className ="search-input "> */}
                <input type="text" placeholder="search amazon " className = "search-input "/>
                <div className ="search-icon">
<i className ="fa-solid fa-magnifying-glass"></i>
                </div>
            </div>
             <div className ="flag ">
                {/* <img src="" alt="" /> */}
                <p>EN </p>
                <select name="" id="">
                    <option value=""></option>
                </select>
             </div>

        <div className ="nav-singin">
            <p><span> hello, sign in </span></p>
            <p className ="nav-second ">account s list </p>
        </div>
        <div className ="box4"> 
            <p>Return &</p>
            <p>order</p>
        </div>
        <div className ="shopping-cart ">
<i className ="fa-solid fa-cart-shopping"></i>
<p>cart </p>
        </div>
        </div>
         <div className ="listing ">
            <div className ="menubar">
            <i className ="fa-solid fa-bars"></i>

           <p>ALL </p>
            </div>
      <a href="https://www.mxplayer.in/?utm_source=perf_g&utm_medium=web&utm_campaign=Sem_brand_21732594131|165059303182|mx%20player&gad_source=1&gad_campaignid=21732594131&gbraid=0AAAAACj0yj-X0q8SEeqeOTXh5djgcu-zQ&gclid=Cj0KCQjwlrvBBhDnARIsAHEQgORDG_JxwhT7Q1wnYuw-GBwrjTY18RuWBn9OhhZLs79RqEjvTTxaCf4aAstDEALw_wcB">mx player </a>
      <a href="#">sale </a>
      <a href="#">best seller </a>
      <a href="#">today deals </a>
      <a href="#">mobile </a>
      <a href="#">customer services </a>
      <a href="#">prime </a>
      <a href="#">elecronics </a>
      <a href="#">home and kitchen </a>
      <a href="#">amazon pay </a>
        </div>
        {/* <div className ="amazonimage ">
            <img src="C:\Users\Public\Documents\himanshu git hub\programming code (himanshu )\html\.vscode\studentportfolio\amazon\81CHEj5kf-L._SX3000_.jpg" alt="">
            <!-- <img src="C:\Users\Public\Documents\himanshu git hub\programming code (himanshu )\html\.vscode\studentportfolio\amazon\Bestseller-Bau_3000x1200GW_PC_Hero._CB536880983_.jpg" alt=""> -->
        </div>
         */}
         <div className ="amazonimage">
            <img src={image} alt="" />
         </div>
    </header>
    )
}

export default Header 