package Six;

import static java.lang.System.*;
public class SwordMan extends Role{
   public void fight()
   {
      out.println("挥剑攻击");
   }
}

class Magician extends Role
{
   public void cure()
   {
      out.println("魔法治疗");
   }

   public void fight()
   {
      out.println("魔法攻击");
   }
}

