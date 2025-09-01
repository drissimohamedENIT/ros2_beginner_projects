#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class AddTwoIntsServer : public rclcpp::Node {
public:
  AddTwoIntsServer() : Node("add_two_ints_server") {
    service_ = this->create_service<example_interfaces::srv::AddTwoInts>(
      "add_two_ints",
      std::bind(&AddTwoIntsServer::handle_request, this, _1, _2)
    );
    RCLCPP_INFO(this->get_logger(), "Service ready: /add_two_ints");
  }

private:
  void handle_request(
    const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> req,
    std::shared_ptr<example_interfaces::srv::AddTwoInts::Response> res)
  {
    res->sum = req->a + req->b;
    RCLCPP_INFO(this->get_logger(), "Received: %ld + %ld = %ld",
                req->a, req->b, res->sum);
  }

  rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AddTwoIntsServer>());
  rclcpp::shutdown();
  return 0;
}
