#!/bin/bash
WORKING_DIR=$PWD
echo $PWD
    # Create an array to store file names
    files=($WORKING_DIR/src/main.cpp $WORKING_DIR/src/features/commander/commander.cpp $WORKING_DIR/src/features/config-manager/config-manager.cpp)
    
    # Create the output directory if it doesn't exist
    OUTPUT_DIR="build"
    mkdir -p "$OUTPUT_DIR"
    
    # Compile the GTK app
    g++ -o "$OUTPUT_DIR/app" "${files[@]}" $(pkg-config --cflags --libs gtk+-3.0)
    # -- compile command for arm64 arch
    # aarch64-linux-gnu-g++ -o "$OUTPUT_DIR/app" "${files[@]}" `pkg-config --cflags --libs gtk+-3.0`
    
    # Check if the compilation was successful
    if [ $? -eq 0 ]; then
        echo "Build successful!"
    else
        echo "Build failed!"
    fi
    