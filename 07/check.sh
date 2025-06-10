#!/bin/bash

./a.out

status=$?

echo "プログラムの終了ステータス: $status"

if [ $status -ne 0 ]; then
  echo "== (x) プログラムが異常終了しました。=="
  exit 1
else
  echo "== (o) プログラムが正常終了しました。=="
  exit 0
fi
