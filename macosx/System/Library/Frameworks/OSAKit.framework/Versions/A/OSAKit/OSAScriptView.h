/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <AppKit/NSTextView.h>

@class OSAScriptViewPrivate, NSString;

@interface OSAScriptView : NSTextView {

	OSAScriptViewPrivate* _private;

}

@property (copy) NSString * source; 
@property (assign) char usesScriptAssistant; 
@property (assign) char usesTabs; 
@property (assign) unsigned long long tabWidth; 
@property (assign) char wrapsLines; 
@property (assign) char indentsWrappedLines; 
@property (assign) unsigned long long indentWidth; 
+(void)initialize;
-(unsigned long long)indentWidth;
-(unsigned long long)tabWidth;
-(char)wrapsLines;
-(char)indentsWrappedLines;
-(char)usesTabs;
-(void)setUsesTabs:(char)arg1 ;
-(void)setWrapsLines:(char)arg1 ;
-(void)setIndentsWrappedLines:(char)arg1 ;
-(void)setTabWidth:(unsigned long long)arg1 ;
-(void)setIndentWidth:(unsigned long long)arg1 ;
-(id)scriptAssistant;
-(void)compileScript:(id)arg1 ;
-(void)recordScript:(id)arg1 ;
-(void)stopScript:(id)arg1 ;
-(void)setUsesScriptAssistant:(char)arg1 ;
-(char)usesScriptAssistant;
-(void)autoIndent:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)controller;
-(char)validateMenuItem:(id)arg1 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)_commonInit;
-(void)setController:(id)arg1 ;
-(void)setTypingAttributes:(id)arg1 ;
-(void)complete:(id)arg1 ;
-(void)awakeFromNib;
-(NSString *)source;
-(void)copyFont:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)replaceTextStorage:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 affinity:(unsigned long long)arg2 stillSelecting:(char)arg3 ;
-(void)insertNewline:(id)arg1 ;
-(id)readablePasteboardTypes;
-(void)runScript:(id)arg1 ;
@end

