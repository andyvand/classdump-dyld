/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>

@protocol MKScaleViewDelegate;
@class NSCache, NSColor, NSDictionary;

@interface MKScaleView : NSView {

	char _useMetric;
	char _useYardsForShortDistances;
	char _wasDragged;
	char _wasClickedInside;
	CGPoint _clickPosition;
	double _magicNumbers[3];
	double _segmentLength;
	NSCache* _cache;
	char _drawsBlackOnWhite;
	double _distanceInMeters;
	id<MKScaleViewDelegate> scaleDelegate;

}

@property (assign,nonatomic) double distanceInMeters;                                   //@synthesize distanceInMeters=_distanceInMeters - In the implementation block
@property (assign,nonatomic,__weak) id<MKScaleViewDelegate> scaleDelegate; 
@property (nonatomic,readonly) double segmentLength; 
@property (assign,nonatomic) char drawsBlackOnWhite;                                    //@synthesize drawsBlackOnWhite=_drawsBlackOnWhite - In the implementation block
@property (nonatomic,readonly) NSCache * cache; 
@property (nonatomic,readonly) NSColor * innerColor; 
@property (nonatomic,readonly) NSColor * outerColor; 
@property (nonatomic,readonly) NSDictionary * legendAttributes; 
@property (nonatomic,readonly) NSDictionary * darkLegendAttributes; 
+(id)niceSegmentWithLowerBound:(double)arg1 useMetricSystem:(char)arg2 useYardsForShortDistances:(char)arg3 ;
+(double)_chooseUnitForSegment:(id)arg1 mileageContext:(char)arg2 useMetricSystem:(char)arg3 useYardsForShortDistances:(char)arg4 ;
+(double)niceDistanceFromDistance:(double)arg1 ;
+(id)niceMileageSegmentWithLowerBound:(double)arg1 useMetricSystem:(char)arg2 ;
+(id)mileageSegmentWithDistance:(double)arg1 useMetricSystem:(char)arg2 ;
-(NSColor *)outerColor;
-(void)setDrawsBlackOnWhite:(char)arg1 ;
-(void)setScaleDelegate:(id<MKScaleViewDelegate>)arg1 ;
-(void)setDistanceInMeters:(double)arg1 ;
-(void)updateHighlight;
-(void)setupLocale;
-(void)localWasUpdated;
-(char)drawsBlackOnWhite;
-(double)distanceInMeters;
-(CGSize)sizeForLegendString:(id)arg1 ;
-(NSDictionary *)legendAttributes;
-(NSDictionary *)darkLegendAttributes;
-(CGRect)trackingRect;
-(id<MKScaleViewDelegate>)scaleDelegate;
-(id)_legendStringForDistanceString:(id)arg1 index:(int)arg2 ;
-(double)segmentLength;
-(NSColor *)innerColor;
-(NSCache *)cache;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)fittingSize;
-(id)hitTest:(CGPoint)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
@end

