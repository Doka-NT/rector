<?php declare(strict_types=1);

namespace OldNamespace\SubNamespace;

use OldNamespace;
use OldNamespace\AnotherSubNamespace;

class SomeClass
{
    public function someClass()
    {
        $keepThis = new \OldNamespace;

        return new \OldNamespace\SomeClass;
    }
}
