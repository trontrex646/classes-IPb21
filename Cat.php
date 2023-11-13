<?php

class Cat {
    public $name;
    public $age = 0;

    public function birthday() {
        $this->age++;
    }

    public static function meow() {
        echo "Meow!\n";
    }
}

$mincis = new Cat();
$mincis->name = "Mincis";

$brincis = new Cat();
$brincis->name = "Brincis";

$mincis->birthday();
$brincis->birthday();



?>
