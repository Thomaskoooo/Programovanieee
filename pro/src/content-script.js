const showAnswers = () => {
    const script = document.createElement("script");
    script.src = chrome.extension.getURL("src/eros-hack.js");

    (document.head || documentElement).appendChild(script);  
};
