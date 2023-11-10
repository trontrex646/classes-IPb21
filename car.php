<?php
class Car {

public $brand;

public function __construct($brand){

$this->brand = $brand;

echo $this->brand . " is alive
";

}

public function __destruct(){

echo $this->brand . " is dead
";

}

static function makeNoise(){

echo "Beep BEEEEEEP!!!
";

}

}

?>