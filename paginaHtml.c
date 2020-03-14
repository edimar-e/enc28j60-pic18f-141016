
const char  PAGINA_INDEX[]="
<html>
  <head>
      <title>Casa 155</title> 
     <script type=\"text/javascript\">
     
     window.onload = function(){
     Atualiza();
     }
     
      function Atualiza() {
      goAjax(\"/pagina_2\")
      setTimeout(\"Atualiza()\", 3000)
      }
      function goAjax(url) {
         xmlhttp = new XMLHttpRequest()
         xmlhttp.open(\"GET\", url, true)
         xmlhttp.onreadystatechange = function() {
         if (xmlhttp.readyState==4) {
         retorno = xmlhttp.responseText
         divisao = document.getElementById(\"div_mensagem\")
         divisao.innerHTML = retorno
      }      
   }
   xmlhttp.send(null)
}
</script>
  </head>

  <body bgcolor=\"#556B2F\" text=\"#FFFFFF\" style=\"text-align:center\">
      <h1>Casa 155</h1>
      <h2>Mensagem de casa:</h2><h1>
      <div id=\"div_mensagem\"></div></h1>
      <div id=\"estatico\">      
      <!--campo de mensagem ao lcd, cujo nome e lcd-->
      <form>        
            <h2>Enviar mensagem: </h2> <input type=\"text\" name=\"lcd\" size=\"16\" maxlength=\"16\"> 
              <input type=\"submit\" value=\"Enviar\">
        </form>
      <!-- botao para desliga e ligar, o parametro name deve cenferir com o do programa em c -->  
      <form> 
             <input type=\"submit\" name=\"led1\" value=\"%1\">
        </form> 
      <!-- mostra a imagem ospedada no imgur, lampada -->
        <img src=\"http://i.imgur.com/%2.jpg\"/>      
      <br>
      <h2>Status da porta frontal:</h2><br>
      <img src=\"http://i.imgur.com/xQa9mT4.jpg\"/>
      </div>
  </body>
</html>
";

const char PAGINA_2[]="%0";
