/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CATextLayer.h>

@interface CASmoothedTextLayer : CATextLayer

@property (assign) unsigned fontSmoothingStyle; 
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg1 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(unsigned)fontSmoothingStyle;
-(void)setFontSmoothingStyle:(unsigned)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(CGColorSpaceRef)_retainColorSpace;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(void)didChangeValueForKey:(id)arg1 ;
@end

