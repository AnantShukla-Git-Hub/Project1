# Project1 – CryptoCLI  
### C++ Encryption & Decryption Tool (Text, Text Files & Binary Files)

Project1 (**CryptoCLI**) is a **C++ command-line encryption and decryption tool**
built with a **learning-first mindset**.

> ⚠️ **Security Disclaimer**  
> This tool is **not intended for production-grade or secure encryption**. 😗 Because the heart of whole project is only algorithm and if someone cracked it then wo banda smart hai pahli baat and also wo decrypt kar lega raja ji ! 
> It is designed purely for **learning, experimentation, and system-level understanding**.

---

## ✨ Features

### Text Encryption & Decryption
- Supports:
  - Lowercase letters (a–z)
  - Uppercase letters (A–Z)
  - Digits (0–9)
- Symbols and emojis are **preserved** (not encrypted)
- Same key is required for encryption and decryption

---

### Text File Encryption & Decryption
- Works with text-based files
- Line-by-line processing (memory safe for large files)
- Original files are **never modified**
- Output files:
  - Encrypted file → `.enc`
  - Decrypted file → `.dec`

---

### Binary File Encryption & Decryption
- Supports binary files such as:
  - Images
  - PDFs
  - ZIP files
  - Any other binary data
- Byte-by-byte processing
- **Lossless encryption & decryption**
- File size and structure are preserved
- Original binary files are never overwritten

---

### User-Friendly CLI
- Menu-driven interface
- Clear instructions and prompts
- Meaningful success and error messages
- Output file path is explicitly displayed
- Designed to be usable even by non-programmers

---

## 🧑‍💻 How to Use

### 1️⃣ Run the Program
- Download crypto.exe from Releases or shared executable
- Run by compiling the project in your code editor like VS code.

---

### 2️⃣ Menu Options
1. Encrypt Text
2. Decrypt Text
3. Encrypt Text File
4. Decrypt Text File
5. Encrypt Binary File
6. Decrypt Binary File
7. Exit
