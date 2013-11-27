/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATPointPickerView.h>
#import <assistivetouchd/SCATGridDelegate.h>

@class SCATGridView, NSIndexPath;

@interface SCATGridPointPickerView : SCATPointPickerView <SCATGridDelegate> {

	SCATGridView* _grid;
	NSIndexPath* _currentSelectionPath;

}

@property (nonatomic,retain) NSIndexPath * currentSelectionPath;                               //@synthesize currentSelectionPath=_currentSelectionPath - In the implementation block
@property (nonatomic,readonly) unsigned numberOfRows; 
@property (nonatomic,readonly) unsigned numberOfColumns; 
@property (assign,getter=isCenterPointVisible,nonatomic) BOOL centerPointVisible; 
-(id)centerPointImageForGrid:(id)arg1 ;
-(void)setCenterPointVisible:(BOOL)arg1 ;
-(BOOL)isCenterPointVisible;
-(void)_updateGridProperties;
-(CGRect)_availableFrameForCenterPointAtSelectionPath:(id)arg1 ;
-(CGRect)frameForSelectionPath:(id)arg1 ;
-(id)currentSelectionPath;
-(CGRect)frameForCenterPointAtSelectionPath:(id)arg1 ;
-(CGPathRef)pathForCenterPointAtSelectionPath:(id)arg1 ;
-(void)setCurrentSelectionPath:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(unsigned)numberOfColumns;
-(unsigned)numberOfRows;
@end
