import java.util.Scanner;
/* 你提交的代码将被嵌入到这里 */
class Stock{
    Stock(String symbol,String name){
        this.symbol = symbol;
        this.name = name;
    }

    String symbol;
    String name;
    double previousClosingPrice;
    double currentPrice;

    double changePercent(){
        return (currentPrice - previousClosingPrice) / previousClosingPrice;
    }

}

public class stoc {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    String symbol1=input.next();
    String name1=input.next();    
    Stock stock = new Stock(symbol1, name1);

    stock.previousClosingPrice = input.nextDouble();

    // Input current price
    stock.currentPrice = input.nextDouble();

    // Display stock info
    System.out.println(stock.name+"price changed: " + stock.changePercent() * 100 + "%");
    input.close();
  }
}

