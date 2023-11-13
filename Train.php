<?php
include_once("vehical.php");
class train extends vehical{
    static function makeNoise(){

        echo "Chooo Chooo!!! <br>";
    }        
    public function getmileage(){
        return $this->mileage;
    }
}