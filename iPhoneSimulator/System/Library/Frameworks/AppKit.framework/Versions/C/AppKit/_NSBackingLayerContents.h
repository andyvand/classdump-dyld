/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class CALayer;

@interface _NSBackingLayerContents : NSObject {

	CALayer* _backingLayer;
	CALayer* _contentLayer;

}

@property (assign) CALayer * backingLayer; 
@property (readonly) CALayer * contentLayer; 
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)display;
-(void)update;
-(void*)CA_copyRenderValue;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CGRect)NS_activeVisibleRect;
-(char)NS_canDrawLayer:(id)arg1 ;
-(Class)tileClass;
-(char)NS_hasPrefetchedContentsForRect:(CGRect)arg1 ;
-(char)NS_hasPartialPrefetchedContentsForRect:(CGRect)arg1 ;
-(CALayer *)contentLayer;
-(CALayer *)backingLayer;
-(void)setBackingLayer:(CALayer *)arg1 ;
-(void)invalidateRect:(CGRect)arg1 ;
-(void)XXNS_tiledLayer:(id)arg1 drawTile:(id)arg2 inContext:(CGContextRef)arg3 ;
-(void)CA_prepareRenderValue;
@end

