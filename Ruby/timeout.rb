#!/usr/bin/env ruby

require 'timeout'

begin
  start = Time.now
  Timeout::timeout(60) do
    puts `#{ARGV[0]}`
  end
rescue Exception => e
  puts e.message
ensure
  stop = Time.now
  puts "(#{stop - start}s)"
end
