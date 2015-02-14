/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MFSnippetCalculatorDelegate.h>

@class NSMutableSet, NSMutableDictionary, MFSnippetCalculator, NSOperationQueue, NSString;

@interface MFSnippetManager : NSObject <MFSnippetCalculatorDelegate> {

	NSMutableSet* _messagesNeedingBodies;
	id _pendingSnippetsLock;
	NSMutableDictionary* _pendingSnippetDictionariesByStore;
	char _queuedUpdate;
	MFSnippetCalculator* _snippetCalculator;
	NSOperationQueue* _snippetCommitQueue;

}

@property (nonatomic,readonly) MFSnippetCalculator * snippetCalculator;              //@synthesize snippetCalculator=_snippetCalculator - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * snippetCommitQueue;                //@synthesize snippetCommitQueue=_snippetCommitQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)didCalculateSnippet:(id)arg1 forMessage:(id)arg2 ;
-(void)_messageBodyDataAvailable:(id)arg1 ;
-(MFSnippetCalculator *)snippetCalculator;
-(void)_queueCommitPendingSnippets;
-(void)_commitPendingSnippets;
-(NSOperationQueue *)snippetCommitQueue;
-(id)fetchSnippetsForMessages:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

