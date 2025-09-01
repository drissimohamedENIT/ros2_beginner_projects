#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class ParamPublisher : public rclcpp::Node
{
public:
    ParamPublisher() : Node("param_publisher")
    {
        // Déclaration du paramètre "message"
        this->declare_parameter<std::string>("message", "Hello from ROS2 with params!");

        publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&ParamPublisher::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto msg = std_msgs::msg::String();
        msg.data = this->get_parameter("message").as_string();
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", msg.data.c_str());
        publisher_->publish(msg);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ParamPublisher>());
    rclcpp::shutdown();
    return 0;
}
