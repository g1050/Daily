package Six;

import static java.lang.System.*;
public class SwordMan extends Role{
   @Override
   public void fight()
   {
      out.println("挥剑攻击");
   }

   @Override
   public void showBlood(){
      out.println("血量" + this.getBlood());
   }

   public void showLevel(){
      out.println("等级" + getLevel());
   }

}

abstract  class Magician extends Role
{
   public  abstract void  showLevel();

   public void cure()
   {
      out.println("魔法治疗");
   }

   public void fight()
   {
      out.println("魔法攻击");
   }
}

