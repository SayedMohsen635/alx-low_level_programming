#!/bin/bash

# Define variables for GitHub repository URL and local directory path
repo_url="https://github.com/SayedMohsen635/alx-low_level_programming.git"
local_dir="/home/sayed/alx-low_level_programming"

# Change to the local directory
cd "$local_dir"

# Add all files in the local directory to the Git repository
git add .

# Commit the changes with a commit message
git commit -m "Done"

#----------------------------------
# Set the remote repository URL
# git remote add origin "$repo_url"
#----------------------------------

# Push the changes to the remote repository
git push

# Exit the script
exit 0
