git add .

echo 'Enter the commit message:'
read commitMessage

git commit -m "$commitMessage"

echo 'branch:'
read branch

git push origin $branch

read