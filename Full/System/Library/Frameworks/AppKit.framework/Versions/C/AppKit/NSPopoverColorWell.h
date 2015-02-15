/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColorWell.h>
#import <AppKit/NSPopoverDelegate.h>

@class NSString;

@interface NSPopoverColorWell : NSColorWell <NSPopoverDelegate> {

	/*^block*/id _afterRenderer;
	struct {
		unsigned _noSelection : 1;
		unsigned _emptyColor : 1;
		unsigned _emptyEnabled : 1;
		unsigned _controlSize : 2;
		unsigned _reserved : 27;
	}  _flags;

}

@property (copy) id afterRenderer;                                          //@synthesize afterRenderer=_afterRenderer - In the implementation block
@property (getter=isEmptyColorEnabled) char emptyColorEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_bezelRenderingButton;
+(id)emptyColor;
+(void)drawEmptyColorSwatchInRect:(CGRect)arg1 enabled:(char)arg2 ;
+(id)_colorPopover;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)performClick:(id)arg1 ;
-(char)isOpaque;
-(NSEdgeInsets)alignmentRectInsets;
-(void)_windowChangedKeyState;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(char)drawColor;
-(void)_drawBorderInRect:(CGRect)arg1 ;
-(id)color;
-(char)_ownsColorPanelExclusively;
-(char)_shouldOrderFront;
-(char)isEmptyColorEnabled;
-(void)setEmptyColorEnabled:(char)arg1 ;
-(id)_bezelRenderingButton;
-(void)popoverWillClose:(id)arg1 ;
-(void)setAfterRenderer:(id)arg1 ;
-(NSEdgeInsets)_colorSwatchEdgeInsets;
-(void)_showPopover;
-(id)afterRenderer;
@end

