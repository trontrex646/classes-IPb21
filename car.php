<?php
include_once("vehical.php");
class Car extends vehical{


public function __destruct(){

echo $this->brand . " is dead";

}

static function makeNoise(){

echo "Beep BEEEEEEP!!!  <br>";
}

}

?>