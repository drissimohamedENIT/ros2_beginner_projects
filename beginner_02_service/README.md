## 2️⃣ `beginner_02_service` – Service C++ + Client Python

```markdown
# Beginner 02 - AddTwoInts Service

## 🎯 Objectif
Apprendre à créer un **service ROS2** :  
- Serveur **C++** qui additionne 2 entiers.  
- Client **Python** qui envoie la requête et reçoit la réponse.

## 📂 Structure du package


beginner_02_service/
├── CMakeLists.txt
├── package.xml
├── launch/
│ └── run_all.launch.py
├── scripts/
│ └── add_two_ints_client.py
└── src/
└── add_two_ints_server.cpp


## ⚙️ Étapes d’installation
```bash
colcon build --packages-select beginner_02_service
source install/setup.bash

▶️ Lancer le projet
ros2 launch beginner_02_service run_all.launch.py

📝 Explication

add_two_ints_server.cpp : implémente le service /add_two_ints en C++.

add_two_ints_client.py : appelle le service avec 2 entiers et affiche le résultat.

Exemple
[service_server]: Service ready: /add_two_ints
[service_server]: Received: 7 + 3 = 10
[add_two_ints_client]: Result: 10

🔗 Concepts ROS2 couverts

Service / Client

Communication C++ ↔ Python

Launch files ROS2

Appels de service manuels (ros2 service call)