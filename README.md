# Pintos Project #1: Threads

In this project, you'll get hands-on experience by implementing core threading features in a real operating system.  
It’s a great opportunity to apply the theoretical concepts we’ve covered in class to a working OS kernel.

Please refer to the Printos Project #1 lecture slides for detailed instructions and guidelines.

---

## ✅ Recommended Implementation Order

We recommend implementing the features in the following order:

1. **Alarm Clock**
2. **Priority Scheduling**
3. **Advanced Scheduler (4.4BSD MLFQ)**

---

## 🛠️ Build Instructions

To compile the project, run the following commands:

```sh
cd threads
make
```

Make sure there are no errors before proceeding to testing.

---

## 🧪 Running Tests

We provide scripts to simplify the testing process.

### Run all or individual test groups using `test.sh`:

```sh
bash test.sh alarm      # Run all alarm clock tests
bash test.sh priority   # Run all priority scheduler tests
bash test.sh mlfqs      # Run all MLFQS tests
bash test.sh all        # Run all tests
```

### Run a specific test case using `test_each.sh`:

```sh
bash test_each.sh alarm-single # Run alarm-single test case
```

### Check your test scores using `grade.sh`:

```sh
bash grade.sh
```

Example output:

```
TOTAL TESTING SCORE: 0.0%

SUMMARY BY TEST SET

Test Set                                 Pts Max  % Ttl  % Max
---------------------------------------- ------- ------- -------
tests/threads/Rubric.alarm               0/  30   0.0% / 30.0%
tests/threads/Rubric.priority            0/  30   0.0% / 30.0%
tests/threads/Rubric.mlfqs               0/  40   0.0% / 40.0%
---------------------------------------- ------- ------- -------
Total                                            0.0% /100.0%
```

---

## 📤 Submission

### Submit using the provided script:

```sh
bash submit.sh
```

This will automatically commit and push your code to the designated GitHub repository.

### Or submit manually via Git:

```sh
git add ...
git commit -m "Implemented alarm clock feature"
git push
```

After submission, please make sure your code **runs correctly via GitHub Actions**.  
For more details on GitHub Actions, refer to the instructions from Project #0.

---

Have fun exploring OS internals — and happy hacking!

