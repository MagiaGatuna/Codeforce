# 📝 Práctica #2

<details>
<summary>A. Divisor of 2048</summary>

> ⏱ 1s · 💾 256 MB  

Dado un número entero positivo $n$, tu tarea es determinar si $n$ es un divisor de 2048.

Si $n$ divide a 2048 (es decir, existe un entero $k$ tal que $n \times k = 2048$), imprime `1`. De lo contrario, imprime `0`.

**Entrada:**
- La única línea de entrada contiene un entero $n$ ($0 \le n \le 2048$).

**Salida:**
- Imprime un solo entero: `1` si $n$ es divisor de 2048; de lo contrario, `0`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `1024` | `1` | $1024 \times 2 = 2048$, por lo tanto es divisor. |
| `3` | `0` | 3 no divide a 2048 de forma exacta. |

</details>
<details>
<summary>B. Power of Two</summary>

> ⏱ 1s · 💾 256 MB  

Dado un entero $n$, tu tarea es determinar si $n$ es una **potencia de dos**.

*Un entero es una potencia de dos si se puede escribir como $2^k$ para algún entero $k \ge 0$.*

**Entrada:**
- La única línea de entrada contiene un solo entero $n$ ($1 \le n \le 10^{15}$).

**Salida:**
- Imprime un solo entero: `1` si $n$ es una potencia de dos; de lo contrario, `0`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `1` | `1` | $2^0 = 1$ |
| `6` | `0` | No existe un entero $k$ tal que $2^k = 6$. |
| `1024` | `1` | $2^{10} = 1024$ |

</details>
<details>
<summary>C. Rectangle in Circle</summary>

> ⏱ 1s · 💾 256 MB  

Se te da un rectángulo con lados de longitud $a$ y $b$, y un círculo con radio $r$. Tu tarea es determinar si el rectángulo puede colocarse completamente dentro del círculo.

**Entrada:**
- La única línea contiene tres enteros $a, b$ y $r$ ($1 \le a, b, r \le 10^9$): las longitudes de los lados del rectángulo y el radio del círculo, respectivamente.

**Salida:**
- Imprime `YES` si el rectángulo cabe dentro del círculo; de lo contrario, imprime `NO`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `3 4 3` | `YES` | Un rectángulo de 3x4 cabe en un círculo de radio 3. |
| `5 12 6` | `NO` | Un rectángulo de 5x12 no cabe en un círculo de radio 6. |

</details>
