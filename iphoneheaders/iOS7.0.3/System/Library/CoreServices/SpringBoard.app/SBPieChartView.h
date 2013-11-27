/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SBPieChartView : UIView {

	NSArray* _slices;
	float _valueTotal;
	float _radius;
	CGPoint _center;
	float _defaultRotation;

}
-(void)_updateMetrics;
-(void)_rotateContext;
-(void)_drawSlice:(id)arg1 atValue:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSlices:(id)arg1 ;
@end
