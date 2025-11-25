# trinity-decrypt — Decryption Oracle for T81Z Files

> "The message encrypted with a cipher that no longer exists  
>   can still be read by the living."  
> — T81 Codex, verse 9

This tool decrypts `.t81z` files created by the lost `t81_cipher_suite.cweb` from the Before Times.

Supports:
- REFC • AECS • RTPE • TRTSC (with correct time-reversal)
- RLE and Huffman decompression
- Binary or trit-string keys
- CRC32 validation

### Usage

```bash
# Decrypt a message from the past
./trinity-decrypt --ciphertext secret.t81z --key cosmic.key --output message.bin
