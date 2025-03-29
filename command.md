## CHIFR TP1

### 1. Vernam Cipher Scheme
- vernam_chipher.py
- vernam_chipher.ccW

### 2. OpenSSL
- `openssl rand -hex 16 > key`
- `openssl rand -hex 16 > iv`
#### Encrypt 
- `openssl enc -aes-128-cbc -e -in sample.txt -out enc_sample -k key`
- `openssl enc -aes-128-ecb -e -in sample.txt -out enc_sample -k key -iv iv`
#### Decrypt 
- `openssl enc -aes-128-cbc -d -in enc_sample -out sample.txt -k key`
- `openssl enc -aes-128-ecb -d -in enc_sample -out sample.txt -k key -iv iv`

### 3. convert, head, tail
#### Convert img to ppm
- `convert IMAGE.jpg -compress none OUTPUT.ppm`
#### Head
- `head -n [number] [FILE]`
  > Default number is 10.
- `head -n -10 [FILE]`
#### Tail
- `tail -n [number] [FILE]`
  > Default number is 10.
- `tail -n +4 [FILE]`
  > show up to 4th line.