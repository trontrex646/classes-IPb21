<?php
include("Cat.php");
include("Car.php");
include("Train.php");

echo"HI ";

$myCar = new Car("Dacia ");
echo "<br>";
// $myCar2 = new Car("Apple Car");

Car::makeNoise();
$myCar->makeNoise();
echo "<br>";
train::makeNoise();

$mytrain = new train("skoda ");
echo $mytrain->getmileage();
echo "<br>";
echo "<br>";

Cat::meow();

echo "Mincis ir " . $mincis->age . " gadus vecs.\n";
echo "Brincis ir " . $brincis->age . " gadus vecs.\n";


?>