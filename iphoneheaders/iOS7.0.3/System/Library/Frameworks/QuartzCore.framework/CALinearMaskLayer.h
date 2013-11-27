/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALinearMaskLayer : CALayer

@property (assign) CGColorRef foregroundColor; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)drawInLinearMaskContext:(CALinearMaskContextRef)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
