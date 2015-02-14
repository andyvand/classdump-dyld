/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBrowserCell.h>

@class NSView, NSNavNode, NSButtonCell;

@interface NSNavBrowserCell : NSBrowserCell {

	NSView* _controlView;
	NSNavNode* _node;
	struct {
		unsigned isDirectory : 1;
		unsigned isFauxDisabled : 1;
		unsigned isTrackingMouse : 1;
		unsigned _reserved : 29;
	}  _nbcFlags;
	NSButtonCell* _ejectButtonCell;

}
+(char)prefersTrackingUntilMouseUp;
+(CGSize)iconSize;
-(id)init;
-(void)dealloc;
-(id)accessibilityAttributeNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)controlView;
-(void)setControlView:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(unsigned long long)_effectiveFocusRingType;
-(void)setHighlighted:(char)arg1 ;
-(id)_currentBranchImageWithView:(id)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)_drawHighlightWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(long long)_typesetterBehavior;
-(void)setDisplayState:(int)arg1 ;
-(CGRect)ejectButtonFrameForCellFrame:(CGRect)arg1 ;
-(id)node;
-(char)isFauxDisabled;
-(id)accessibilityFilenameAttribute;
-(id)_imageForEjectType:(int)arg1 ;
-(void)_invalidateEjectButtonCellWithEvent:(id)arg1 ;
-(void)setNode:(id)arg1 isDirectory:(char)arg2 displayState:(int)arg3 ;
-(char)isDirectory;
-(CGRect)clickableContentRectForBounds:(CGRect)arg1 ;
-(CGRect)_branchImageRectForBounds:(CGRect)arg1 ;
-(char)accessibilityIsFilenameAttributeSettable;
-(id)accessibilityURLAttribute;
-(char)accessibilityIsURLAttributeSettable;
-(void)setShowEjectButton:(char)arg1 ;
-(id)ejectButtonCell;
-(void)addTrackingAreasForView:(id)arg1 inFrame:(CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(CGPoint)arg4 ;
@end

