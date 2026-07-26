# Practical Work 3: String Hashing and Duplicates in C

This project is a laboratory/practical work for the "Computer Technologies and Programming" course. It contains a C program that identifies duplicate strings from a file by calculating string hashes.

## Programs Included

### 1. Duplicate Finder (`task.c`)

This program reads lines from `input.txt`, computes polynomial hashes for each line to identify exact duplicates, and then outputs any found duplicates.

## How to Compile and Run

```bash
gcc task.c -o out
./out
```

## Example Usage

```text
echo -e "hello\nworld\nhello\ntest\nworld\nfoo" > input.txt
./out
Знайдені дублікати:
Дублікат: world
Дублікат: hello
```

## Contributing

Contributions are welcome and appreciated! Here's how you can contribute:

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and adhere to the existing coding style.

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
