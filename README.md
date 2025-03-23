<h1>Automated Grade Management System</h1>

<h2>Description</h2>

<p>The Automated Grade Management System is a C program designed to manage student records efficiently. It allows users to:</p>

<ul>
  <li>Add student records (including name and subject grades)</li>
  <li>Validate input data (names as alphabets, grades as numbers within a valid range)</li>
  <li>Display student records in a formatted table</li>
  <li>Calculate and store the final grade along with remarks (Pass/Fail)</li>
  <li>Navigate through options via a simple menu system</li>
</ul>

<h2>Features</h2>
<ul>
  <li>Secure Login: Users must enter the correct credentials to access the system.</li>
  <li>Student Record Management: Add, store, and display student records dynamically.</li>
  <li>Grade Computation: Averages grades and assigns remarks based on performance.</li>
  <li>Dynamic Memory Allocation: Efficient memory usage with malloc() and realloc().</li>
</ul>

<h2>Technologies Used</h2>
<ul>
  <li>Language: C</li>
  <li>Libraries: stdio.h, stdlib.h, string.h, ctype.h, stdbool.h</li>
</ul>

<h2>Login Credentials</h2>
<ul>
  <li>Email: 1</li>
  <li>Password: 1</li>
</ul>

<h2>Menu Options</h2>
<p>Once logged in, you can:</p>
<ul>
  <li>A: Add student records</li>
  <li>S: Show student records</li>
  <li>B: Go back to login</li>
  <li>E: Exit the program</li>
</ul>

<h2>Code Structure</h2>

Functions
<ul>
  <li>AlphabetValidation() - Ensures names contain only alphabets.</li>
  <li>StuFullNameConcat() - Concatenates first, middle, and last names.</li>
  <li>DigitValidation() - Ensures grades are within the valid range.</li>
  <li>main() - Handles program execution, user interaction, and data management.</li>
</ul>
