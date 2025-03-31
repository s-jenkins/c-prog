function myMove() {
    let id = null;
    const elem = document.getElementById("animate");   
    let pos = 0;
    elem.style.left = "100px";
    elem.style.visibility = "visible";
    clearInterval(id);
    id = setInterval(frame, 5);
    function frame() {
      if (pos == 750) {
        clearInterval(id);
      } else {
        pos++; 
        elem.style.top = pos + "px"; 
        // 
      }
    }
  }