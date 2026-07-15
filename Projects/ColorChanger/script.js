const redBtn=document.getElementById("red");
const greenBtn=document.getElementById("green");
const blueBtn=document.getElementById("blue");
const randomBtn=document.getElementById("random");
const colorName=document.getElementById("color");
const bgColor=document.getElementById("bgcolor");
const colors=["red", "blue", "green", "yellow", "purple", "orange", "pink", "cyan"];
redBtn.addEventListener("click", function () {
  document.body.style.color="red";
  document.body.style.backgroundColor="black";
  colorName.innerText="Text Color: Red";
  bgColor.innerText="Background Color: Black";
});
greenBtn.addEventListener("click", function () {
  document.body.style.color="green";
  document.body.style.backgroundColor="pink";
  colorName.innerText="Text Color: Green";
  bgColor.innerText="Background Color: Pink";
});
blueBtn.addEventListener("click", function () {
  document.body.style.color="blue";
  document.body.style.backgroundColor="orange";
  colorName.innerText="Text Color: Blue";
  bgColor.innerText="Background Color: Orange";
});
randomBtn.addEventListener("click", function () {
  const randomIndex1=Math.floor(Math.random()*colors.length);
  const randomIndex2=Math.floor(Math.random()*colors.length);
  const randomColor=colors[randomIndex1];
  const randomBgColor=colors[randomIndex2];
  document.body.style.color=randomColor;
  document.body.style.backgroundColor=randomBgColor;
  colorName.innerText="Text Color: " + randomColor;
  bgColor.innerText="Background Color: " + randomBgColor;
});