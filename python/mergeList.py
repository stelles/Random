class Node:
	def __init__(self):
		self.data = None
		self.next = None



list1 = Node()
list1.data = 0
list2 = Node()
list2.data = 0
for i in range(10):
	new1 = Node()
	new2 = Node()
	new1.data = i
	new2.data = i*2
	if list1.next == None:
		list1.next = new1
		list2.next = new2
	else:
		prev1.next = new1
		prev2.next = new2
	prev1 = new1
	prev2 = new2

def printList(l):
	while l != None:
		print l.data,
		l = l.next

def mergeLists(l1, l2):
	if l1 == None:
		return l2
	if l2 == None:
		return l1
	if l1.data < l2.data:
		l1.next = mergeLists(l1.next, l2)
		return l1
	else:
		l2.next = mergeLists(l1, l2.next)
		return l2

printList(mergeLists(list1, list2))

	
