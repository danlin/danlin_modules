# danlin_modules
==============

## Font Awesome 

Font Awesome Font Icon Module

You can use this Module in a graphics context to render Vector like Icons.
Look at http://fortawesome.github.io/Font-Awesome/ for more details.
There are Macros for the Icons. See this Page http://fortawesome.github.io/Font-Awesome/icons/ and use the Uppercase names as Icon Macros.

```
void paint (Graphics& g) override {
	DrawIcon(0, 0, 32, FA_ALIGN_CENTER);
}
```