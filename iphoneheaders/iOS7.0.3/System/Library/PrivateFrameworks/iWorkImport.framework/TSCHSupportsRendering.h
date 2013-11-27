/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHSupportsRendering <NSObject>
@required
-(float)viewScale;
-(id)chartLayout;
-(CGRect*)outerShadowFrame;
-(CGRect*)convertUnscaledToBoundsRect:(CGRect)arg1;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2;
-(BOOL)isDrawingIntoPDF;
-(BOOL)shouldShowLegendHighlight;
-(id)commandController;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderValueIndexSetForSeries:(unsigned)arg1;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(void)setupForDrawingInLayer:(id)arg1 context:(CGContextRef)arg2;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned)arg1;
-(BOOL)shadowsEnabled;
-(id)geometry;
-(void)drawInContext:(CGContextRef)arg1;
@end
