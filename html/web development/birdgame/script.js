const bird = document.getElementById("bird");
const scoreEl = document.getElementById("score");
const gunshotSound = document.getElementById("gunshot-sound");
let score = 0;

function moveBird() {
  const container = document.querySelector(".game-container");
  const maxX = container.clientWidth - bird.clientWidth;
  const maxY = container.clientHeight - bird.clientHeight;

  const x = Math.random() * maxX;
  const y = Math.random() * maxY;

  bird.style.left = `${x}px`;
  bird.style.top = `${y}px`;
}

setInterval(moveBird, 1500);

bird.addEventListener("click", () => {
  score++;
  scoreEl.textContent = score;
  gunshotSound.currentTime = 0; // rewind to start
  gunshotSound.play();
  moveBird();
});
