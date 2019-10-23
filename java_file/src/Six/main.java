package Six;

import static java.lang.System.*;
public class main {
    public static void main(String []args)
    {
        SwordMan s = new SwordMan();
        s.setName("咿呀");
        s.setBlood(100);
        s.setLevel(5);

        Magician m = new Magician();
        m.setName("啦啦啦");
        m.setBlood(95);
        m.setLevel(4);

        s.fight();
        out.println("名字:" + s.getName() + "血量:" + s.getBlood() + "等级" + s.getLevel());


    }
}
