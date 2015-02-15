/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@interface QCSCN_EdgeAntialiasingOptions : NSObject {

	id _reserved;

}

@property (getter=isEnabled) char enabled; 
@property (assign) double trimFactor; 
@property (assign) double minimumEdgeLength; 
@property (assign) double minimumEdgeAngle; 
@property (assign) double minimumTriangleArea; 
@property (assign) char debugMode; 
-(id)init;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParent:(id)arg1 ;
-(double)trimFactor;
-(void)setTrimFactor:(double)arg1 ;
-(double)minimumEdgeLength;
-(void)setMinimumEdgeLength:(double)arg1 ;
-(double)minimumEdgeAngle;
-(void)setMinimumEdgeAngle:(double)arg1 ;
-(double)minimumTriangleArea;
-(void)setMinimumTriangleArea:(double)arg1 ;
-(char)debugMode;
-(void)setDebugMode:(char)arg1 ;
@end
