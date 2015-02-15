/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, NSDate;

@interface TestDriveController : NSObject {

	NSTimer* _timeoutTimer;
	long long _currentState;
	/*^block*/id _testDriveTimeoutHandler;

}

@property (assign,nonatomic) long long currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (getter=isTestDriving,nonatomic,readonly) char testDriving; 
@property (assign,nonatomic) long long originBrowser; 
@property (assign,nonatomic) NSDate * startDate; 
@property (nonatomic,readonly) char hasImportedPasswordsForTestDrive; 
@property (nonatomic,copy) id testDriveTimeoutHandler;                             //@synthesize testDriveTimeoutHandler=_testDriveTimeoutHandler - In the implementation block
@property (assign,nonatomic) long long userDecision; 
+(id)sharedController;
-(void)setTestDriveTimeoutHandler:(id)arg1 ;
-(char)tryResumingTestDrive;
-(char)isTestDriving;
-(void)finishTestDriveKeepingImportedData:(char)arg1 defaultBrowserPromptingBehavior:(long long)arg2 ;
-(char)isTestDrivingBrowserMatchingBundleIdentifier:(id)arg1 ;
-(char)shouldStartTestDrive;
-(void)startTestDrive;
-(long long)userDecision;
-(long long)originBrowser;
-(long long)_originBrowserForBundleIdentifier:(id)arg1 ;
-(void)_rescheduleTimeoutTimerIfNeeded;
-(char)_defaultBrowserChangedDuringImport;
-(char)_canResumeTestDrive;
-(void)_resetTestDriveToHandleDefaultBrowserChangeDuringImport;
-(void)_resumeTestDrive;
-(void)_startTestDriveForBrowserBundle:(id)arg1 ;
-(void)setUserDecision:(long long)arg1 ;
-(void)_discardImportedData;
-(void)_keepImportedData;
-(void)setCurrentState:(long long)arg1 ;
-(long long)_originBrowserForBundle:(id)arg1 ;
-(void)_resetTestDrive;
-(void)_prepareForTestDrive;
-(void)_discardImportedDataRegardlessOfState;
-(void)_timeoutTimerFired:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)_browserDataImportingDidPartialImport:(id)arg1 ;
-(void)_browserDataImportingDidSucceed:(id)arg1 ;
-(void)_browserDataImportingDidPartiallySucceed:(id)arg1 ;
-(void)_browserDataImportingDidFail:(id)arg1 ;
-(void)_browserDataImportingDidCancel:(id)arg1 ;
-(void)setOriginBrowser:(long long)arg1 ;
-(void)_revealTestDriveMigrationUISoon;
-(void)_oneOrMoreImportsSucceeded;
-(char)hasImportedPasswordsForTestDrive;
-(id)testDriveTimeoutHandler;
-(NSDate *)startDate;
-(id)init;
-(long long)currentState;
@end

