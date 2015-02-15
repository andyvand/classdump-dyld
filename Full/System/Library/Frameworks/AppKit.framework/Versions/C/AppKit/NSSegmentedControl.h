/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>

@interface NSSegmentedControl : NSControl {

	long long _reserved1;
	long long _reserved2;
	long long _reserved3;
	long long _reserved4;

}

@property (assign) long long segmentCount; 
@property (assign) long long selectedSegment; 
@property (assign) long long segmentStyle; 
+(void)initialize;
-(void)_mk_setItems:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isFlipped;
-(NSEdgeInsets)alignmentRectInsets;
-(void)_windowChangedKeyState;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)_setWindow:(id)arg1 ;
-(CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
-(double)baselineOffsetFromBottom;
-(id)_highlightColorForCell:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(long long)indexOfSelectedItem;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)setImage:(id)arg1 forSegment:(long long)arg2 ;
-(void)setSelectedSegment:(long long)arg1 ;
-(long long)selectedSegment;
-(void)viewDidEndLiveResize;
-(void)setSegmentCount:(long long)arg1 ;
-(void)setWidth:(double)arg1 forSegment:(long long)arg2 ;
-(void)setMenu:(id)arg1 forSegment:(long long)arg2 ;
-(void)setSegmentStyle:(long long)arg1 ;
-(void)setEnabled:(char)arg1 forSegment:(long long)arg2 ;
-(void)setSelected:(char)arg1 forSegment:(long long)arg2 ;
-(void)_updateMenuUniquing;
-(long long)segmentCount;
-(id)menuForSegment:(long long)arg1 ;
-(char)isEnabledForSegment:(long long)arg1 ;
-(long long)segmentStyle;
-(unsigned long long)imageScalingForSegment:(long long)arg1 ;
-(char)isSelectedForSegment:(long long)arg1 ;
-(char)selectSegmentWithTag:(long long)arg1 ;
-(double)widthForSegment:(long long)arg1 ;
-(id)imageForSegment:(long long)arg1 ;
-(void)setAlternateImage:(id)arg1 forSegment:(long long)arg2 ;
-(id)alternateImageForSegment:(long long)arg1 ;
-(void)setLabel:(id)arg1 forSegment:(long long)arg2 ;
-(void)setImageScaling:(unsigned long long)arg1 forSegment:(long long)arg2 ;
-(id)labelForSegment:(long long)arg1 ;
-(char)_showsBadgeForSegment:(long long)arg1 ;
-(long long)_badgeValueForSegment:(long long)arg1 ;
-(void)_updateHeightToReflectNewWindowStyleIfNecessary;
-(void)_updateLayerMasksToBoundsFromView;
-(void)_setShowsBadge:(char)arg1 forSegment:(long long)arg2 ;
-(void)_setBadgeValue:(long long)arg1 forSegment:(long long)arg2 ;
-(id)ns_widgetType;
@end

