# ROS2 Beginner Projects 🚀

Ce dépôt contient une série de mini-projets pour apprendre **ROS2 (Jazzy)** étape par étape.

## 📦 beginner_01_hello
- **Publisher (Python)** qui publie "Hello ROS2!"
- **Subscriber (C++)** qui affiche le message reçu

### Lancer le projet
```bash
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash
ros2 launch beginner_01_hello run_all.launch.py
