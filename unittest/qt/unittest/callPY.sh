# echo -e "\n**************call python**************\n"
# echo $1
# echo -e "\n"
# scriptindex=$1

if [ "$1" = "1" ]; then
    # echo -e "\n**************change private to public**************\n"
    python pre_unittest.py
fi

if [ "$1" = "2" ]; then
    # echo -e "\n**************revert private to public**************\n"
    python end_unittest.py
fi

# echo -e "\n*************************************\n"

