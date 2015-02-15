/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:39:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Grapher.app/Contents/MacOS/Grapher
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Grapher/Grapher-Structs.h>
#import <Grapher/CPModalDialog.h>

@class GAxis;

@interface CPAxisDialog : CPModalDialog {

	id mDecadeTab;
	id mAxisUseTickSpacing;
	id mAxisMajorTick;
	id mAxisMajorUnitPopup;
	id mAxisMinorTick;
	id mAxisPosition;
	id mAxisCustomPositionTab;
	id mRangeTab;
	id mMinText;
	id mMaxText;
	id mExpMinText;
	id mExpMaxText;
	GAxis* mAxis;
	unsigned long long mDim;

}
-(void)dialogDidOK;
-(char)dialogShouldOK;
-(id)positionExponentTab:(unsigned long long)arg1 ;
-(id)positionValue:(unsigned long long)arg1 ;
-(id)positionExponentValue:(unsigned long long)arg1 ;
-(id)positionName:(unsigned long long)arg1 ;
-(char)canEditRange;
-(id)otherAxis:(unsigned long long)arg1 ;
-(char)newValue:(double*)arg1 withText:(id)arg2 ;
-(char)newRange:(GRange*)arg1 withMin:(id)arg2 max:(id)arg3 ;
-(void)changeRangeWithMin:(id)arg1 max:(id)arg2 ;
-(void)showWithAxis:(id)arg1 viewController:(id)arg2 ;
-(void)update:(id)arg1 ;
@end
