/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSTextView.h>
#import <QuartzComposer/NSTextDelegate.h>
#import <QuartzComposer/NSTextViewDelegate.h>

@class NSDictionary, NSColor, NSString;

@interface QCSourceTextView : NSTextView <NSTextDelegate, NSTextViewDelegate> {

	char _showLines;
	NSDictionary* _keywordColors;
	NSColor* _stringColor;
	NSColor* _commentColor;
	NSColor* _preprocessorColor;
	NSColor* _errorColor;
	NSColor* _numberColor;
	unsigned long long _fontSize;
	void** _unused[3];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)parseSource:(id)arg1 callback:(/*function pointer*/void*)arg2 userInfo:(void*)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)textDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(id)source;
-(void)changeFont:(id)arg1 ;
-(void)setSource:(id)arg1 ;
-(void)insertNewline:(id)arg1 ;
-(void)_finishInitialization;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setErrorLine:(unsigned long long)arg1 ;
-(void)setKeywordColors:(id)arg1 ;
-(void)setHasLineNumbers:(char)arg1 ;
-(void)setCommentColor:(id)arg1 ;
-(void)setPreprocessorColor:(id)arg1 ;
-(void)setStringColor:(id)arg1 ;
-(void)_showLineNumbers:(char)arg1 ;
-(void)_highlightAllLinesWithColor:(id)arg1 ;
-(void)_highlightLine:(unsigned long long)arg1 withColor:(id)arg2 ;
-(char)hasLineNumbers;
-(void)setHighlightLine:(unsigned long long)arg1 ;
-(id)keywordColors;
-(id)stringColor;
-(id)commentColor;
-(id)preprocessorColor;
-(void)setErrorHighlightColor:(id)arg1 ;
-(id)errorHighlightColor;
-(void)setNumberColor:(id)arg1 ;
-(id)numberColor;
-(NSRange)__shiftLeft:(NSRange)arg1 ;
-(void)_shiftRight:(id)arg1 ;
-(void)_shiftLeft:(id)arg1 ;
-(NSRange)__shiftRight:(NSRange)arg1 ;
-(void)shiftLeft:(id)arg1 ;
-(void)shiftRight:(id)arg1 ;
@end

