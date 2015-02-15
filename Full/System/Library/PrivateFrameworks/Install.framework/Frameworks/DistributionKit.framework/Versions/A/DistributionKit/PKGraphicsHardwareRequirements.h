/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DistributionKit/DistributionKit-Structs.h>
#import <DistributionKit/PKPredicateRequirements.h>

@class NSPredicate, NSDictionary;

@interface PKGraphicsHardwareRequirements : PKPredicateRequirements {

	NSPredicate* _requiredGLPredicate;
	NSPredicate* _requiredCLPredicate;
	char _requireSingleDevice;
	NSDictionary* _symbolTable;

}

@property (retain) NSPredicate * requiredGLPredicate;              //@synthesize requiredGLPredicate=_requiredGLPredicate - In the implementation block
@property (retain) NSPredicate * requiredCLPredicate;              //@synthesize requiredCLPredicate=_requiredCLPredicate - In the implementation block
@property (assign) char requireSingleDevice;                       //@synthesize requireSingleDevice=_requireSingleDevice - In the implementation block
-(char)areRequirementsMet;
-(void)setRequiredGLPredicate:(NSPredicate *)arg1 ;
-(void)setRequiredCLPredicate:(NSPredicate *)arg1 ;
-(void)setRequireSingleDevice:(char)arg1 ;
-(NSPredicate *)requiredGLPredicate;
-(NSPredicate *)requiredCLPredicate;
-(void)_loadSymbolicConstants;
-(char)_evaluateForOpenGLVersion:(long long)arg1 pixelFormatAttributes:(int*)arg2 ;
-(char)requireSingleDevice;
-(char)_evaluateForOpenCLOnly;
-(CGLContextObjectRef)_newGLContextWithPixelFormatAttributes:(int*)arg1 numberOfDevices:(int*)arg2 ;
-(void)dealloc;
@end

