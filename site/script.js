var started = false;
document.addEventListener("keypress", e => {
    if (e.keyCode == 39 && !started) {
        started = true;
        Promise.all([
            startVideo(),
            printCoin()
        ]).then(() => {
            started = false;
            console.log("All actions have succesfully ran");
        })
    }
});

var startVideo = () => new Promise((resolve, reject) => {
    console.log("Start video");
    var videoDom = document.querySelector("video");
    videoDom.className = "__isActive";
    videoDom.play();
    setTimeout(() => {
        videoDom.className = "";
        resolve();
    }, 7000)
});


var printCoin = () => new Promise((resolve, reject) => {
    console.log("Print coin");
    window.print();
    resolve();
});