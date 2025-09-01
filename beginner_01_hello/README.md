1️⃣ beginner_01_hello – Publisher Python + Subscriber C++
# Beginner 01 - Hello ROS2

## 🎯 Objectif
Premier projet ROS2 pour débuter :  
- Publisher **Python** qui envoie "Hello ROS2!" sur un topic.  
- Subscriber **C++** qui reçoit le message et l’affiche dans le terminal.

## 📂 Structure du package


beginner_01_hello/
├── CMakeLists.txt
├── package.xml
├── launch/
│ └── run_all.launch.py
├── src/
│ └── my_node.cpp
└── scripts/
└── publisher.py


## ⚙️ Étapes d’installation
Depuis la racine du workspace :
```bash
colcon build --packages-select beginner_01_hello
source install/setup.bash

▶️ Lancer le projet
ros2 launch beginner_01_hello run_all.launch.py

📝 Explication

publisher.py : envoie des messages "Hello ROS2!" toutes les secondes.

my_node.cpp : Subscriber C++ qui écoute le topic et affiche le message.

✅ Résultat attendu
[my_node]: I heard: 'Hello ROS2!'
[python3]: Publishing: Hello ROS2!

🔗 Concepts ROS2 couverts

Publisher / Subscriber

C++ et Python dans le même package

Launch files ROS2

workspace colcon
