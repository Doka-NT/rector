<?php declare (strict_types=1);

class ClassWithNamedService1 extends Controller
{
    public function render()
    {
        $this->get('some_service')->render();
    }
}
