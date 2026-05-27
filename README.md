# 🛒 CWU Store - Online Ordering System

A robust, interactive command-line e-commerce cart management and invoice billing system written in modern C. It simulates an end-to-end shopping experience—from exploring a multi-category product catalog to managing a shopping cart, applying promotional codes, selecting payment options, and generating a detailed, tax-compliant invoice.

---

## ✨ Features

- 📂 **Multi-Category Catalog**: Browse through 5 product categories:
  - **Food Items** (Instant Noodles, Dal, Rice, Biscuits, Chips, Momos, etc.)
  - **Electronics** (Night Lamp, Hair Dryer, Blender, Television, Laptop, Gaming Station, etc.)
  - **Makeup** (Blush, Lipstick, Foundation, Highlighter, Eyeliner)
  - **Toiletries** (Brush, Bar Soap, Detergent, Liquid Soap, Toothpaste, etc.)
  - **Stationary** (Pens, Notebooks, Geometry Box, scale, etc.)
- 🧮 **Dynamic Tax Engine**: Automatically calculates category-specific tax percentages:
  - **5% Tax**: Food & Toiletries
  - **12% Tax**: Makeup & Stationary
  - **18% Tax**: Electronics
- 🛒 **Interactive Cart Management**: Add multiple items incrementally, specify individual item quantities, and view cost additions in real-time.
- 💳 **Simulated Payments**: Integrated multiple payment options including **Credit/Debit Card**, **UPI**, and **Net Banking**.
- 🎟️ **Promotional Coupon System**: Apply active coupon codes for flat discounts on total order:
  - `CWU10` &mdash; **10% OFF**
  - `CWU20` &mdash; **20% OFF**
- 🧾 **Detailed Invoice Generation**: Prints a beautifully-aligned, itemized terminal invoice summarizing:
  - List of ordered items with their respective quantities and total price
  - Baseline cost of goods (excluding tax)
  - Total tax added
  - Applied coupon code discount savings
  - Grand total payable amount

---

## 🚀 Getting Started

### Prerequisites

You need a C compiler installed on your system.
- **Windows**: [MinGW](https://www.mingw-w64.org/) / GCC or Visual Studio Code with C/C++ extension.
- **macOS**: Xcode Command Line Tools (`xcode-select --install`).
- **Linux**: GCC installed via package manager (`sudo apt install build-essential`).

### Compilation

Open your terminal or command prompt, navigate to the project directory, and compile using `gcc`:

```bash
gcc -o online_ordering ONLINE-ORDERING-SYSTEM.C
