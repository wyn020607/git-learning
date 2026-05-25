# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Build

This is a Visual Studio 2022 C++ console application (Win32, v143 toolset).

```bash
# Build from Developer Command Prompt (or PowerShell with VS tools):
msbuild "git learning.sln" /p:Configuration=Debug /p:Platform=x64

# Build from a regular shell using the VS Developer PowerShell location:
& "C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe" "git learning.sln" /p:Configuration=Debug /p:Platform=x64
```

Or open `git learning.sln` in Visual Studio and build with Ctrl+Shift+B. The executable is produced as a console subsystem application.

## Project Structure

- `.sln` — Visual Studio solution file
- `.vcxproj` — MSBuild project; add `.cpp`/`.h` files here to include them in the build
- `.vcxproj.filters` — defines the virtual folders (Source Files / Header Files / Resource Files) shown in the VS Solution Explorer

The project currently has no source files. Standard VS filters are set up for C++ sources (`*.cpp`, `*.c`), headers (`*.h`, `*.hpp`), and resources.
