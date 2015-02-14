/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary;


@protocol IMAPAccount <MCRemoteStoreAccount>
@property (assign) char recoveringFromConnectionLoss; 
@property (assign) char useIDLEIfAvailable; 
@property (assign) long long gmailCapabilitiesSupport; 
@property (copy) NSDictionary * serverID; 
@property (readonly) id<IMAPOfflineCache> offlineCache; 
@property (assign) unsigned readBufferSize; 
@optional
-(void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(long long)arg3;
-(id)additionalHeaderFields;
-(id)gmailLabelWithName:(id)arg1;
-(void)detectAllMailWithGateway:(id)arg1;

@required
-(void)backgroundFetchCompleted;
-(char)shouldMoveDeletedMessagesToTrash;
-(char)useIDLEIfAvailable;
-(unsigned)readBufferSize;
-(long long)gmailCapabilitiesSupport;
-(void)setReadBufferSize:(unsigned)arg1;
-(void)setRecoveringFromConnectionLoss:(char)arg1;
-(id<IMAPOfflineCache>)offlineCache;
-(id)serverPathPrefix;
-(id)IMAPMailboxForMailboxName:(id)arg1 createIfNeeded:(char)arg2;
-(void)setServerPathPrefix:(id)arg1 permanently:(char)arg2;
-(char)handleResponseCodeFromResponse:(id)arg1;
-(id)quotaRootForName:(id)arg1 createIfNeeded:(char)arg2;
-(char)allowsPartialDownloads;
-(void)sendAccountNeedsCheckingNotification;
-(void)recoverFromConnectionLoss;
-(char)recoveringFromConnectionLoss;
-(void)setUseIDLEIfAvailable:(char)arg1;
-(void)setGmailCapabilitiesSupport:(long long)arg1;
-(void)setServerID:(id)arg1;
-(NSDictionary *)serverID;

@end

