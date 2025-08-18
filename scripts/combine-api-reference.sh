#!/bin/bash

readonly ROOT=$(cd $(dirname ${BASH_SOURCE:-$0})/.. && pwd)
readonly DOC_ROOT="$ROOT/docs"
readonly REFS="$DOC_ROOT/api-references"

tmp_all=$(mktemp)

# 目次から生成する
toc=$(cat << EOT
maio-request.md
EOT
)

echo "# API References" > "$tmp_all"

{
    for md_file in $toc; do
        echo "" 
        cat "$REFS/$md_file" 
    done
} >> "$tmp_all"

cp "$tmp_all" "$DOC_ROOT/api-references.md"

# 後始末
rm $tmp_all
