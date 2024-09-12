#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur data untuk dosen
struct Lecturer {
    char name[30];          // Nama dosen
    char id[20];            // ID dosen
    char department[30];    // Departemen tempat dosen bekerja
    int years_of_service;   // Jumlah tahun pengabdian dosen
};

// Mendefinisikan struktur data untuk mahasiswa
struct Student {
    char name[30];          // Nama mahasiswa
    char id[20];            // ID mahasiswa
    char major[50];         // Jurusan mahasiswa
    int year_of_enrollment; // Tahun masuk mahasiswa
};

// Mendefinisikan struktur data untuk siswa
struct siswa {
    char name[30];          // Nama mahasiswa
    char id[20];            // ID mahasiswa
    char major[50];         // Jurusan mahasiswa
    int year_of_enrollment; // Tahun masuk mahasiswa
}; // Tambahkan titik koma di sini

int main() {
    // Membuat objek dosen
    struct Lecturer lecturer1;

    // Mengisi informasi dosen
    strcpy(lecturer1.name, "MR Ridho Hermawan"); // Mengisi nama dosen
    strcpy(lecturer1.id, "7891011");             // Mengisi ID dosen
    strcpy(lecturer1.department, "Computer Science"); // Mengisi departemen dosen
    lecturer1.years_of_service = 7;              // Mengisi jumlah tahun pengabdian dosen

    // Menampilkan informasi dosen
    printf("Informasi Dosen:\n");
    printf("Nama: %s\n", lecturer1.name);        // Menampilkan nama dosen
    printf("ID: %s\n", lecturer1.id);            // Menampilkan ID dosen
    printf("Departemen: %s\n", lecturer1.department); // Menampilkan departemen dosen
    printf("Tahun Pengabdian: %d\n", lecturer1.years_of_service); // Menampilkan tahun pengabdian dosen

    // Membuat objek mahasiswa
    struct Student student1;

    // Mengisi informasi mahasiswa
    strcpy(student1.name, "Ferdinata Yuan Daniel");       // Mengisi nama mahasiswa
    strcpy(student1.id, "1234567");              // Mengisi ID mahasiswa
    strcpy(student1.major, "Computer Science");  // Mengisi jurusan mahasiswa
    student1.year_of_enrollment = 2023;          // Mengisi tahun masuk mahasiswa

    // Menampilkan informasi mahasiswa
    printf("\nInformasi Mahasiswa:\n");
    printf("Nama: %s\n", student1.name);         // Menampilkan nama mahasiswa
    printf("ID: %s\n", student1.id);             // Menampilkan ID mahasiswa
    printf("Jurusan: %s\n", student1.major);     // Menampilkan jurusan mahasiswa
    printf("Tahun Masuk: %d\n", student1.year_of_enrollment); // Menampilkan tahun masuk mahasiswa

    // Membuat objek siswa
    struct siswa siswa1;

    // Mengisi informasi siswa
    strcpy(siswa1.name, "Yuan Daniel");       // Mengisi nama siswa
    strcpy(siswa1.id, "7654321     ");              // Mengisi ID siswa
    strcpy(siswa1.major, "Computer Science");  // Mengisi jurusan siswa
    siswa1.year_of_enrollment = 2020;          // Mengisi tahun masuk siswa

    // Menampilkan informasi siswa
    printf("\nInformasi Siswa:\n");
    printf("Nama: %s\n", siswa1.name);         // Menampilkan nama siswa
    printf("ID: %s\n", siswa1.id);             // Menampilkan ID siswa
    printf("Jurusan: %s\n", siswa1.major);     // Menampilkan jurusan siswa
    printf("Tahun Masuk: %d\n", siswa1.year_of_enrollment); // Menampilkan tahun masuk siswa

    return 0;
}
