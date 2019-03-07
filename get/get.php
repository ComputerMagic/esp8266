<?php
if ( !empty( $_GET['test'] ))
{
 $test1=$_GET['test'];
}else{
 $test1=0;
}

$_GET=array();
$_POST=array();



if($test1==1){


$file = 'people.txt';
// Открываем файл для получения существующего содержимого
$current = file_get_contents($file);
// Добавляем  в файл
$current .= "TEST1\n";
// Пишем содержимое обратно в файл
file_put_contents($file, $current);




// $to      = 'alexd22@mail.ru';
// $subject = 'alarm';
// $message = 'Hi. Problem in the house...';
// mail($to, $subject, $message);

}else if($test1==2){
$file = 'people.txt';
// Открываем файл для получения существующего содержимого
$current = file_get_contents($file);
// Добавляем  в файл
$current .= "Aleks Sviridov\n";
// Пишем содержимое обратно в файл
file_put_contents($file, $current);


}else{


$file = 'people.txt';
// Открываем файл для получения существующего содержимого
$current = file_get_contents($file);
// Добавляем в  файл
$current .= $test1;
// Пишем содержимое обратно в файл
file_put_contents($file, $current);

}
?>