const button = document.getElementById("togglebtn");
const button2 = document.getElementById("btn");
button2.addEventListener("click", function () {heading.innerText="I love web development";});
button2.addEventListener("click", function () {heading.style.color="blue";});
button2.addEventListener("click", function () {heading.style.fontSize="50px";});
button.addEventListener("click", () => {document.body.classList.toggle("dark");});

