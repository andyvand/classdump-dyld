/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoKit/GeoKit-Structs.h>
#import <AppKit/NSView.h>

@class GEOWorldImageLayer, NSMutableArray, CALayer, NSTrackingArea;

@interface GEOWorldView : NSView {

	GEOWorldImageLayer* _dayMapLayer;
	GEOWorldImageLayer* _nightMapLayer;
	NSMutableArray* overlappingLayers;
	char enabled;
	char isDebugON;
	CALayer* primeMeridianLayer;
	CALayer* viewEquatorLayer;
	CALayer* copyrightLayer;
	unsigned char imageMonthOfTheYear;
	long long trackingRectTag;
	NSTrackingArea* mouseMoveTrackingArea;
	CGPoint previousMousePosition;
	double scaleFactor;

}

@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,setter=setNightMap:,nonatomic) char isNightMap; 
@property (assign,nonatomic) double globeRotation; 
@property (assign,setter=setDebugON:,nonatomic) char isDebugON; 
+(CGImageRef)_copyWorldMapDayImage;
-(void)_removeTrackingArea;
-(void)_addTrackingArea;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)isEnabled;
-(void)viewWillDraw;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(double)_scaleFactor;
-(id)makeBackingLayer;
-(void)mouseDragged:(id)arg1 ;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)mouseMoved:(id)arg1 ;
-(char)isNightMap;
-(void)addOverlappingLayer:(id)arg1 centeredInCoordinate:(CGPoint)arg2 ;
-(void)removeOverlappingLayer:(id)arg1 ;
-(id)currentMapLayer;
-(void)setNightMap:(char)arg1 ;
-(void)mouseDragged:(id)arg1 coordinate:(CGPoint)arg2 ;
-(CGSize)longLatSpanPerPoint;
-(void)repositionLayers;
-(CGPoint)viewPointFromCoordinate:(CGPoint)arg1 ;
-(void)mouseExited:(id)arg1 coordinate:(CGPoint)arg2 ;
-(void)timedMouseMoved:(id)arg1 coordinate:(CGPoint)arg2 ;
-(void)mouseUp:(id)arg1 coordinate:(CGPoint)arg2 ;
-(void)mouseDown:(id)arg1 coordinate:(CGPoint)arg2 ;
-(id)_createDayMapLayer;
-(void)_updateDayLayer;
-(CGImageRef)_copyCopyRightImageWithString:(id)arg1 textColor:(id)arg2 fontSize:(double)arg3 ;
-(id)dayMapLayer;
-(void)_setupCopyRightLayer;
-(void)setGlobeRotation:(double)arg1 ;
-(void)systemClockDidChangeNotificationHandler;
-(void)_repositionOverlappingLayers;
-(id)nightMapLayer;
-(double)globeRotation;
-(double)_normalizeLongitude:(double)arg1 ;
-(CGPoint)_coordinateFromLayerPoint:(CGPoint)arg1 ;
-(double)viewPrimeMeridian;
-(double)viewEquator;
-(CGPoint)coordinateFromViewPoint:(CGPoint)arg1 ;
-(void)_startMouseMoveTracking;
-(CGPoint)_coordinateLocationForEvent:(id)arg1 ;
-(void)mouseEntered:(id)arg1 coordinate:(CGPoint)arg2 ;
-(void)_stopMouseMoveTracking;
-(void)_setHiddenToNOForLayer:(id)arg1 ;
-(char)isDebugON;
-(void)setDebugON:(char)arg1 ;
@end

