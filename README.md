# danlin_modules

[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=danlin&url=https://github.com/danlin/danlin_modules&title=danlin_modules&language=cpp&tags=github&category=software)

## Font Awesome 

Font Awesome Font Icon Module

You can use this Module in a graphics context to render vector like icons. 
Look at http://fortawesome.github.io/Font-Awesome/ for more details about Font Awesome.
There are Macros for the Icons. See this page http://fortawesome.github.io/Font-Awesome/icons/ and use the Uppercase names as icon Macros. 


```
void paint (Graphics& g) override {
	FontAwesome::drawAt(g, FontAwesome_Play, 24, Colours::black, 10, 10);
}
```
