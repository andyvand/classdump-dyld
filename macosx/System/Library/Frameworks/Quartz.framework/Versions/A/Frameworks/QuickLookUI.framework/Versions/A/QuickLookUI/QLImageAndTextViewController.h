/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSTextField, NSView, QLImageAndTextPropertySlice, NSMutableArray, NSLayoutConstraint, NSArray;

@interface QLImageAndTextViewController : NSViewController {

	NSTextField* _titleField;
	NSTextField* _subTitleField;
	NSView* _iconView;
	QLImageAndTextPropertySlice* _propertySlice1;
	NSMutableArray* _propertySlices;
	NSView* _slicesContainerView;
	NSLayoutConstraint* _lastSliceToBottomConstraint;

}

@property (retain) NSTextField * titleField;                                                //@synthesize titleField=_titleField - In the implementation block
@property (retain) NSTextField * subTitleField;                                             //@synthesize subTitleField=_subTitleField - In the implementation block
@property (retain) NSView * iconView;                                                       //@synthesize iconView=_iconView - In the implementation block
@property (readonly) NSArray * propertySlices;                                              //@synthesize propertySlices=_propertySlices - In the implementation block
@property (nonatomic,retain) NSView * slicesContainerView;                                  //@synthesize slicesContainerView=_slicesContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lastSliceToBottomConstraint;              //@synthesize lastSliceToBottomConstraint=_lastSliceToBottomConstraint - In the implementation block
@property (nonatomic,retain) QLImageAndTextPropertySlice * propertySlice1;                  //@synthesize propertySlice1=_propertySlice1 - In the implementation block
-(NSTextField *)subTitleField;
-(NSArray *)propertySlices;
-(void)addPropertySlice:(id)arg1 ;
-(NSLayoutConstraint *)lastSliceToBottomConstraint;
-(void)setLastSliceToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSubTitleField:(NSTextField *)arg1 ;
-(void)setPropertySlice1:(QLImageAndTextPropertySlice *)arg1 ;
-(void)setSlicesContainerView:(NSView *)arg1 ;
-(QLImageAndTextPropertySlice *)propertySlice1;
-(NSView *)slicesContainerView;
-(NSTextField *)titleField;
-(void)setTitleField:(NSTextField *)arg1 ;
-(void)dealloc;
-(NSView *)iconView;
-(void)awakeFromNib;
-(void)setIconView:(NSView *)arg1 ;
@end

