/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class CUIThemeFacet;

@interface CUIMaskedFacetLayer : CALayer {

	CGPathRef _maskPath;
	CUIThemeFacet* _facet;
	long long _drawingLayer;

}

@property (assign) CGPathRef maskPath;                  //@synthesize maskPath=_maskPath - In the implementation block
@property (assign) CUIThemeFacet * facet;               //@synthesize facet=_facet - In the implementation block
@property (assign) long long drawingLayer;              //@synthesize drawingLayer=_drawingLayer - In the implementation block
-(void)setMaskPath:(CGPathRef)arg1 ;
-(void)setDrawingLayer:(long long)arg1 ;
-(void)setFacet:(CUIThemeFacet *)arg1 ;
-(void)updateRenditionKey:(id)arg1 getFocus:(char*)arg2 userInfo:(id)arg3 ;
-(CGPathRef)maskPath;
-(CUIThemeFacet *)facet;
-(long long)drawingLayer;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

