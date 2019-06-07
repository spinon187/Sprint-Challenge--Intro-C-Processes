**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Running - The process is running.
Waiting - The process is ready to run but needs to be told to continue.
Stopped - The process was stopped.
Zombie - The process is done running but it hasn't been cleared out yet.

**2. What is a zombie process?**

A process that is done running but hasn't been cleared out yet.

**3. How does a zombie process get created? How does one get destroyed?**

Child processes don't terminate themselves when they're done so their parents are stuck waiting for the go-ahead. They're destroyed by signalling the parent that they're done and being removed from the process table.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

They're faster/more efficient than languages translated at run time.