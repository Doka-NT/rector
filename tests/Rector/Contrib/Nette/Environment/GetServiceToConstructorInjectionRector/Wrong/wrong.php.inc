<?php declare (strict_types=1);

class SomePresenter
{
    public function render()
    {
        $someService = Nette\Environment::getService('someService');
        $someResult = Nette\Environment::getService('someService')->callMe();
    }
}
