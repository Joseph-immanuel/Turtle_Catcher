# 🐢 ROS2 Turtle Pursuit Simulation  

🚀 **A ROS2-powered autonomous pursuit system!** This project showcases **robotics fundamentals** using `turtlesim`, where a main turtle (`turtle1`) intelligently chases and removes dynamically spawned turtles.  

## 🌟 What This Project Demonstrates  
✅ **Autonomous Navigation:** `turtle1` dynamically selects and moves toward a target.  
✅ **PD Controller:** Ensures **smooth & stable** movement without overshooting.  
✅ **Custom Message & Service:** Uses a **publisher-subscriber system** to track turtles and a **custom service** to remove them.  
✅ **Multi-Robot Handling:** Can dynamically spawn and track multiple turtles in real time.  
✅ **ROS2 Launch Integration:** Automates the entire process with **parameterized launch files**.  

## 🎯 Why This Project Matters  
This project is an **excellent demonstration of ROS2 basics**, covering:  
🔹 **Topics & Messages** → Communicating positions in real-time.  
🔹 **Services** → Handling dynamic object removal.  
🔹 **Launch Files** → Automating multi-node execution.  
🔹 **Control Systems** → Implementing a **PD controller** for movement optimization.  

## 📸 TURTLE IN ACTION !
**LAUNCH** -> ros2 launch pursuit_launch pursuit_launch.launch.xml 

![Screenshot from 2025-03-13 21-13-02](https://github.com/user-attachments/assets/791d8aad-4a3c-47df-b4e4-5c50d99ed3e0)
