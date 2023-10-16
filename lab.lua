M = {}

M.foo = {
	b = "b",
	a = "a",
}

M.bar = function()
	return {
		c = "c",
		d = "d",
	}
end

local temp = M.bar().c
print(M.foo.a)
print(temp)

Str = nil or "hello"
print(Str)
