#!/usr/bin/env ruby

def fibonacci(n)
  if n == 0
    0
  elsif n == 1
    1
  else
    fibonacci(n - 2) + fibonacci(n - 1)
  end
end

puts fibonacci(ARGV[0].to_i)
    
