BEGIN{}

{
l[4] = l[3]
l[3] = l[2]
l[2] = l[1]
l[1] = l[0]
gsub("[\\$,]","",$2)
l[0] = $2
}

/find_cache/{
print "size: " l[3] " nptr: " l[4]
}


