/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization; 
@property (assign) int subdivisionSteps; 
+(id)meshTransform;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(CAMeshVertex)arg2 ;
-(void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(CAMeshFace)arg2 ;
-(void)setDepthNormalization:(NSString *)arg1 ;
-(void)setSubdivisionSteps:(int)arg1 ;
-(void)removeVertexAtIndex:(unsigned long long)arg1 ;
-(void)addFace:(CAMeshFace)arg1 ;
-(void)removeFaceAtIndex:(unsigned long long)arg1 ;
-(void)addVertex:(CAMeshVertex)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

