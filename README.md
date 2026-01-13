# Password Strength Checker (C | No Libraries)

A low-level password strength checker written in **pure C** without using any standard libraries.
This project demonstrates manual string handling, ASCII-based character classification,
and defensive conditional logic.

> Built as a **student internship portfolio project** to showcase C fundamentals.

---

##  Features

- Manual password length calculation
- ASCII-based character analysis (no `<ctype.h>`)
- Detects uppercase letters, lowercase letters, and digits
- Deterministic strength ev


##  Password Strength Criteria

A password is considered **STRONG** if it meets all of the following:

| Requirement | Condition |
|------------|-----------|
| Length | ≥ 8 characters |
| Uppercase | ≥ 3 characters |
| Lowercase | ≥ 3 characters |
| Numbers | ≥ 3 characters |


## Skills Demonstrated

- Low-level string traversal

- ASCII-based data validation

- Loop and conditional control flow

- Memory-safe iteration

- Clean project organization


## Future Improvements

- Special character detection

- Strength scoring (Weak / Medium / Strong)

- Modular design using functions


##  Usage

### 1. Edit the Password
Open `src/password_checker.c` and modify the password string:

```c
char password[] = "YourPasswordHere";
```
### 2. Compile the Program
Use a C compiler such as gcc:

```c
gcc password_checker.c -o password_checker
```

### 3. Run the Program
```bash
password_checker
```

### 4. Check the Result
The program returns an exit code indicating password strength:

- 1 → Strong password

- 0 → Weak password

On Windows, view the exit code using:
```
echo %ERRORLEVEL%
```
  
