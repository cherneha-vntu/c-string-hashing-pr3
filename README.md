# Practical Work 3

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
Contributions are not currently accepted as this is a personal university assignment.

## License
This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
