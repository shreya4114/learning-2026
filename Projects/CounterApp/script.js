const count=document.getElementById("count");
const increaseBtn=document.getElementById("inc");
const decreaseBtn=document.getElementById("dec");
const resetBtn=document.getElementById("reset");
const doubleBtn=document.getElementById("doub");
const history=document.getElementById("history");
let counter=0;
function addHistory() {
  const li=document.createElement("li");
  li.innerText=counter;
  history.appendChild(li);
}
function updateCounter() {
  count.innerText=counter;
  if (counter>0) {
    count.style.color="green";
  } else if (counter<0) {
    count.style.color="red";
  } else {
    count.style.color="black";
  }
}
increaseBtn.addEventListener("click", function () {
  counter++;
  updateCounter();
  addHistory();
});
decreaseBtn.addEventListener("click", function () {
  counter--;
  updateCounter();
  addHistory();
});
resetBtn.addEventListener("click", function () {
  counter=0;
  updateCounter();
  addHistory();
});
doubleBtn.addEventListener("click", function () {
  counter*=2;
  updateCounter();
  addHistory();
})