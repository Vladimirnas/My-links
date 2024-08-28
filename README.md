# My-links
https://drive.google.com/file/d/1_IubiAA1sIohHUY1395t_76dOq0y6tus/view?=drivesdk


#!/bin/bash


read -p "Введите номер строки: " number
read -p "Введите новый текст: " str
read -p "Введите путь к файлу: " file


if [ ! -f "$file" ]; then
    echo "eeeew"
    exit 1
fi


if [ "$(wc -l < "$file")" -lt "$number" ]; then
    echo "wwww"
    exit 1
fi


if ! [[ "$line_number" =~ ^[0-9]+$ ]]; then
    echo "номер строки должен быть числом."
    exit 1
fi


sed -i "${number}s/.*/${str}/" "$file"


size=$(stat -c%s "$file")
date=$(date "+%Y-%m-%d %H:%M:%S")
hash=$(sha256sum "$file" | awk '{ print $1 }')

echo "$file $size $date $hash" >> files.log
