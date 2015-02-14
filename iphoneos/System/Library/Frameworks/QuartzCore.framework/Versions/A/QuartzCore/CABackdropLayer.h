/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) char enabled; 
@property (copy) NSString * groupName; 
@property (assign) double scale; 
@property (assign) CGRect backdropRect; 
@property (assign) double marginWidth; 
@property (assign) char disablesOccludedBackdropBlurs; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
@property (assign) double bleedAmount; 
@property (assign) char windowServerAware; 
+(id)CA_attributes;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
+(char)_shouldFinalizeOnMainThread;
+(void)initialize;
+(id)defaultValueForKey:(id)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(NSString *)statisticsType;
-(CGRect)backdropRect;
-(double)bleedAmount;
-(char)windowServerAware;
-(char)disablesOccludedBackdropBlurs;
-(double)statisticsInterval;
-(id)statisticsValues;
-(void)setBackdropRect:(CGRect)arg1 ;
-(void)setDisablesOccludedBackdropBlurs:(char)arg1 ;
-(void)setStatisticsType:(NSString *)arg1 ;
-(void)setStatisticsInterval:(double)arg1 ;
-(void)setBleedAmount:(double)arg1 ;
-(NSString *)groupName;
-(double)scale;
-(double)marginWidth;
-(void)setMarginWidth:(double)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setWindowServerAware:(char)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
@end

