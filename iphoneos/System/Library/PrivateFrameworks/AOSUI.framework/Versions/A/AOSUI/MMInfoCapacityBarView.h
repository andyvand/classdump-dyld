/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray, CALayer, NSArray, NSLayoutConstraint, NSPopover, MMInfoCapacityPopoverViewController;

@interface MMInfoCapacityBarView : NSView {

	unsigned long long _capacity;
	NSMutableArray* _categories;
	CALayer* _backgroundLayer;
	CALayer* _foregroundLayer;
	CALayer* _maskLayer;
	CALayer* _itemsContainerLayer;
	NSArray* _itemTrackingAreas;
	NSLayoutConstraint* _minimumWidthLayoutConstraint;
	NSLayoutConstraint* _requiredHeightLayoutConstraint;
	NSPopover* _toolTipPopover;
	MMInfoCapacityPopoverViewController* _toolTipPopoverViewController;

}

@property (assign) unsigned long long capacity;                                                     //@synthesize capacity=_capacity - In the implementation block
@property (retain) NSMutableArray * categories;                                                     //@synthesize categories=_categories - In the implementation block
@property (retain) CALayer * backgroundLayer;                                                       //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (retain) CALayer * foregroundLayer;                                                       //@synthesize foregroundLayer=_foregroundLayer - In the implementation block
@property (retain) CALayer * maskLayer;                                                             //@synthesize maskLayer=_maskLayer - In the implementation block
@property (retain) CALayer * itemsContainerLayer;                                                   //@synthesize itemsContainerLayer=_itemsContainerLayer - In the implementation block
@property (retain) NSArray * itemTrackingAreas;                                                     //@synthesize itemTrackingAreas=_itemTrackingAreas - In the implementation block
@property (retain) NSLayoutConstraint * minimumWidthLayoutConstraint;                               //@synthesize minimumWidthLayoutConstraint=_minimumWidthLayoutConstraint - In the implementation block
@property (retain) NSLayoutConstraint * requiredHeightLayoutConstraint;                             //@synthesize requiredHeightLayoutConstraint=_requiredHeightLayoutConstraint - In the implementation block
@property (retain) NSPopover * toolTipPopover;                                                      //@synthesize toolTipPopover=_toolTipPopover - In the implementation block
@property (retain) MMInfoCapacityPopoverViewController * toolTipPopoverViewController;              //@synthesize toolTipPopoverViewController=_toolTipPopoverViewController - In the implementation block
-(void)setMaskLayer:(CALayer *)arg1 ;
-(void)setItemsContainerLayer:(CALayer *)arg1 ;
-(CALayer *)itemsContainerLayer;
-(CALayer *)maskLayer;
-(void)createPopover;
-(void)updateLabels;
-(void)initCategories;
-(void)setMinimumWidthLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)minimumWidthLayoutConstraint;
-(void)setRequiredHeightLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)requiredHeightLayoutConstraint;
-(NSArray *)itemTrackingAreas;
-(CGRect)rectForItem:(id)arg1 ;
-(void)setItemTrackingAreas:(NSArray *)arg1 ;
-(MMInfoCapacityPopoverViewController *)toolTipPopoverViewController;
-(NSPopover *)toolTipPopover;
-(void)setToolTipPopoverViewController:(MMInfoCapacityPopoverViewController *)arg1 ;
-(void)setToolTipPopover:(NSPopover *)arg1 ;
-(void)resetValues;
-(void)setValue:(unsigned long long)arg1 forCategory:(long long)arg2 ;
-(void)setCapacity:(unsigned long long)arg1 ;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)setForegroundLayer:(CALayer *)arg1 ;
-(CALayer *)foregroundLayer;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)layout;
-(void)updateLayer;
-(char)wantsUpdateLayer;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)awakeFromNib;
-(void)updateTrackingAreas;
-(unsigned long long)capacity;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(NSMutableArray *)categories;
-(void)setCategories:(NSMutableArray *)arg1 ;
@end
