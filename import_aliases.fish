alias -s - 'cd -'

alias -s ... ../..

alias -s .... ../../..

alias -s ..... ../../../..

alias -s ...... ../../../../..

alias -s 1 'cd -1'

alias -s 2 'cd -2'

alias -s 3 'cd -3'

alias -s 4 'cd -4'

alias -s 5 'cd -5'

alias -s 6 'cd -6'

alias -s 7 'cd -7'

alias -s 8 'cd -8'

alias -s 9 'cd -9'

alias -s _ 'sudo '

alias -s e emacs

alias -s egrep 'grep -E --color=auto --exclude-dir={.bzr,CVS,.git,.hg,.svn,.idea,.tox}'

alias -s fgrep 'grep -F --color=auto --exclude-dir={.bzr,CVS,.git,.hg,.svn,.idea,.tox}'

alias -s g git

alias -s ga 'git add'

alias -s gaa 'git add --all'

alias -s gam 'git am'

alias -s gama 'git am --abort'

alias -s gamc 'git am --continue'

alias -s gams 'git am --skip'

alias -s gamscp 'git am --show-current-patch'

alias -s gap 'git apply'

alias -s gapa 'git add --patch'

alias -s gapt 'git apply --3way'

alias -s gau 'git add --update'

alias -s gav 'git add --verbose'

alias -s gb 'git branch'

alias -s gbD 'git branch --delete --force'

alias -s gba 'git branch --all'

alias -s gbd 'git branch --delete'

alias -s gbg 'LANG=C git branch -vv | grep ": gone\]"'



alias -s gbl 'git blame -w'

alias -s gbm 'git branch --move'

alias -s gbnm 'git branch --no-merged'

alias -s gbr 'git branch --remote'

alias -s gbs 'git bisect'

alias -s gbsb 'git bisect bad'

alias -s gbsg 'git bisect good'

alias -s gbsn 'git bisect new'

alias -s gbso 'git bisect old'

alias -s gbsr 'git bisect reset'

alias -s gbss 'git bisect start'

alias -s gc 'git commit --verbose'

alias -s 'gc!' 'git commit --verbose --amend'

alias -s gca 'git commit --verbose --all'

alias -s 'gca!' 'git commit --verbose --all --amend'

alias -s gcam 'git commit --all --message'

alias -s 'gcan!' 'git commit --verbose --all --no-edit --amend'

alias -s 'gcans!' 'git commit --verbose --all --signoff --no-edit --amend'

alias -s gcas 'git commit --all --signoff'

alias -s gcasm 'git commit --all --signoff --message'

alias -s gcb 'git checkout -b'


alias -s gcf 'git config --list'

alias -s gcl 'git clone --recurse-submodules'

alias -s gclean 'git clean --interactive -d'


alias -s gcmsg 'git commit --message'

alias -s 'gcn!' 'git commit --verbose --no-edit --amend'

alias -s gco 'git checkout'

alias -s gcor 'git checkout --recurse-submodules'

alias -s gcount 'git shortlog --summary --numbered'

alias -s gcp 'git cherry-pick'

alias -s gcpa 'git cherry-pick --abort'

alias -s gcpc 'git cherry-pick --continue'

alias -s gcs 'git commit --gpg-sign'

alias -s gcsm 'git commit --signoff --message'

alias -s gcss 'git commit --gpg-sign --signoff'

alias -s gcssm 'git commit --gpg-sign --signoff --message'

alias -s gd 'git diff'

alias -s gdca 'git diff --cached'


alias -s gdcw 'git diff --cached --word-diff'

alias -s gds 'git diff --staged'

alias -s gdt 'git diff-tree --no-commit-id --name-only -r'

alias -s gdup 'git diff @{upstream}'

alias -s gdw 'git diff --word-diff'

alias -s gf 'git fetch'

alias -s gfa 'git fetch --all --prune --jobs=10'

alias -s gfg 'git ls-files | grep'

alias -s gfo 'git fetch origin'

alias -s gg 'git gui citool'

alias -s gga 'git gui citool --amend'


alias -s ggpur ggu



alias -s ghh 'git help'

alias -s gignore 'git update-index --assume-unchanged'

alias -s gignored 'git ls-files -v | grep "^[[:lower:]]"'


alias -s gk '\gitk --all --branches &!'


alias -s gl 'git pull'

alias -s glg 'git log --stat'

alias -s glgg 'git log --graph'

alias -s glgga 'git log --graph --decorate --all'

alias -s glgm 'git log --graph --max-count=10'

alias -s glgp 'git log --stat --patch'

alias -s glo 'git log --oneline --decorate'

alias -s globurl 'noglob urlglobber '

alias -s glod 'git log --graph --pretty="%Cred%h%Creset -%C(auto)%d%Creset %s %Cgreen(%ad) %C(bold blue)<%an>%Creset"'

alias -s glods 'git log --graph --pretty="%Cred%h%Creset -%C(auto)%d%Creset %s %Cgreen(%ad) %C(bold blue)<%an>%Creset" --date=short'

alias -s glog 'git log --oneline --decorate --graph'

alias -s gloga 'git log --oneline --decorate --graph --all'

alias -s glol 'git log --graph --pretty="%Cred%h%Creset -%C(auto)%d%Creset %s %Cgreen(%ar) %C(bold blue)<%an>%Creset"'

