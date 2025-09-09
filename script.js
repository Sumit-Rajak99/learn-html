var bar =document.getElementById('bar')
let menu =document.querySelector('.scrol')

bar.addEventListener('click',()=>{
    menu.style.cssText=`transform: translateX(0%);`
})