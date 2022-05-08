<?php 



if(isset($_GET["user"])  && isset($_GET["user_id"])){
  echo "hello " . $_GET["user"];

  echo "id " . $_GET["user_id"];

  $data_  = shell_exec("./cgi {$_GET["user"]}  {$_GET["user_id"]} ");
  echo $data_;
}

else   {

    header("Location:index.php");
}


?>