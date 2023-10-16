git add .

echo 'Commit message:'
read Message

git commit -m "$Message"

echo 'branch:'
read branch

git push origin $branch

read