/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:39:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Grapher.app/Contents/MacOS/Grapher
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Grapher/Grapher-Structs.h>
#import <Grapher/CPFrameLimitDialog.h>

@class EQCaption, NSTabView, NSControl;

@interface CPCartesianScale2DDialog : CPFrameLimitDialog {

	EQCaption* mAbscissa2DCaption;
	NSTabView* mAbscissa2DTabView;
	id mAbscissa2DLinMin;
	id mAbscissa2DLinMax;
	id mAbscissa2DExpMin;
	id mAbscissa2DExpMax;
	id mAbscissaScaleUnit;
	id mAbscissaScaleLength;
	id mAbscissaScaleLengthPopup;
	EQCaption* mOrdinate2DCaption;
	NSTabView* mOrdinate2DTabView;
	id mOrdinate2DLinMin;
	id mOrdinate2DLinMax;
	id mOrdinate2DExpMin;
	id mOrdinate2DExpMax;
	id mOrdinateScaleUnit;
	id mOrdinateScaleLength;
	id mOrdinateScaleLengthPopup;
	NSControl* mAbscissa2DMin;
	NSControl* mAbscissa2DMax;
	NSControl* mOrdinate2DMin;
	NSControl* mOrdinate2DMax;
	double mAbscissaLength;
	double mOrdinateLength;

}
-(void)dialogWillShow;
-(char)dialogShouldOK;
-(GRange)xRange;
-(GRange)yRange;
-(void)tryToUpdateScaleWithSender:(id)arg1 length:(double)arg2 :(id)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(id)arg7 ;
-(char)specificValuesChangeBounds;
-(void)saveSpecificValues;
-(void)awakeFromNib;
-(void)update:(id)arg1 ;
@end
