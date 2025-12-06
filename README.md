# Obstacle Assault

A 3D obstacle course game developed in Unreal Engine using C++, created as part of the [GameDev.tv Unreal Engine C++ Developer Course](https://www.gamedev.tv/).

## About This Project

This project is a learning exercise from the GameDev.tv Unreal Engine C++ course. **This is not original work** - it follows the course curriculum and is intended for educational purposes only. All credit for the course design and content goes to GameDev.tv and the course instructors.

## Description

Obstacle Assault is a first-person obstacle course game where players must navigate through moving platforms and rotating obstacles to reach the end goal. The game features dynamic obstacles with configurable movement patterns, demonstrating fundamental Unreal Engine C++ gameplay mechanics.

## Learning Objectives

This project covers the following key concepts:

### Unreal Engine C++ Fundamentals
- Setting up Unreal Engine projects with C++ in Visual Studio
- Understanding the relationship between C++ classes and Blueprint
- Working with Unreal's reflection system (UPROPERTY, UFUNCTION, etc.)
- Hot reloading and iterative development workflow

### Core Gameplay Programming
- Creating custom Actor components
- Implementing movement using `FMath` functions (sine waves, interpolation)
- Working with `AActor` lifecycle methods (BeginPlay, Tick)
- Handling delta time for frame-independent movement

### Movement and Animation
- Programming moving platforms with configurable speed and distance
- Creating rotating obstacles using rotators
- Implementing smooth, predictable obstacle patterns
- Understanding coordinate systems and transforms in 3D space

### Unreal Engine Architecture
- Component-based architecture
- Exposing variables to the editor with UPROPERTY macros
- Understanding the Actor-Component relationship
- Using Blueprint and C++ together effectively

### Version Control
- Setting up Git with Visual Studio for Unreal Engine projects
- Managing large binary files in game development
- Proper .gitignore configuration for Unreal projects

## Technologies Used

- **Engine**: Unreal Engine 5.x
- **Language**: C++
- **IDE**: Visual Studio 2022
- **Version Control**: Git

## Project Structure

```
ObstacleAssault/
├── Source/               # C++ source files
│   └── ObstacleAssault/
│       ├── MovingPlatform.cpp/h
│       └── RotatingObstacle.cpp/h
├── Content/              # Game assets and blueprints
├── Config/               # Project configuration files
└── ObstacleAssault.uproject
```

## Key Features

- Moving platforms with configurable movement distance and speed
- Rotating obstacles with adjustable rotation speeds
- First-person player controller
- Physics-based interactions
- Modular, reusable C++ components

## What I Learned

Through this project, I gained hands-on experience with:

- Writing gameplay code in C++ for Unreal Engine
- Understanding Unreal's actor and component architecture
- Debugging C++ code in Visual Studio with Unreal Engine
- Exposing C++ properties to Blueprint for designer-friendly workflows
- Mathematical concepts for game movement (trigonometry, interpolation)
- Best practices for organizing Unreal Engine C++ projects

## Setup Instructions

1. Clone this repository
2. Right-click the `.uproject` file and select "Generate Visual Studio project files"
3. Open the `.sln` file in Visual Studio
4. Build the project (Development Editor configuration)
5. Launch the project from Visual Studio or by opening the `.uproject` file

## Requirements

- Unreal Engine 5.x (specify your version)
- Visual Studio 2022 with C++ game development workload
- Windows 10/11 (or appropriate OS for your development)

## Course Information

This project is part of the **Unreal Engine C++ Developer** course by GameDev.tv. If you're interested in learning Unreal Engine C++ development, check out their courses at [www.gamedev.tv](https://www.gamedev.tv/).

## License

This project is for educational purposes only. Course content and structure are property of GameDev.tv.

## Acknowledgments

- GameDev.tv and course instructors for the excellent tutorial content
- Epic Games for Unreal Engine
- The Unreal Engine community for documentation and support
