git add .

echo 'Commit message:'
read Message

git commit -am "$Message"
echo 'current Branch:'
read current_Branch
git merge $current_Branch

echo 'Target branch:'
read target_branch

git checkout $target_branch

echo "Merging into $target_branch"


git push origin $target_branch

echo "Changes have been merged and pushed to $target_branch"

read
