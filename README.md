# MIAerConn

## Description

The application is a Windows Service that runs in the background and provides a socket interface for the MIAer Spectrum Monitoring Stations through the manufactures specific API.

The API is not included in this repository and must be provided by the manufacturer, being dependent on the manufacturer's SDK and licensing.

## Installation

The application is installed as a Windows Service and must be installed with administrative privileges.

The manufacturer's API must be installed in the system before running the service.

The installation is done by running the following command in the command prompt with administrative privileges:

```cmd
sc create MIAerConn binPath= "C:\path\to\MIAerConn.exe"
```

The service may be started and stopped using the following commands:

```cmd
sc start MIAerConn
sc stop MIAerConn
```

## Dev Environment

This project uses CMake as the build system and VSCode as the IDE.

Compilation is done using the MinGW compiler installed with MSYS2.

The environment configuration follows the steps described in https://github.com/HO-COOH/CPPDevOnWindows?tab=readme-ov-file


