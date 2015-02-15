/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPlugInContext.h>

@interface QCPlugIn : NSObject <QCPlugInContext> {

	void* _private;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)attributes;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(char)loadPlugInAtPath:(id)arg1 ;
+(void)loadAndRegisterAllPlugIns;
+(int)executionMode;
+(id)plugInKeys;
+(id)attributesForPropertyPortWithKey:(id)arg1 ;
+(id)sortedPropertyPortKeys;
+(int)timeMode;
+(Class)classForPlugInIdentifier:(id)arg1 ;
+(void)registerPlugInClass:(Class)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(CGRect)bounds;
-(id)userInfo;
-(CGColorSpaceRef)colorSpace;
-(CGLContextObject*)CGLContextObj;
-(void)logMessage:(id)arg1 ;
-(id)patch;
-(id)valueForInputKey:(id)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(void)_setPatch:(id)arg1 ;
-(double)executionTimeForContext:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3 ;
-(char)startExecution:(id)arg1 ;
-(void)enableExecution:(id)arg1 ;
-(double)nextRecommendedExecutionTime:(id)arg1 forTime:(double)arg2 withArguments:(id)arg3 ;
-(char)execute:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3 ;
-(void)disableExecution:(id)arg1 ;
-(void)stopExecution:(id)arg1 ;
-(id)serializedValueForKey:(id)arg1 ;
-(void)setSerializedValue:(id)arg1 forKey:(id)arg2 ;
-(id)_valueForInputPort:(id)arg1 ;
-(char)_setValue:(id)arg1 forOutputPort:(id)arg2 ;
-(char)didValueForInputKeyChange:(id)arg1 ;
-(char)setValue:(id)arg1 forOutputKey:(id)arg2 ;
-(void)addInputPortWithType:(id)arg1 forKey:(id)arg2 withAttributes:(id)arg3 ;
-(void)removeInputPortForKey:(id)arg1 ;
-(void)addOutputPortWithType:(id)arg1 forKey:(id)arg2 withAttributes:(id)arg3 ;
-(void)removeOutputPortForKey:(id)arg1 ;
-(id)_portFromSelector:(SEL)arg1 ;
-(id)compositionURL;
-(id)outputImageProviderFromBufferWithPixelFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 baseAddress:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 releaseCallback:(/*function pointer*/void*)arg6 releaseContext:(void*)arg7 colorSpace:(CGColorSpaceRef)arg8 shouldColorMatch:(char)arg9 ;
-(id)outputImageProviderFromTextureWithPixelFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 name:(unsigned)arg4 flipped:(char)arg5 releaseCallback:(/*function pointer*/void*)arg6 releaseContext:(void*)arg7 colorSpace:(CGColorSpaceRef)arg8 shouldColorMatch:(char)arg9 ;
-(id)createViewController;
@end

