/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Shortcut/Shortcut-Structs.h>
@class NSMutableArray, SCTGRL, SCTGRLIndex, NSArray, NSTimer, NSWindow, SCTWindowGRL;

@interface SCTGRLListAnalyzer : NSObject {

	NSMutableArray* mGRLs;
	SCTGRL* mTrigger;
	SCTGRLIndex* mGRLIndex;
	SCTGRL* mReconfiguringGRL;
	long long mCurrentIndex;
	SCTGRL* mCurrentGRL;
	NSArray* mCurrentStates;
	id mCurrentState;
	id mCurrentInitialState;
	NSTimer* mAnalysisTimer;
	NSWindow* mTargetWindow;
	SCTWindowGRL* mTargetWindowGRL;
	NSWindow* mCurrentWindow;
	char mFirstTimeWindowSeen;
	char mCurrentWindowWasOpened;
	int mModalCount;
	NSMutableArray* mViewsAdded;
	OpaqueEventHandlerRefRef mOtherAppLaunchHandler;
	id mCompletionTarget;
	SEL mCompletionSelector;

}
+(id)activeListAnalyzer;
+(void)pushActiveListAnalyzer:(id)arg1 ;
+(void)popActiveListAnalyzer;
+(char)shouldAnalyzeGRL:(id)arg1 ;
+(char)setTitleWhitelist:(id)arg1 ;
-(void)kickYourSelfIntoMotion;
-(id)initWithGRLs:(id)arg1 withTrigger:(id)arg2 withIndex:(id)arg3 withWindow:(id)arg4 withWindowGRL:(id)arg5 ;
-(void)analysisDidFinish:(id)arg1 ;
-(void)analyzeGRLsAndNotify:(id)arg1 selector:(SEL)arg2 ;
-(void)analyzeNextGRL:(id)arg1 ;
-(void)currentAnalysisDidNotCreateNewWindow:(id)arg1 ;
-(void)currentAnalysisDidCreateNewWindow:(id)arg1 ;
-(void)currentGRLResolved:(id)arg1 ;
-(void)installGRLPerformCallbacks;
-(void)currentGRLResolvedReconfiguredWindow:(id)arg1 ;
-(void)analyzeReconfiguredWindow:(id)arg1 ;
-(void)stripReconfiguringGRLs:(id)arg1 ;
-(void)analyzeReconfiguredWindowFinished:(id)arg1 ;
-(void)analyzeCurrentGRLReconfiguredWindow;
-(void)setCurrentWindow:(id)arg1 ;
-(void)analyzeCurrentWindow:(id)arg1 ;
-(void)removeGRLPerformCallbacks;
-(void)handleReconfiguredWindow;
-(void)analyzeRevealedGRLs:(id)arg1 withWindow:(id)arg2 withWindowGRL:(id)arg3 ;
-(void)addViewToViewsAdded:(id)arg1 ;
-(void)closeOpenedWindow:(id)arg1 ;
-(void)handleAnalyzeNextGRL:(id)arg1 ;
-(void)analyzeCurrentGRL:(id)arg1 ;
-(void)increaseModalCount;
-(void)decreaseModalCount;
-(void)currentAnalysisGRLDidPerform:(id)arg1 ;
-(void)currentWindowContentFrameDidChange:(id)arg1 ;
-(void)currentWindowViewHierarchyChanged:(id)arg1 ;
-(void)analyzeNextGRLAfterDelay:(double)arg1 ;
-(void)dealloc;
-(id)currentWindow;
@end

