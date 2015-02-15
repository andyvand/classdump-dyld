/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString * renderMode; 
@property (assign) char invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) double offset; 
@property (assign) double sharpness; 
@property (assign) double lineWidth; 
+(id)CA_attributes;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg1 ;
-(NSString *)renderMode;
-(void)setRenderMode:(NSString *)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(char)invertsShape;
-(void)_colorSpaceDidChange;
-(unsigned)_renderImageCopyFlags;
-(void)setInvertsShape:(char)arg1 ;
-(double)offset;
-(void)setSharpness:(double)arg1 ;
-(double)sharpness;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
@end

