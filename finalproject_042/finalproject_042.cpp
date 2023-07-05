#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungnilaiakhir() { return 0; }
	virtual void cekkelulusan() { return ; }
	virtual void input() { return ; }

	void setpresensi(float nilai) {
		this->presensi = nilai;
	}

	float getpresensi() {
		return presensi;
	}

	void setactivity(float nilai) {
		this->activity = nilai;
	}

	float getactivity() {
		return activity;
	}

	void setexercise(float nilai) {
		this->exercise = nilai;
	}

	float getexercise() {
		return exercise;
	}

	void settugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}

	float gettugasAkhir() {
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah{
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	Pemrograman() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

		void cekKelulusan() override {
			float nilaiAkhir = hitungNilaiAkhir();
			if (nilaiAkhir > 75) {
				cout << "Lulus";
			}
			else {
				cout << "Tidak Lulus";
			}
		}

	virtual void input() {
			float nilai;

			cout << "Masukkan nilai presensi: ";
			cin >> nilai;
			setpresensi(nilai);

			cout << "Masukkan nilai activity: ";
			cin >> nilai;
			activity = nilai;

			cout << "Masukkan nilai exercise: ";
			cin >> nilai;
			exercise = nilai;

			cout << "Masukkan nilai ujian akhir: ";
			cin >> nilai;
			tugasAkhir = nilai;
		}
}

int main() {
	Pemrograman pemrograman;
	pemrograman.input();
	pemrograman.cekkelulusan();

	return 0;
}