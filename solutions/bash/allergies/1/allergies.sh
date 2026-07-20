#!/usr/bin/env bash

if [[ $# -lt 2 ]]; then
  echo "false"
  exit 1
fi

if [[ "$2" == "allergic_to" ]]; then
  if [[ $# -lt 3 ]]; then
    echo "false"
    exit 1
  fi
fi


if [[ "$2" == "allergic_to" ]]; then
    declare -A map
    map["eggs"]=1
    map["peanuts"]=2
    map["shellfish"]=4
    map["strawberries"]=8
    map["tomatoes"]=16
    map["chocolate"]=32
    map["pollen"]=64
    map["cats"]=128

    if (( $1 & map[$3] )); then
        echo "true"
        exit 0
    fi
    echo "false"
    
elif [[ "$2" == "list" ]]; then
    names=("eggs" "peanuts" "shellfish" "strawberries" "tomatoes" "chocolate" "pollen" "cats")
    values=(1 2 4 8 16 32 64 128)

    sep=""
    res=""
    for name in "${!names[@]}"; do
        if (( $1 & values[$name] )); then
            res+="${sep}${names[$name]}"
            sep=" "
        fi
    done
    echo $res
else
    echo "fail"
fi
