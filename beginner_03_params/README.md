# Beginner 03 - ROS2 Parameters

## 🎯 Objectif
Ce projet montre comment utiliser les **paramètres** dans ROS2 pour configurer un nœud au lieu de coder les valeurs en dur.

## 📂 Structure du package
beginner_03_params/
├── CMakeLists.txt
├── package.xml
├── launch/
│ └── param_publisher.launch.py
├── src/
│ └── param_publisher.cpp
└── params/
└── default_params.yaml


## ⚙️ Étapes d’installation
Depuis la racine du workspace :
```bash
colcon build --packages-select beginner_03_params
source install/setup.bash

## ▶️ Lancer le projet
ros2 launch beginner_03_params param_publisher.launch.py

## 📝 Explication

param_publisher.cpp : un publisher en C++ qui lit ses paramètres (topic_name, publish_rate, message_content) depuis un fichier YAML.

default_params.yaml : fichier où l’on définit les valeurs des paramètres.

param_publisher.launch.py : lance le node et charge automatiquement le fichier de paramètres.

## ✅ Résultat attendu

Le publisher publie sur le topic configuré dans params/default_params.yaml :

[INFO] [minimal_param_publisher]: Publishing: Hello from params!

## 🔗 Concepts ROS2 couverts

Déclaration et lecture de paramètres

Chargement de paramètres via YAML

Lancement avec ROS2 launch

