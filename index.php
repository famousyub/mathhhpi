<?php 




echo "hello geust" ;

$username ="guest";
$user_id  = "12";

$loadtem = shell_exec("./source");

echo "<br/>";
echo  $loadtem;

$pyth = shell_exec("python app.py");

//echo $pyth;

$mathdata  = shell_exec("./mathpi");

echo $mathdata;

echo "<br/>";


echo "<a href='data.php?user={$username}&user_id={$user_id}' > {$username} </a>";
?>

			
