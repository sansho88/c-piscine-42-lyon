# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gigacheck.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberneli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/12 17:49:14 by aberneli          #+#    #+#              #
#    Updated: 2021/08/15 10:13:03 by aberneli         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

RED='\033[0;31m'
GREEN='\033[1;32m'
BLUE='\033[0;36m'
NC='\033[0m'

IFS_BAK=$IFS
IFS=$'\n'

echo "${BLUE}Unwanted files:${NC}${RED}"
find . -not -type d -not \( -name "*.c" -o -name "*.h" -o -name "makefile" \) -print | grep -v ".git"
echo "${NC}"

echo "${BLUE}Norme check${RED}"

NORME="$(norminette)"

grep "Error" <<< "${NORME}"
echo "${GREEN}"
grep "OK!" <<< "${NORME}"
echo "${NC}"

echo "${BLUE}Git Status:${NC}"
git status
