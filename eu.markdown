---
layout: page
permalink: /eu/
title: ME
---

<html>
<head>
<style>
.circular--square {
  opacity:100%;
  transition:opacity 2s
}
h1 {text-align: center;}
p {text-align: center;}
div {text-align: center;}
.circular--square { border-top-left-radius: 50% 50%; border-top-right-radius: 50% 50%; border-bottom-right-radius: 50% 50%; border-bottom-left-radius: 50% 50%; }
.fade-in-image {
  opacity: 50%;
}
.circular--square:hover {
  opacity:100%;
  transition:opacity 2s
}
  @import url('https://fonts.googleapis.com/css2?family=Poppins:wght@900&display=swap');
body {
  padding: 0;
  margin: 0; 
  height: 100vh;
  background: #18191f;
  font-family: 'Poppins', sans-serif;
  display: flex;
  justify-content: center;
  align-items: center;
}
ul {
  position: relative;
  display: flex;
}
li {
  list-style: none;
}
label {
  position: relative;
}
input[type="checkbox"] {
  position: absolute;
  opacity: 0;
  cursor: pointer;
  height: 80px;
  width: 80px;
  z-index: 100;
}
div {
  position: relative;
  height: 80px;
  width: 80px;
  background: #18191f;
  color: #555;
  display: flex;
  display: flex;
  justify-content: center;
  align-items: center;
  font-size: 46px;
  cursor: pointer;
  margin: 0 4px;
  border-radius: 20px;
  box-shadow: -1px -1px 4px rgba(255, 255, 255, 0.05),
    4px 4px 6px rgba(0, 0, 0, 0.2),
    inset -1px -1px 4px rgba(255, 255, 255, 0.05),
    inset 1px 1px 1px rgba(0, 0, 0, 0.1);
}
/* div:before {
  content: "";
  position: absolute;
  top: 2px;
  left: 2px;
  width: 75px;
  height: 38px;
  border-top-left-radius: 20px;
  border-top-right-radius: 20px;
  background: rgba(255, 255, 255, 0.05);
} */
input[type="checkbox"]:checked ~ div {
  box-shadow: inset 0 0 2px rgba(255, 255, 255, 0.05),
    inset 4px 4px 6px rgba(0, 0, 0, 0.2);
  color: yellow;
  text-shadow: 0 0 15px yellow, 0 0 25px yellow;
  animation: glow 1.5s linear infinite;
}
@keyframes glow {
  0% {
    filter: hue-rotate(0deg);
  }
  100% {
    filter: hue-rotate(360deg);
  }
}
  

  
}


</style>
</head>
<body>
<img class="circular--square" src="https://avatars.githubusercontent.com/u/43838148?s=96&v=4" />
<h1>zkowsky</h1>
<p>C/C++ and Assembly</p>
<div>Quero um emprego</div>
<ul>
  <li>
    <input type="checkbox" />
    <div>P</div>
  </li>
  <li>
    <input type="checkbox" />
    <div>R</div>
  </li>
  <li>
    <input type="checkbox" />
    <div>A</div>
  </li>
  <li>
    <input type="checkbox" />
    <div>T</div>
  </li>
  <li>
    <input type="checkbox" />
    <div>H</div>
  </li>
  <li>
    <input type="checkbox" />
    <div>A</div>
  </li>
  <li>
    <input type="checkbox" />
    <div>M</div>
  </li>
</ul>

</body>
</html>




