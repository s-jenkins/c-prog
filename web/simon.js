let i = 0;
let n = 9;
let disp ="A"
let scope = setInterval(myTimer, 1000);
function myTimer() {
  //console.log(i);
  if (i === n) {
    clearInterval(scope);
    console.log('end...');
    return;
  }
  document.getElementById('_h1').innerHTML = disp;
  console.log(disp);
  disp = "&nbsp;" + disp;
  i++;
}