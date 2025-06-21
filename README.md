# d'ASEAN Currency Exchanger 💱

## Overview
**d'ASEAN Currency Exchanger** is a console-based C++ application that allows users to convert currency between **10 ASEAN countries** using predefined exchange rates. The program includes a **2% service fee**, handles user input, and provides friendly interaction for a smooth currency exchange simulation.

---

## Features
- 🌍 Convert between 10 ASEAN currencies:
  - MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND
- 🧾 Applies a 2% service charge on each exchange
- 🗣 User-friendly console prompts
- 🔁 Looping system to allow multiple conversions
- 🔒 Input validation for supported options only

---

## Technologies Used
- C++ (Standard)
- Console I/O
- Arrays, strings, and functions
- Basic object-oriented logic using `pair<>`

---

## How to Run

### Prerequisites
- C++ compiler (like `g++`)
- Terminal or IDE that supports C++

### Steps

```bash
git clone https://github.com/FeroRone/Basic-ASEAN-Currency-Exchanger.git
cd Basic-ASEAN-Currency-Exchanger
g++ -o exchanger main.cpp
./exchanger
```
Note: Replace main.cpp with your actual filename if different.

### Sample Output
Welcome to d'ASEAN Exchange!
Before we start we need some of your detail.
Your name: Fero

Your phone number: 0123456789
We take 2% the exchange as service fee,
do you agree? (y/n): y

Select the currency you want to convert from:
1. Malaysian Ringgit (MYR)
2. Singapore Dollar (SGD)
...
From: 1
To: 2
Amount: 100
Currency MYR 100 = Currency SGD 32.34
Service charge: 2.00 MYR

Do you want to exchange more? (y/n)
answer: n
Thank you for exchanging with us!
See you later Fero!

---
### File Structure
Basic-ASEAN-Currency-Exchanger/
├── main.cpp      # Main C++ source file with exchange logic

└── README.md     # Project documentation (this file)
---
### Author
FeroRone
GitHub: https://github.com/FeroRone
