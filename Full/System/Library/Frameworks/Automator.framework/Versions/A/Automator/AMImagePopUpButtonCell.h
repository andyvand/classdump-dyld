/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSPopUpButtonCell.h>

@class NSButtonCell, NSImage;

@interface AMImagePopUpButtonCell : NSPopUpButtonCell {

	NSButtonCell* _buttonCell;
	NSImage* _iconImage;
	CGSize _iconSize;
	double _widthRatio;
	NSImage* _arrowImage;
	struct {
		unsigned alwaysShowMenu : 1;
		unsigned usedInToolbar : 1;
		unsigned RESERVED : 30;
	}  _amipubcFlags;

}
-(void)setUsedInToolbar:(char)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(id)arrowImage;
-(void)setArrowImage:(id)arg1 ;
-(id)iconImage;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)performClick:(id)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setControlSize:(unsigned long long)arg1 ;
-(void)highlight:(char)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
@end