alias -s glola 'git log --graph --pretty="%Cred%h%Creset -%C(auto)%d%Creset %s %Cgreen(%ar) %C(bold blue)<%an>%Creset" --all'

alias -s glols 'git log --graph --pretty="%Cred%h%Creset -%C(auto)%d%Creset %s %Cgreen(%ar) %C(bold blue)<%an>%Creset" --stat'

alias -s glp _git_log_prettily



alias -s gm 'git merge'

alias -s gma 'git merge --abort'


alias -s gms 'git merge --squash'

alias -s gmtl 'git mergetool --no-prompt'

alias -s gmtlvim 'git mergetool --no-prompt --tool=vimdiff'


alias -s gp 'git push'

alias -s gpd 'git push --dry-run'

alias -s gpf 'git push --force-with-lease --force-if-includes'

alias -s 'gpf!' 'git push --force'

alias -s gpoat 'git push origin --all && git push origin --tags'

alias -s gpod 'git push origin --delete'

alias -s gpr 'git pull --rebase'

alias -s gpra 'git pull --rebase --autostash'

alias -s gprav 'git pull --rebase --autostash -v'

alias -s gpristine 'git reset --hard && git clean --force -dfx'



alias -s gprv 'git pull --rebase -v'



alias -s gpu 'git push upstream'

alias -s gpv 'git push --verbose'

alias -s gr 'git remote'

alias -s gra 'git remote add'

alias -s grb 'git rebase'

alias -s grba 'git rebase --abort'

alias -s grbc 'git rebase --continue'


alias -s grbi 'git rebase --interactive'


alias -s grbo 'git rebase --onto'


alias -s grbs 'git rebase --skip'

alias -s grep 'grep --color=auto --exclude-dir={.bzr,CVS,.git,.hg,.svn,.idea,.tox}'

alias -s grev 'git revert'

alias -s grh 'git reset'

alias -s grhh 'git reset --hard'

alias -s grhk 'git reset --keep'

alias -s grhs 'git reset --soft'

alias -s grm 'git rm'

alias -s grmc 'git rm --cached'

alias -s grmv 'git remote rename'


alias -s grrm 'git remote remove'

alias -s grs 'git restore'

alias -s grset 'git remote set-url'

alias -s grss 'git restore --source'

alias -s grst 'git restore --staged'


alias -s gru 'git reset --'

alias -s grup 'git remote update'

alias -s grv 'git remote --verbose'

alias -s gsb 'git status --short --branch'

alias -s gsd 'git svn dcommit'

alias -s gsh 'git show'

alias -s gsi 'git submodule init'

alias -s gsps 'git show --pretty=short --show-signature'

alias -s gsr 'git svn rebase'

alias -s gss 'git status --short'

alias -s gst 'git status'

alias -s gsta 'git stash push'

alias -s gstaa 'git stash apply'

alias -s gstall 'git stash --all'

alias -s gstc 'git stash clear'

alias -s gstd 'git stash drop'

alias -s gstl 'git stash list'

alias -s gstp 'git stash pop'

alias -s gsts 'git stash show --patch'

alias -s gstu 'gsta --include-untracked'

alias -s gsu 'git submodule update'

alias -s gsw 'git switch'

alias -s gswc 'git switch --create'



alias -s gta 'git tag --annotate'


alias -s gts 'git tag --sign'

alias -s gtv 'git tag | sort -V'

alias -s gunignore 'git update-index --no-assume-unchanged'

alias -s gunwip 'git rev-list --max-count=1 --format="%s" HEAD | grep -q "\--wip--" && git reset HEAD~1'







alias -s gwch 'git whatchanged -p --abbrev-commit --pretty=medium'


alias -s gwt 'git worktree'

alias -s gwta 'git worktree add'

alias -s gwtls 'git worktree list'

alias -s gwtmv 'git worktree move'

alias -s gwtrm 'git worktree remove'

alias -s history omz_history

alias -s imgcat /Users/xiaobai/.iterm2/imgcat

alias -s imgls /Users/xiaobai/.iterm2/imgls

alias -s it2api /Users/xiaobai/.iterm2/it2api

alias -s it2attention /Users/xiaobai/.iterm2/it2attention

alias -s it2check /Users/xiaobai/.iterm2/it2check

alias -s it2copy /Users/xiaobai/.iterm2/it2copy

alias -s it2dl /Users/xiaobai/.iterm2/it2dl

alias -s it2getvar /Users/xiaobai/.iterm2/it2getvar

alias -s it2git /Users/xiaobai/.iterm2/it2git

alias -s it2profile /Users/xiaobai/.iterm2/it2profile

alias -s it2setcolor /Users/xiaobai/.iterm2/it2setcolor

alias -s it2setkeylabel /Users/xiaobai/.iterm2/it2setkeylabel

alias -s it2tip /Users/xiaobai/.iterm2/it2tip

alias -s it2ul /Users/xiaobai/.iterm2/it2ul

alias -s it2universion /Users/xiaobai/.iterm2/it2universion

alias -s jst joshuto

alias -s l 'ls -lah'

alias -s la 'ls -lAh'

alias -s ll 'ls -lh'

alias -s ls 'ls -G'

alias -s lsa 'ls -lah'

alias -s md 'mkdir -p'


alias -s pip pip3

alias -s python python3

alias -s rd rmdir

alias -s run-help man

alias -s v nvim

alias -s which-command whence

alias -s z 'zshz 2>&1'

alias -s zel zellij
