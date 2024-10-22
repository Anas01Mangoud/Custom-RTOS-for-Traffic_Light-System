# Custom-RTOS-for-Traffic-Light-System
Developed a simple RTOS using AVR microcontroller and C, and built a traffic light system controlled by the RTOS


Overview

This project involves the development of a simple Real-Time Operating System (RTOS) using an AVR microcontroller and C programming language. The primary objective was to create a traffic light system controlled by the RTOS, demonstrating fundamental concepts of task management and scheduling.

Features

Task Management: The RTOS supports multiple tasks with priorities, allowing the traffic light system to operate seamlessly.
Time Management: Implemented timing functionalities to manage the traffic light sequences.
Modularity: The system is designed in a modular fashion, making it easy to extend or modify the traffic light behaviors.
AVR Microcontroller: Utilizes an AVR microcontroller for hardware interfacing and control.
Components

AVR Microcontroller: The main hardware component running the RTOS.
Traffic Light: The physical traffic light system that includes red, yellow, and green lights.
C Code: The source code for the RTOS and traffic light control logic.
System Design
The traffic light system is designed with the following tasks:

Red Light Task: Activates the red light for a specified duration.
Green Light Task: Activates the green light for a specified duration.
Yellow Light Task: Activates the yellow light for a brief duration to signal transitions.
Timer Task: Manages the timing for each traffic light state and switches between tasks.
Task Scheduling
The RTOS uses a round-robin scheduling algorithm to ensure that each task receives its turn to execute based on its priority and timing requirements.

Getting Started


