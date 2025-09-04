# ObstacleAssault

# 🕹️ Obstacle Assault

**Obstacle Assault** is a small Unreal Engine project built with **C++ and Visual Studio**.  
It’s based on a tutorial from [GameDev.tv](https://www.gamedev.tv/), adapted and extended as a learning project for working with **Unreal Engine, Git LFS, and C++ gameplay programming**.

---

## 📖 About the Project

Obstacle Assault is a beginner-friendly Unreal Engine game where players navigate an environment filled with moving platforms and hazards.  
It serves as a foundation for learning:

- Unreal Engine 5 project structure  
- C++ gameplay scripting  
- Using Visual Studio for Unreal development  
- Git & Git LFS for source control on large game projects  

---

## 📂 Repository Structure

```plaintext
ObstacleAssault/
├── Config/           # Project configuration files
├── Content/          # Game assets (meshes, textures, levels, etc.)
├── Source/           # C++ source code
├── .gitattributes    # LFS rules for binary assets
├── .gitignore        # Ignore build/intermediate files
└── ObstacleAssault.uproject
```

> ⚠️ `Binaries/`, `Intermediate/`, `DerivedDataCache/`, `.vs/`, and `Saved/` are intentionally excluded from source control.

---

## 🚀 How to Build and Run

### 1) Clone the Repository
Make sure you have [Git LFS](https://git-lfs.com) installed first.

```bash
git clone https://github.com/<your-username>/ObstacleAssault.git
cd ObstacleAssault
git lfs pull
```

### 2) Generate Visual Studio Project Files
- Right-click `ObstacleAssault.uproject` → **Generate Visual Studio project files**,  
  **or**
- Run UnrealBuildTool from the command line.

```bash
# Example UBT command (adjust your path/UE version as needed)
"<UE_5.x path>/Engine/Binaries/DotNET/UnrealBuildTool/UnrealBuildTool.exe" -projectfiles -project="ObstacleAssault.uproject" -game -engine
```

This creates:
- `ObstacleAssault.sln`  
- `.vcxproj` files

### 3) Open in Visual Studio
- Open `ObstacleAssault.sln` in Visual Studio  
- Set configuration: **Development Editor**  
- Build: **Build → Build Solution** (or `Ctrl+Shift+B`)

### 4) Run in Unreal Editor
- Double-click `ObstacleAssault.uproject` to open in Unreal Editor  
- Press **Play** (`Alt+P`) to run in-editor

---

## 🎮 Gameplay

- Navigate through the obstacle course  
- Avoid moving hazards and gaps  
- Reach the end platform to complete the level  

---

## 📦 Requirements

- [Unreal Engine 5](https://store.epicgames.com/en-US/download)  
- Visual Studio 2019/2022 with **Desktop Development with C++** workload  
- [Git LFS](https://git-lfs.com) (for pulling assets)

---

## 🙌 Acknowledgments

- [GameDev.tv](https://www.gamedev.tv/) — tutorial inspiration and foundational content  
- [Unreal Engine](https://www.unrealengine.com/) community — documentation and best practices

---

## 📝 License

This project is for **educational purposes**.  
You’re free to fork, experiment, and extend it, but please credit [GameDev.tv](https://www.gamedev.tv/) as the original tutorial source.
