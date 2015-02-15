/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property (assign) NSObject*<PFUbiquityBaselineRecoveryOperationDelegate> delegate; 
-(id)retainedDelegate;
-(char)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3 ;
-(char)hasCurrentBaseline;
-(char)conflictsExistForBaseline:(id)arg1 ;
-(char)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2 ;
-(char)shouldReplaceLocalStoreWithBaseline:(id)arg1 ;
-(char)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2 ;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)delegate;
-(void)main;
@end

