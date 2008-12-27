import kernel

class A
	init ca
	do
		'A'.output
	end

	init ca2
	do
		'A'.output
		'2'.output
	end

	meth foo
	do
		'a'.output
		'\n'.output
	end
end

class B
special A
	init cb
	do
		'B'.output
		'{'.output
		ca
		'}'.output
	end

	redef meth foo
	do
		'b'.output
		super
	end
end

class C
special B
	init cc
	do
		'C'.output
		'{'.output
		cb
		'}'.output
	end

	redef meth foo
	do
		'c'.output
		super
	end
end

class M
special A
	redef meth foo
	do
		'm'.output
		super
	end
end

class N
special B
special M
	redef meth foo
	do
		'n'.output
		super
	end
end

class O
special N
special C
	init co
	do
		'O'.output
		'{'.output
		cc
		'}'.output
	end
	redef meth foo
	do
		'o'.output
		super
	end
end

(new A.ca).foo
(new A.ca2).foo
(new B.cb).foo
#alt1#(new B.ca).foo
#alt1#(new B.ca2).foo
(new C.cc).foo
#alt1#(new C.ca).foo
#alt1#(new C.ca2).foo
#alt1#(new C.cb).foo
(new M.ca).foo
(new M.ca2).foo
(new N.cb).foo
#alt1#(new N.ca).foo
#alt1#(new N.ca2).foo
(new O.co).foo
#alt1#(new O.ca).foo
#alt1#(new O.ca2).foo
#alt1#(new O.cb).foo
#alt1#(new O.cc).foo
