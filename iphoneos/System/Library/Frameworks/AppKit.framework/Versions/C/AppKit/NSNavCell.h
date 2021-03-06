/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageTextFieldCell.h>

@class NSButtonCell;

@interface NSNavCell : NSImageTextFieldCell {

	NSButtonCell* _ejectButtonCell;

}
+(char)prefersTrackingUntilMouseUp;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setControlView:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setHighlighted:(char)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(CGRect)ejectButtonFrameForCellFrame:(CGRect)arg1 ;
-(id)_imageForEjectType:(int)arg1 ;
-(void)_invalidateEjectButtonCellWithEvent:(id)arg1 ;
-(void)setShowEjectButton:(char)arg1 ;
-(id)ejectButtonCell;
-(void)addTrackingAreasForView:(id)arg1 inFrame:(CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(CGPoint)arg4 ;
@end

