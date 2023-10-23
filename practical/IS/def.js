const primeNumberInput=document.getElementById("prime-number-input");
const generatorInput=document.getElementById("generator-input");
const secretNumberInput=document.getElementById("secret-number-input");
const generatePublicKeyBtn=document.getElementById("generate-public-key-btn");
const publicKeyOutput=document.getElementById("public-key-output");
const sharedSecretOutput=document.getElementById("shared-secret-output");
generatePublicKeyBtn.addEventListener("click",()=>{
const p=parseInt(primeNumberInput.value);
const g=parseInt(generatorInput.value);
const a=parseInt(secretNumberInput.value);
const A=Math.pow(g,a)%p;
publicKeyOutput.textContent=A;
const B=parseInt(prompt("enter public key from another desk"));
const publicKeyOutputb=Math.pow(g,B)%p;
const sharedSecret=Math.pow(publicKeyOutputb,a)%p;
const sharedSecretB=Math.pow(A,B)%p;
if(sharedSecretB==sharedSecretB)
{
sharedSecretOutput.textContent=sharedSecret;
}
else
{
alert("enter different keys");
}
});