# Alarm Gerakan dengan LCD I2C

Sistem alarm sederhana berbasis Arduino yang mendeteksi gerakan menggunakan sensor PIR dan menampilkan statusnya di LCD 16x2 I2C. Alarm diaktifkan melalui LED dan buzzer ketika gerakan terdeteksi.

## 🔧 Komponen:
- Arduino Uno
- Sensor PIR (HC-SR501)
- LED merah
- Buzzer aktif
- LCD 16x2 I2C (alamat: 0x27 atau 0x3F)
- Kabel jumper

## ⚡ Wiring:
| Komponen | Pin Arduino |
|----------|-------------|
| PIR OUT  | D11         |
| LED      | D12         |
| Buzzer   | D13         |
| LCD SDA  | A4          |
| LCD SCL  | A5          |
| VCC/GND  | 5V / GND    |

## 💻 Fitur:
- Menampilkan status di LCD:
  - “Menunggu gerakan”
  - “ALARM! Gerakan!”
  - “Tidak ada gerakan”
- LED dan buzzer aktif saat deteksi

## 🧠 Logika:
- LCD akan menampilkan status real-time
- Buzzer dan LED berkedip saat gerakan terdeteksi
- LCD akan kembali menampilkan status diam jika tidak ada gerakan

## 📝 Catatan:
- Sesuaikan alamat I2C sesuai hasil scanner (biasanya `0x27` atau `0x3F`)
- Gunakan potensiometer di LCD untuk mengatur kontras

