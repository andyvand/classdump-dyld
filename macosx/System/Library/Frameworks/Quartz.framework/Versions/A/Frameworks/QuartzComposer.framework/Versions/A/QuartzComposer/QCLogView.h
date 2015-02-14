/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSScrollView, NSTextView, QCPatch;

@interface QCLogView : NSView {

	NSView* _insideView;
	NSScrollView* _scrollView;
	NSTextView* _textView;
	QCPatch* _rootPatch;
	void** _unused[4];

}
+(void)initialize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)clear:(id)arg1 ;
-(void)_finishInitialization;
-(void)_appendLog:(id)arg1 ;
-(void)_message:(id)arg1 ;
-(void)setRootPatch:(id)arg1 ;
-(id)rootPatch;
@end

