/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrollView.h>

@class NSColorPickerPageableNameList, NSImage;

@interface NSColorPickerPageableNameListScrollView : NSScrollView {

	NSColorPickerPageableNameList* picker;
	NSImage* _scrollerCaps;
	long long _partMouseDown;
	long long _arrowPlacement;
	long long _tint;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_init;
-(void)tile;
-(void)_windowChangedKeyState;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(CGRect)rectForPart:(long long)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(CGRect)scrollerRect;
-(void)appearanceChanged:(id)arg1 ;
-(unsigned long long)pageCount;
-(long long)partHit:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)timer:(id)arg1 ;
-(void)mouse:(id)arg1 ;
-(char)isPaged;
-(char)isFirstAndKey;
-(void)updateWithFocusRingForWindowKeyChange;
-(id)colorList;
-(void)drawScroller:(CGRect)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(long long)_partMouseDown;
-(long long)_arrowPlacement;
@end
