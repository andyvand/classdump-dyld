/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFMessageConsumer.h>

@class MFLibraryStore, MCInvocationQueue, NSString;

@interface MFLibraryStoreMessageConsumer : NSObject <MFMessageConsumer> {

	char _shouldCancel;
	long long _collectorID;
	MFLibraryStore* _libraryStore;
	MCInvocationQueue* _callbackQueue;

}

@property (assign) long long collectorID;                                       //@synthesize collectorID=_collectorID - In the implementation block
@property (assign) char shouldCancel;                                           //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (assign,nonatomic,__weak) MFLibraryStore * libraryStore;              //@synthesize libraryStore=_libraryStore - In the implementation block
@property (nonatomic,readonly) MCInvocationQueue * callbackQueue;               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldCancel;
-(id)libraryNotificationObject;
-(id)libraryNotificationMessages;
-(void)setCollectorID:(long long)arg1 ;
-(void)finishedSendingMessages;
-(void)newMessagesAvailable:(id)arg1 conversationsMembersByConversationID:(id)arg2 options:(id)arg3 ;
-(void)searchPhaseComplete;
-(void)setLibraryStore:(MFLibraryStore *)arg1 ;
-(MCInvocationQueue *)callbackQueue;
-(MFLibraryStore *)libraryStore;
-(id)initWithLibraryStore:(id)arg1 useCallbackQueue:(char)arg2 ;
-(void)clearLibraryStoreWeakReference;
-(long long)collectorID;
-(void)setShouldCancel:(char)arg1 ;
@end
