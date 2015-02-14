/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFBaseLayer.h>

@class PDFBaseLayer;

@interface PDFTileLayer : PDFBaseLayer {

	int _gridX;
	int _gridY;
	char _rendering;
	PDFBaseLayer* _selectionLayer;
	PDFBaseLayer* _findOverlayLayer;
	char _wantsFindOverlayLayer;

}

@property (assign) int gridX;                                         //@synthesize gridX=_gridX - In the implementation block
@property (assign) int gridY;                                         //@synthesize gridY=_gridY - In the implementation block
@property (assign) char rendering;                                    //@synthesize rendering=_rendering - In the implementation block
@property (assign,nonatomic) char wantsFindOverlayLayer;              //@synthesize wantsFindOverlayLayer=_wantsFindOverlayLayer - In the implementation block
@property (readonly) PDFBaseLayer * selectionLayer; 
@property (readonly) PDFBaseLayer * findOverlayLayer; 
-(id)init;
-(void)setContentsScale:(double)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)setRendering:(char)arg1 ;
-(char)rendering;
-(PDFBaseLayer *)selectionLayer;
-(PDFBaseLayer *)findOverlayLayer;
-(void)setWantsFindOverlayLayer:(char)arg1 ;
-(int)gridX;
-(void)setGridX:(int)arg1 ;
-(int)gridY;
-(void)setGridY:(int)arg1 ;
-(char)wantsFindOverlayLayer;
@end

