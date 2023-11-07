#include<iostream>
#include "item.h"
#include "order.h"

int main() {
  Item item1{"Monitor", 1, 5000.0};
  Item item2{"Mouse", 1, 150.0};
  Item item3{"HDMI cable", 2, 5.0};
  Order an_order{};

  an_order.AddItem(item1);
  an_order.AddItem(item2);
  an_order.AddItem(item3);

  an_order.PrintOrder();

  std::cout<< "The total price is {" << an_order.TotalPrice() << "}" << std::endl;
  try {
    an_order.Pay(new DebitPaymentProcessor("09878",new SMS_Authenticator()));
  } catch (int no) {
    std::cout << "Error" << std::endl;
  }

  try {
    an_order.Pay(new CreditPaymentProcessor("09878",new SMS_Authenticator()));
  } catch (int no) {
   std::cout << "Error" << std::endl;
  }
  try {
    an_order.Pay(new PaypalPaymentProcessor("hassan@email.com",new No_Robot_Authenticator()));
  } catch (int no) {
   std::cout << "Error" << std::endl;
  }
  return 0;
}