# Check all patches in the ./patches directory
cat ./patches/*.patch | git apply --check --verbose
