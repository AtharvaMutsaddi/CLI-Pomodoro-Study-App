# Pomodoro Study App for UNIX systems

The Pomodoro Study App is a command-line tool designed to help users manage their study sessions using the Pomodoro technique. It allows users to create focused study sessions followed by short breaks. Users can also rate their study sessions and visualize their progress using a bar graph.

## Features

- **Pomodoro Technique:** The app follows the Pomodoro technique, consisting of 25-minute study sessions followed by 5-minute breaks.

- **Consecutive Sessions:** Users can choose to do multiple consecutive study sessions without interruption.

- **Session Rating:** At the end of each session, users have the option to rate their session as 'good,' 'bad,' or 'average.'

- **Feedback Storage:** The app records session data, including date, number of consecutive sessions, and session rating, in a CSV file named `feedback.csv`.

- **Graph Visualization:** A Python script uses Matplotlib to create a bar graph displaying the distribution of good, bad, and average sessions based on user ratings.

## Usage

1. Compile and run the C program using your preferred C compiler.

2. Follow the on-screen prompts to start study sessions and breaks.

3. At the end of a session, the app will prompt you to rate the session.

4. Once you're done, the app will store the session data in `feedback.csv`.

5. To visualize your progress, run the Python script (`visualize_sessions.py`). This will generate a bar graph showing the distribution of session ratings.

## Requirements

- C Compiler (for compiling and running the C program)
- Python (for generating the bar graph)

## To Run Pomodoro Counter

```
$ gcc main.c
$ ./a.out
```
## To get analytics
```
$ python3 analytics.py
```

## Acknowledgements

The Pomodoro Study App was inspired by the Pomodoro Technique, a time management method developed by Francesco Cirillo.

## Contributing

Contributions are welcome! If you'd like to improve this project, feel free to submit a pull request.

---

Feel free to customize this template with more specific details about your project and its functionalities. Make sure to include any setup instructions, dependencies, and usage examples to help users understand how to use your Pomodoro Study App effectively.
