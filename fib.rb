#!/usr/bin/env ruby

def fibonacci(n)
  if n > 1
    fibonacci(n - 2) + fibonacci(n - 1)
  elsif n == 0
    0
  else
    1
  end
end

puts fibonacci(ARGV[0].to_i)
    
