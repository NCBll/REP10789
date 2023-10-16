git add .

echo 'Enter the commit message:'
read Message

git commit -m "$Message"

echo 'branch:'
read branch

git push origin $branch

read