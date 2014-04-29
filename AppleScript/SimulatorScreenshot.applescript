#!/usr/bin/osascript

tell application "iPhone Simulator"
	activate
end tell

tell application "System Events"
	tell process "iPhone Simulator"
		tell menu bar 1
			tell menu bar item "File"
				tell menu "File"
					click menu item "Save Screen Shot"
				end tell
			end tell
		end tell
	end tell
end tell
