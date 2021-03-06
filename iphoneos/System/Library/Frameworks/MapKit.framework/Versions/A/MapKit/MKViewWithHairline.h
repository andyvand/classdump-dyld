/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface MKViewWithHairline : NSView {

	char _topHairlineHidden;
	char _bottomHairlineHidden;
	NSColor* _hairlineColor;
	double _leftHairlineInset;

}

@property (nonatomic,retain) NSColor * hairlineColor;                                              //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) double leftHairlineInset;                                             //@synthesize leftHairlineInset=_leftHairlineInset - In the implementation block
@property (assign,getter=isTopHairlineHidden,nonatomic) char topHairlineHidden;                    //@synthesize topHairlineHidden=_topHairlineHidden - In the implementation block
@property (assign,getter=isBottomHairlineHidden,nonatomic) char bottomHairlineHidden;              //@synthesize bottomHairlineHidden=_bottomHairlineHidden - In the implementation block
-(char)isBottomHairlineHidden;
-(void)setBottomHairlineHidden:(char)arg1 ;
-(double)leftHairlineInset;
-(void)setLeftHairlineInset:(double)arg1 ;
-(NSColor *)hairlineColor;
-(void)setHairlineColor:(NSColor *)arg1 ;
-(char)isTopHairlineHidden;
-(void)setTopHairlineHidden:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_commonInit;
@end

