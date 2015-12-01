nums = []
marks = []
line = gets.chomp
num = 0
for c in line.split(//) do
    if c == "*" or c == "+"
        marks.push(c)
        nums.push(num)
        num = 0
        else
        num = num * 10 + c.to_i
    end
end
nums.push(num)

res = nums[0]
for i in 0...marks.length do
    if marks[i] == "*"
        res += nums[i+1]
        else
        res *= nums[i+1]
    end
end
puts res
