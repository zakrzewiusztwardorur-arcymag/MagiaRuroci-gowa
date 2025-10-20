package main

import (
    "fmt"
    "strings"
)

func osoby(names []string) string {
    return strings.Join(names, "-")
}

func z(nums []int) int {
    sum := 0
    for _, n := range nums {
        sum += n
    }
    return sum
}

func main() {
    names := []string{"Pawel", "Arek", "Oskar"}
    fmt.Println(osoby(names))
    nums := []int{1,2,3,4}
    fmt.Println(z(nums))
}
