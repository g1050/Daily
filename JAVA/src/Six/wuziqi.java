package Six;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.FileReader;
import static java.lang.System.*;
public class wuziqi {
    private static int boardsize = 15;
    String board[][] ;
    public void initBoard()
    {
        //初始化期盼数组
        board = new String[boardsize][boardsize];
        for(int i = 0;i<boardsize;i++){
            for(int j = 0;j<boardsize;j++){
                board[i][j] = "□";
            }
        }
    }

    public void printBoard(){
        for(int i = 0;i<boardsize;i++){
            for(int j = 0;j<boardsize;j++){
               out.print(board[i][j]);
            }
            out.println();
        }
    }


    public static void main(String []args) throws IOException {
        wuziqi gb = new wuziqi();
        gb.initBoard();
        gb.printBoard();

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String inputStr = null;

        out.println("请输入坐标:");
        while((inputStr = br.readLine()) != null){
            out.println("请输入坐标:");
            String []postStrArr = inputStr.split(",");

            int xpos = Integer.parseInt(postStrArr[0]);
            int ypos = Integer.parseInt(postStrArr[1]);

            gb.board[xpos-1][ypos-1] = "☆";
            gb.printBoard();
            out.println("请输入坐标:");
        }

        out.println("请输入坐标:");
    }


}
