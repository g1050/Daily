package Six;

import java.util.logging.Level;

public abstract class Role {
    private String name;
    private int Level;
    private int blood;

    public void fight(){}

    public void showBlood(){}

    public abstract void showLevel();

    public void setBlood(int blood)
    {
        this.blood = blood;
    }

    public int getBlood()
    {
        return blood;
    }

    public int getLevel()
    {
        return Level;
    }

    public void setLevel(int Level)
    {
        this.Level = Level;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public static void main(String []args)
    {

    }
}
