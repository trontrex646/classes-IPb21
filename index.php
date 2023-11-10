<?php

include("Car.php");

echo"HI ";

$myCar = new Car("Dacia");

// $myCar2 = new Car("Apple Car");

Car::makeNoise();

$myCar->makeNoise();

?>