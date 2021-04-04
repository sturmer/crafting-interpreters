# Crafting Interpreters

Code to follow along Bob Nystrom's book [Crafting Interpreters](http://www.craftinginterpreters.com/).

## Launch the interpreter:

```
cd build/
java com.craftinginterpreters.lox.Lox
```

## Generate the AST

```
javac -d build com/craftinginterpreters/tool/GenerateAst.java
cd build/
java com.craftinginterpreters.tool.GenerateAst \
	../com/craftinginterpreters/lox/
```
