/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DistributionKit/PKPredicateRequirements.h>

@class NSPredicate;

@interface PKBasicHardwareRequirements : PKPredicateRequirements {

	NSPredicate* _requiredHardwarePredicate;

}

@property (retain) NSPredicate * requiredHardwarePredicate;              //@synthesize requiredHardwarePredicate=_requiredHardwarePredicate - In the implementation block
-(char)areRequirementsMet;
-(void)setRequiredHardwarePredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)requiredHardwarePredicate;
-(void)dealloc;
@end

