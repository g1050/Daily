package seven;

import javax.swing.*;
import static java.lang.System.*;
import java.lang.String;

public class swim {
    public static void main(String []args){
        Anemonefish afish = new Anemonefish();
        afish.swimming();

        Human human = new Human();
        human.swimming();

        FlyFish flyfish = new FlyFish();
        flyfish.flying();
        flyfish.swimming();

        doSwim(afish);
        doSwim(human);
        doSwim(flyfish);
    }

    public static void doSwim(Swimmer sw){
        sw.swimming();
    }
}

interface Swimmer{
    public abstract void swimming();
}

interface Flyer{
    public abstract void flying();
}

abstract class Fish implements Swimmer{
    protected String name;

    public Fish(){}
    public Fish(String name){
        this.name = name;
    }

    public String getName(){
        return name;
    }

    @Override
    public abstract void swimming();
}

class Anemonefish extends Fish{
    @Override
    public void swimming(){
        out.println("小丑鱼在游泳");
    }
}

class Human implements Swimmer{

    @Override
    public void swimming(){
        out.println("人在花式游泳");
    }
}

//类可以拥有多个接口的行为
class FlyFish implements Swimmer,Flyer{

    public void swimming(){
        out.println("飞鱼正在游泳");
    }

    public void flying(){
        out.println("飞鱼正在飞翔");
    }

}