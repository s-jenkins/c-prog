
// ----------------------------------------------
function myMove() {
    //
    function frame() {

        if (pos == 750) {
          clearInterval(id);
          return;
        } 
        if (pos == 350) {
            clearInterval(id);
            id = setInterval(frame, 10);
        }
        pos++; 
        dash.innerText = pos;
        elem.style.top = pos + "px";  
    }
    const butt = document.getElementById("butt");
    let id = null;
    const elem = document.getElementById("ship");
    const dash = document.getElementById("dash");      
    let pos = 0;
    elem.style.left = "100px";
    elem.style.visibility = "visible";
    clearInterval(id);
    id = setInterval(frame, 50);
  }
// --------------------
