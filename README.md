# Project

This project is dedicated to reverse engineering, analyzing, adapting, and porting Windows PC games to Android devices running ARM or ARM64 architectures.
The development process must be conducted entirely from a physical Android device, without relying on a desktop computer.
The ultimate objective is to transform existing Windows PC games into functional Android applications while preserving as much of the original game's behavior, functionality, performance, and visual fidelity as technically possible.
This is not a project about creating a new game inspired by an existing one. It is a compatibility and porting project involving the original game's executable, code, assets, dependencies, and runtime behavior.

# References

https://github.com/sp00nznet/pcrecomp
https://github.com/victorgbd/NFSMW-Recompiled-Mobile
https://github.com/codepdbh/nfsu2-recompiled
https://github.com/RanggaCasper/MostWanted-Android

Your responsibilities include:

1. Executable reconnaissance and binary analysis.
2. Static reverse engineering.
3. Dynamic analysis when supported by the available Android environment.
4. Function and class interpretation.
5. Control-flow and data-flow analysis.
6. Identification of game engines and middleware.
7. Windows API dependency analysis.
8. CPU architecture compatibility analysis.
9. Graphics API compatibility analysis.
10. Audio subsystem analysis.
11. Input subsystem analysis.
12. Filesystem and resource management analysis.
13. Runtime and memory management analysis.
14. Native Android integration.
15. Compatibility-layer evaluation.
16. Build-system configuration.
17. Performance optimization.
18. Crash investigation.
19. Incremental implementation and validation.

Imodisa — Primary Reverse Engineering Environment, imodisa is the primary application for inspecting and analyzing Windows game executables.

Official application:
https://play.google.com/store/apps/details?id=com.rusjj.imodisa

Use imodisa as the main source of reverse engineering information.
Its available capabilities include:

Disassembly

- Assembly instruction inspection.
- Instruction addresses.
- Opcode bytes.
- Register usage.
- Memory references.
- Branches and jump destinations.

Graph

- Function control-flow visualization.
- Branch relationships.
- Conditional execution paths.
- Basic-block relationships.

Hex

- Raw binary inspection.
- Memory and file structure investigation.
- Byte-level validation.

Functions

- Function enumeration.
- Function addresses.
- Function relationships.
- Function-level inspection.

Strings

- Text extraction.
- String references.
- Identification of error messages, resource paths, API names, and internal identifiers.

Imports

- External library dependencies.
- Imported Windows APIs.
- Third-party library functions.
- Potential platform incompatibilities.

Exports

- Exported symbols.
- Public entry points.
- Externally accessible functions.

Names

- Symbols and identified names.
- Internal naming information.

Structures

- Recovered data structures.
- Member definitions.
- Type information.

Segments

- Executable sections and memory segments.
- Code and data organization.

Favorites

- Bookmarked functions and analysis targets.

Patches

- Binary modification and patch inspection.

Results

- Analysis results produced by the application.

Information

- Executable metadata and general binary information.

Use these capabilities according to the investigation objective. Do not inspect every tab without a reason.
Imodisa Export Capabilities, supports exporting:

- Pseudocode in ".c".
- Assembly with addresses in ".s".
- Assembly without addresses in ".s".
- Individual functions.
- Selected functions.
- Classes.
- Selected classes.
- Multiple functions in one file.
- Structures and enums.
- Global variables used by selected functions.

For relevant exports, preserve:

- Function addresses.
- Structures.
- Enums.
- Global variable declarations.
- Function signatures.
- Related type declarations.

The preferred format for understanding game logic is pseudocode ".c", accompanied by the required declarations.
Assembly should be requested when pseudocode is insufficient to establish:

- Register behavior.
- Calling conventions.
- Stack layout.
- Pointer arithmetic.
- Low-level memory access.
- Instruction-specific behavior.
- Compiler-generated transformations.
- Unusual control flow.

Do not request assembly for every function by default.
Imodisa AI Restrictions, Do not use the built-in AI assistant, Do not ask the user to configure:

- Anthropic.
- API providers.
- API keys.
- External AI endpoints.
- AI model selection.
- External AI integration.

Xed-Editor — Linux Auxiliary Environment
Xed-Editor provides an Ubuntu ARM64 environment through its terminal.

Repository:
https://github.com/Xed-Editor/Xed-Editor

Prompt:
"root@localhost:~ #"

Use Xed-Editor for:

- Linux command execution.
- Python scripts.
- Binary processing.
- File inspection.
- Auxiliary reverse engineering.
- Data transformation.
- Installing Linux-compatible dependencies.
- Testing utilities.
- Lightweight development tasks.

Prefer ARM64-compatible packages and tools.
Do not assume that Ubuntu ARM64 provides the same functionality as a standard desktop installation.

ACS IDE — Android Development Environment
ACS IDE is the auxiliary environment for Android application development and native compilation.

Repository:
https://github.com/AndroidCSIDE/ACSIDE

Prompt:
"~ $"

"ls"

[AndroidCSProjects]  [aapt]  [android-sdk]  [assets]

"cd /sdcard/AndroidCSProjects/"

Available development components include:

- JDK 21.
- Android SDK.
- Android Build Tools.
- Android NDK.
- CMake.
- Android Platform Tools.
- Bash Language Server.
- Clang Language Server.
- Python Language Server.

Use ACS IDE for:

- Android application development.
- Native C/C++ compilation.
- JNI integration.
- NDK configuration.
- CMake projects.
- APK generation.
- Android-specific debugging and validation.

Do not confuse the Linux environment provided by Xed-Editor with the Android SDK and NDK environment provided by ACS IDE.