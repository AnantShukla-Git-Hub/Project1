# Project1 – CryptoCLI (C++ Encryption & Decryption Tool)

Project1 (CryptoCLI) is a **C++ based command-line encryption and decryption tool**
built with a **learning-first approach**, focusing on real-world project structure,
file handling, debugging, and clean program flow.

> Note: This project is **not intended for strong cryptographic security**.  
> Its purpose is **learning, experimentation, and system-level understanding**.

---

## ✨ Features

###  Text Encryption & Decryption
- Supports:
  - Lowercase letters
  - Uppercase letters
  - Digits
- Symbols and emojis are preserved (not modified)

---

###  File Encryption & Decryption
- Encrypt text-based files.
- Decrypt encrypted files back to readable text
- Line-by-line processing (memory-safe for large files)
- Original files are **never modified**

---

### 🔹 User-Friendly CLI
- Menu-driven interface
- Clear success and error messages
- Output file path is explicitly shown to the user
- Designed to work even for non-programmer users

---

## 🧑‍💻 How to Use (For Users)

### 1️⃣ Run the Program
- Download `crypto.exe` (from Releases or shared executable)
- Double-click the file
- 1. Encrypt Text
  2. Decrypt Text
  3. Encrypt File
  4. Decrypt File
  5. Exit

---

## Important Notes
1.Always use the same key for encryption and decryption.
2.Original files are never overwritten.
3.Output files:
  Encrypted → .enc
  Decrypted → .dec
3.This tool is designed for text-based files only.

---

## Limitations
1.Not suitable for secure or production-grade encryption
2.Binary files (images, PDFs, videos) are not supported
3.Emojis are preserved but not encrypted
4.CLI-based (no GUI)
