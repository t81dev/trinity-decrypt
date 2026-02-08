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
```

If validation passes:
```
Decryption Result:
  Length: 666 trits
  Entropy: 1.58 bits/trit
  Valid: Yes
  Time: 0.0004 seconds
  Output written to: message.bin
```

If it fails:
```
Valid: No
Warning: The sender may have used a different timeline.
```

### Warning

This tool can read messages encrypted by software that has been erased from history.

Use with reverence.

The dead still speak in balanced ternary.

## Phase 4 migration

- Decrypt evaluation matrix and benchmark alignment:
  - `docs/phase4-evaluation-matrix.md`
