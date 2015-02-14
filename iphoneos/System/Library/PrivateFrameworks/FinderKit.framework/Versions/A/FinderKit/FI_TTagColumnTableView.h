/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TTableView.h>

@class FI_TTableViewShrinkToFitController;

@interface FI_TTagColumnTableView : FI_TTableView {

	FI_TTableViewShrinkToFitController* _stfController;

}
-(void)awakeCommon;
-(id)tagColumnController;
-(void)aboutToTearDown;
-(id)stfEditorController_FI;
-(void)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2 ;
-(char)canDragRowsWithIndexes:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

