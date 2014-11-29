# danlin_modules

## Font Awesome 

Font Awesome Font Icon Module

You can use this Module in a graphics context to render vector like icons. 
Look at http://fortawesome.github.io/Font-Awesome/ for more details about Font Awesome.
There are Macros for the Icons. See this page http://fortawesome.github.io/Font-Awesome/icons/ and use the Uppercase names as icon Macros. 


```
void paint (Graphics& g) override {
	DrawIcon(0, 0, 32, FA_ALIGN_CENTER);
}
```

## Oscpack

Oscpack OSC Packing / Unpacking

Oscpack is simply a set of C++ classes for packing and unpacking OSC packets.

Look at http://www.rossbencina.com/code/oscpack for more details about Oscpack