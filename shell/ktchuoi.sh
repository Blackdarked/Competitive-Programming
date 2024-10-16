#!/bin/sh
if [ $# -ne 3 ]; then 
    echo "Lenh khong hop le, vui long nhap theo cu phap: $0 <chuoi can kiem tra> <file dau vao> <file dau ra>"
    exit 1
fi

str_find="$1"
in_file="$2"
out_file="$3"

> "$out_file"

if [ ! -f "$out_file" ]; then
    echo "$out_file khong ton tai" > "$out_file"
    exit 
fi

line_cnt=$(grep -vc "$str_find" "$in_file")
line_total=$(wc -l < "$in_file")
line_chk=$((line_total - 3))

if [ "$line_cnt" == "$line_total" ]; then
    echo "Tat ca cac dong trong tap tin $in_file deu co chuoi $str_find"
fi
if [ "$line_cnt" == "$line_chk" ]; then
    echo "Tap tin $in_file co 3 dong khong co chuoi $str_find"
fi
