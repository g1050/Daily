import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import zdsd.Circle;

import javax.swing.text.html.ImageView;
import java.awt.*;
import java.util.ArrayList;
import java.util.List;

abstract class AbstractFile {
    protected String name;

    public void printName() {
        System.out.println(name);
    }

    public abstract boolean addChild(AbstractFile file);

    public abstract boolean removeChild(AbstractFile file);

    public abstract List<AbstractFile> getChildren();
}

class File extends AbstractFile {
    public File(String name) {
        this.name = name;
    }

    public boolean addChild(AbstractFile file) {
        return false;
    }

    public boolean removeChild(AbstractFile file) {
        return false;
    }

    public List<AbstractFile> getChildren() {
        return null;
    }
}

class Folder extends AbstractFile {
    private List<AbstractFile> childList;

    public Folder(String name) {
        this.name = name;
        this.childList = new ArrayList<AbstractFile>();
    }

    public boolean addChild(AbstractFile file) {
        return childList.add(file);
    }

    public boolean removeChild(AbstractFile file) {
        return childList.remove(file);
    }

    public List <AbstractFile> getChildren() { return
                childList;
    }
}

public class Fz106 {
    public static void main(String[] args) {
        // 构造一个树形的文件/目录结构
        AbstractFile rootFolder = new Folder("root");
        AbstractFile compositeFolder = new Folder("composite");
        AbstractFile windowsFolder = new Folder("windows");
        AbstractFile file = new File("TestComposite.java");
        compositeFolder.addChild(file);
        rootFolder.addChild(compositeFolder);
        rootFolder.addChild(windowsFolder);

        // 打印目录文件树
        printTree(rootFolder);
    }

    private static void printTree(AbstractFile ifile) {
        ifile.printName();
        List<AbstractFile> children = ifile.getChildren();
        if (children == null)
            return;
        for (AbstractFile file : children) {

            System.out.print(file);
        }
    }
    int a[] = new int [10];
    int len = a.length;

    Scene scene  = new Scene(new Pane());
    ;;

}