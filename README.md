# c-learning

# ВСЕГДА
один раз: git clone https://github.com/therisabi/c-learning.git


каждый раз в начале работы:
1. git status - всегда проверить, что нет незавершенных изменений
2. git pull --rebase (чек ветку)

*--rebase типо лучше, он закидывает локальные коммиты после мерджа по одному


все новые фичи - в новую ветку:
git switch -c <название ветки>


для уверенности: https://open.spotify.com/playlist/37i9dQZF1DZ06evO3n3kYQ?si=bb3aaf13e9434713

# style
.clang-format - стандарт LLVM, весь код должен быть по стандарту. 
форматировщик устанавливается в linux: sudo apt install clang-format, или с расширением "C/C++" для vsc. 
clang-format форматирует по правилам в скрытом файле

# git
этот репозиторий приватный, и будет требовать авторизацию: имя аккаунта + токен доступа (PAT).

PAT генерируется в настройках:
Settings ➔ Developer settings (bottom left) ➔ Personal access tokens ➔ Tokens (classic)

