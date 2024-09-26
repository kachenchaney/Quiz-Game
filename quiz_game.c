#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUESTIONS 10
#define MAX_OPTIONS 4
#define MAX_LENGTH 100

int main() {
    int score = 0;
    char answer;

    // Array untuk menyimpan pertanyaan
    const char *questions[MAX_QUESTIONS] = {
        "Apa yang disimpan oleh pointer dalam C?",
        "Apa sintaks yang benar untuk mendeklarasikan pointer ke integer?",
        "Bagaimana cara mengakses nilai dari alamat yang ditunjuk oleh pointer?",
        "Apa nama operator yang digunakan untuk mengambil alamat dari variabel?",
        "Apa yang benar tentang array dalam C?",
        "Bagaimana cara mengakses elemen ketiga dari array 'arr' menggunakan pointer?",
        "Apa yang dilakukan fungsi `strcpy()` dalam C?",
        "Bagaimana cara mendeklarasikan array dengan 10 elemen bertipe integer?",
        "Apa yang benar tentang pointer to pointer (pointer ke pointer)?",
        "Fungsi swap() dengan pointer digunakan untuk?"
    };

    // Array untuk menyimpan pilihan jawaban
    const char *options[MAX_QUESTIONS][MAX_OPTIONS] = {
        {"A. Nilai variabel", "B. Alamat memori variabel", "C. Tipe data variabel", "D. Ukuran variabel"},
        {"A. int ptr*;", "B. int *ptr;", "C. *int ptr;", "D. int ptr;"},
        {"A. &ptr", "B. ptr*", "C. *ptr", "D. ptr"},
        {"A. *", "B. &", "C. +", "D. -"},
        {"A. Elemen array memiliki tipe data berbeda", "B. Elemen array dimulai dari indeks 1", "C. Array adalah pointer konstan ke elemen pertama", "D. Ukuran array dapat berubah setelah deklarasi"},
        {"A. *(arr + 2)", "B. arr[3]", "C. *(arr + 3)", "D. *(arr + 1)"},
        {"A. Menghitung panjang string", "B. Membandingkan dua string", "C. Menyalin satu string ke string lain", "D. Menggabungkan dua string"},
        {"A. int arr(10);", "B. int arr[];", "C. int arr[10];", "D. arr[10] int;"},
        {"A. Menyimpan alamat dari variabel biasa", "B. Menyimpan nilai dari variabel", "C. Menyimpan alamat dari pointer lain", "D. Menunjuk ke elemen array"},
        {"A. Menambah nilai variabel", "B. Menukar nilai dua variabel", "C. Menghitung panjang array", "D. Menunjuk ke alamat variabel"}
    };

    // Array untuk menyimpan jawaban yang benar
    const char correctAnswers[MAX_QUESTIONS] = {'B', 'B', 'C', 'B', 'C', 'A', 'C', 'C', 'C', 'B'};

    // Loop untuk menampilkan pertanyaan
    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("\nPertanyaan %d: %s\n", i + 1, questions[i]);
        
        // Menampilkan pilihan jawaban
        for (int j = 0; j < MAX_OPTIONS; j++) {
            printf("%s\n", options[i][j]);
        }

        printf("Masukkan jawaban Anda (A/B/C/D): ");
        scanf(" %c", &answer);
        answer = toupper(answer);

        // Menggunakan switch-case untuk menilai jawaban
        switch (answer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                if (answer == correctAnswers[i]) {
                    printf("Jawaban benar!\n");
                    score++;
                } else {
                    printf("Jawaban salah. Jawaban yang benar adalah %c\n", correctAnswers[i]);
                }
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }

    // Menampilkan skor akhir
    printf("\nKuis selesai! Skor Anda: %d dari %d\n", score, MAX_QUESTIONS);

    return 0;
}