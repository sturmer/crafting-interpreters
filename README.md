# Crafting Interpreters

Code to follow along Bob Nystrom's book [Crafting Interpreters](http://www.craftinginterpreters.com/).

## Launch the interpreter:

```
> cd build/
> java com.craftinginterpreters.lox.Lox
> print 3 + 1;
4
>
```

## Execute a script:

```
> cd build/
> java com.craftinginterpreters.lox.Lox ../script.lox
one
true
3
```

## Generate the AST

```
javac -d build com/craftinginterpreters/tool/GenerateAst.java
cd build/
java com.craftinginterpreters.tool.GenerateAst \
	../com/craftinginterpreters/lox/
```
