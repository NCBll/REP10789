git add .

echo 'Commit message:'
read Message

git commit -am "$Message"

echo 'Target branch:'
read target_branch

git checkout $target_branch

echo "Merging $target_branch"


git push origin $target_branch

echo "Changes have been merged and pushed to $target_branch"

read
