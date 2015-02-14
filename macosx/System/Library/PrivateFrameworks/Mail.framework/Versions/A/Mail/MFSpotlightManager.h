/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCActivityTarget.h>

@class NSConditionLock, NSMutableSet, NSMutableDictionary, MCInvocationQueue, NSString;

@interface MFSpotlightManager : NSObject <MCActivityTarget> {

	NSConditionLock* _attachmentIndexingLock;
	NSMutableSet* _messsagesScheduledForAttachmentIndexing;
	NSMutableDictionary* _queryObserverDictionary;
	MCInvocationQueue* _indexQueue;

}

@property (nonatomic,readonly) MCInvocationQueue * indexQueue;              //@synthesize indexQueue=_indexQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)immediatelyIndexAttachmentsForMessage:(id)arg1 ;
-(void)immediatelyIndexAttachmentsForMessages:(id)arg1 ;
-(void)indexAttachmentsForMessages:(id)arg1 ;
-(long long)registerQueryObserver:(id)arg1 ;
-(void)unregisterQueryObserver:(long long)arg1 ;
-(id)acquireQueryObserver:(long long)arg1 ;
-(void)indexAttachmentsForMessage:(id)arg1 ;
-(void)setAttributeForFileAtPath:(id)arg1 name:(id)arg2 value:(id)arg3 ;
-(void)_setAttributeForFileAtPath:(id)arg1 name:(id)arg2 value:(id)arg3 ;
-(MCInvocationQueue *)indexQueue;
-(char)_shouldIndexAttachmentsForMessage:(id)arg1 ;
-(void)_synchronouslyIndexAttachmentsForMessage:(id)arg1 ;
-(void)_triggerDelayedAttachmentIndexing;
-(void)_triggerNowAttachmentIndexing;
-(void)_indexAttachmentsForScheduledMessages;
-(void)_synchronouslyIndexAttachmentsForMessages:(id)arg1 ;
-(void)_scheduleAttachmentIndexingForMessages:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

