#!/bin/bash
# Packs up the created binaries by the release workflow
# which are then uploaded as release assets in any release.

mkdir -p binaries

cd x64/Release
7z a -mx=9 -tzip ../../tic_tac_toe-x64.zip tic_tac_toe.exe
cd ../..
7z a -mx=9 -tzip tic_tac_toe-x64.zip vc_redistributable_links.txt

cd x64/Release
7z a -mx=9 -ttar ../../tic_tac_toe-x64.tar tic_tac_toe.exe
cd ../..
7z a -mx=9 -ttar tic_tac_toe-x64.tar vc_redistributable_links.txt

cd Release
7z a -mx=9 -tzip ../tic_tac_toe-x86.zip tic_tac_toe.exe
cd ..
7z a -mx=9 -tzip tic_tac_toe-x86.zip vc_redistributable_links.txt

cd Release
7z a -mx=9 -ttar ../tic_tac_toe-x86.tar tic_tac_toe.exe
cd ..
7z a -mx=9 -ttar tic_tac_toe-x86.tar vc_redistributable_links.txt

# Use the GZip compression algorithm
7z a -mx=9 -tgzip tic_tac_toe-x64.tar.gz tic_tac_toe-x64.tar
7z a -mx=9 -tgzip tic_tac_toe-x86.tar.gz tic_tac_toe-x86.tar

# We're going to use TAR.GZ files
rm tic_tac_toe-x64.tar
rm tic_tac_toe-x86.tar

mv tic_tac_toe-x64.zip binaries/
mv tic_tac_toe-x64.tar.gz binaries/
mv tic_tac_toe-x86.zip binaries/
mv tic_tac_toe-x86.tar.gz binaries/
