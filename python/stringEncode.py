def encodeString(s):
	char = s[0]
	count = 1
	final = ""
	for c in s:
		if char == c:
			count += 1
		else:
			final += char
			final += str(count)
			count = 1
			char = c
	final += char
	final += str(count)
	return final


print encodeString("aaabbcccdd")
			

			
		
