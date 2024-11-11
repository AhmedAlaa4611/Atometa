# Atometa: DFA Machine Simulator

## Overview

Atometa is a Deterministic Finite Automaton (DFA) simulator developed as part of the Automata & Language Theory course (CS342). The project accepts user-defined DFA configurations and input strings, simulating state transitions and outputting whether the input string is "accepted" or "rejected."

## Project Requirements

- **Course**: Automata & Language Theory (CS342)
- **Objective**: Create a generic DFA simulator that processes any given DFA machine and input string to determine acceptance.
- **Programming Language**: The project's source code was written in C++. For the purpose of web development and data science, the codebase was refactored and translated into JavaScript and Python equivalents.
- **Features**:
  - Input DFA configurations.
  - Simulate transitions based on input string.
  - Return an "accept" or "reject" based on the DFA's final states.

## Project Structure

- **Title Page**: Contains university and faculty logos, project name, and team members.
- **Introduction**: Discusses the basics of automata and DFA machines.
- **Machine Design**: Defines the formal DFA structure with example transitions.
- **Machine Implementation**: Explains how the code is structured and runs examples.
- **Appendix**: Contains the project code.
- **References**: Lists references used in the project.

## Editor

This project was developed using **Visual Studio Code** for its capabilities.

## How It Works

### DFA Configuration

1. **States**: Enter the number of states and define each state with:
   - State name.
   - Transition symbols (arrows) and destination states for each input symbol.

2. **Final States**: Specify the final (accepting) states in the DFA.

3. **Input String**: Input the string to evaluate.

### Code Structure

The main components in the C++ code are:

1. **State Class**:
   - Represents each DFA state with transitions based on input symbols.
   - Uses private struct `arrow` to define transitions.
   - `set_Attributes` function for state setup and transition definition.
   - `Regular_Function` to determine the next state based on input.

2. **Main Function**:
   - Accepts user input for states, final states, and the input string.
   - Iterates through the input string, using state transitions to track the DFA's movement.
   - Determines if the DFA ends in an accepting state.

### Running the Code

To run the cpp version:
1. **Compile the code**:
   ```sh
   g++ atometa.cpp -o atometa.exe
   ```

2. **Run the program**:
   ```sh
   ./atometa.exe
   ```

### Project Report
The full project report includes detailed documentation and run samples with screenshots, located in the docs folder.

### License
This project is for educational purposes as part of the CS342 course.

### References
- Course material from Automata & Language Theory, CS342.
- Textbooks and resources on DFA and automata theory.
