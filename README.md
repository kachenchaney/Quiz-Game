Permainan ini adalah sebuah kuis tanya jawab pilihan ganda yang dibangun menggunakan konsep dasar pemrograman C seperti array, Loop, Switch-case dan If-else. Dalam permainan ini, pemain diberikan sejumlah pertanyaan dengan beberapa pilihan jawaban

**a. Array** (seperti kotak penyimpanan):
Menyimpan semua pertanyaan dalam satu tempat.
Menyimpan semua pilihan jawaban.
Menyimpan semua jawaban yang benar.

**b. Loop** (pengulangan):
Menggunakan 'for loop' untuk menampilkan setiap pertanyaan satu per satu.

**c. Switch-case** (seperti pemilih):
Digunakan untuk memeriksa jawaban yang dimasukkan pemain (A, B, C, atau D).

**d. If-else** (pengambil keputusan):
Memeriksa apakah jawaban pemain benar atau salah. 

**Bagaimana cara menggunakannya?**
- Jalankan program.
- Baca setiap pertanyaan dengan cermat.
- Ketik A, B, C, atau D sebagai jawaban Anda.
- Lihat apakah jawaban Anda benar.
- Di akhir, lihat berapa banyak yang Anda jawab dengan benar dari 10 pertanyaan.

**Deskripsi Permainan Kuis dalam C:**

Permainan ini adalah sebuah kuis tanya jawab pilihan ganda yang dibangun menggunakan konsep dasar pemrograman C seperti array, pointer, dan struktur kontrol. Dalam permainan ini, pemain diberikan sejumlah pertanyaan dengan beberapa pilihan jawaban, dan pemain diminta untuk memilih jawaban yang benar. Berikut adalah komponen-komponen permainan yang sesuai dengan materi dari PDF dan PPT:

**Array:**
Digunakan untuk menyimpan pertanyaan, pilihan jawaban, dan jawaban yang benar. Misalnya, pertanyaan dan opsi jawaban disimpan dalam array 2 dimensi (options[MAX_QUESTIONS][MAX_OPTIONS]) yang merupakan kumpulan string, sedangkan jawaban benar disimpan dalam array 1 dimensi (correctAnswers[MAX_QUESTIONS]).

**Pointer:**
Dalam permainan ini, string pertanyaan dan pilihan jawaban diakses menggunakan pointer, karena array di C pada dasarnya adalah pointer ke elemen pertama. Misalnya, questions[i] merupakan pointer yang menunjuk ke string pertanyaan.

**Kontrol Program (if-else dan switch-case):**
Untuk memeriksa apakah jawaban pemain benar atau salah, digunakan struktur kontrol switch-case yang mengevaluasi input pemain dan mencocokkannya dengan jawaban yang benar. Jika pemain memilih jawaban yang benar, program menambah skor; jika salah, program menampilkan jawaban yang benar.

**Fungsi toupper() dan scanf():**
Fungsi toupper() digunakan untuk memastikan input pemain tidak case-sensitive (misalnya, 'a' dan 'A' diperlakukan sama). Fungsi scanf() digunakan untuk mengambil input dari pemain secara interaktif.

**Loop (for):**
Loop digunakan untuk menampilkan setiap pertanyaan satu per satu, memberikan pilihan jawaban, dan menerima input dari pemain. Ini menunjukkan penggunaan struktur repetisi yang sangat umum dalam pemrograman untuk melakukan iterasi berulang-ulang, yang sesuai dengan bagian looping dalam materi.
Permainan ini memanfaatkan berbagai elemen penting dalam pemrograman C, mulai dari struktur kontrol, array, hingga pointer, yang semuanya dibahas dalam modul tentang algoritma dan pemrograman
