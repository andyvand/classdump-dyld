/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSWindow.h>

@class NSWindow, NSTextField, NSString;

@interface QLControlTooltip : NSWindow {

	NSWindow* _parentWindow;
	NSTextField* _textField;
	CGRect _anchorRect;
	char _verticallyPositioned;

}

@property (assign) NSWindow * parentWindow;                //@synthesize parentWindow=_parentWindow - In the implementation block
@property (copy) NSString * string; 
@property (assign) CGRect anchorRect; 
@property (assign) char verticallyPositioned;              //@synthesize verticallyPositioned=_verticallyPositioned - In the implementation block
+(id)tooltipWindow;
-(void)setVerticallyPositioned:(char)arg1 ;
-(void)_updateWindowFrame;
-(char)verticallyPositioned;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(NSString *)string;
-(NSWindow *)parentWindow;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(void)setString:(NSString *)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(CGRect)anchorRect;
-(void)setAnchorRect:(CGRect)arg1 ;
@end

