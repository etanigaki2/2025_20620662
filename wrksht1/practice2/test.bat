@echo off

rem creates a brand new directory
mkdir madeByBatch

rem moves to the new another_dir
cd madeByBatch

echo hello this is a test. > new_file

notepad new_file

echo Batch file finished executing.
