/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCAccountProxy.h>
#import <Notes/EWSExchangeServiceBindingDelegate.h>
#import <Notes/NFAccountProxy.h>

@class NSString, NSMutableDictionary, EWSExchangeServiceBinding, NSURL;

@interface NFEWSAccountProxy : MCAccountProxy <EWSExchangeServiceBindingDelegate, NFAccountProxy> {

	NSMutableDictionary* _foldersByObjectID;
	char _useExternalURL;
	EWSExchangeServiceBinding* _exchangeServiceBinding;

}

@property (retain) EWSExchangeServiceBinding * exchangeServiceBinding;              //@synthesize exchangeServiceBinding=_exchangeServiceBinding - In the implementation block
@property (retain) NSURL * internalURL; 
@property (retain) NSURL * externalURL; 
@property (retain) NSURL * lastUsedAutodiscoverURL; 
@property (copy) NSString * rootFolderId; 
@property (assign,nonatomic) char useExternalURL;                                   //@synthesize useExternalURL=_useExternalURL - In the implementation block
@property (nonatomic,retain) NSString * folderHierarchySyncState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * fullName; 
+(id)_extendedFieldsForEWSNoteType;
+(id)_newExtendedFieldTypeForPropertyId:(long long)arg1 ;
-(void)setInternalURL:(NSURL *)arg1 ;
-(id)password;
-(char)hasNotes;
-(id)initWithManagedObject:(id)arg1 ;
-(char)isServerReachable;
-(NSURL *)internalURL;
-(id)sessionPassword;
-(void)setSessionPassword:(id)arg1 ;
-(NSString *)folderHierarchySyncState;
-(void)setFolderHierarchySyncState:(NSString *)arg1 ;
-(NSString *)rootFolderId;
-(NSURL *)lastUsedAutodiscoverURL;
-(void)setLastUsedAutodiscoverURL:(NSURL *)arg1 ;
-(void)setRootFolderId:(NSString *)arg1 ;
-(void)dealloc;
-(void)setPassword:(id)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(char)useExternalURL;
-(void)exchangeServiceBinding:(id)arg1 didReceiveCertificateError:(id)arg2 ;
-(void)exchangeServiceBinding:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)setUseExternalURL:(char)arg1 ;
-(NSURL *)externalURL;
-(void)setExternalURL:(NSURL *)arg1 ;
-(id)_sendMessage:(id)arg1 ;
-(id)_connectAndAuthenticate;
-(id)_fetchDistinguishedFolderInfo:(id)arg1 error:(id*)arg2 errorCode:(long long*)arg3 ;
-(EWSExchangeServiceBinding *)exchangeServiceBinding;
-(id)_syncFolderHierarchyRequestWithSyncState:(id)arg1 ;
-(void)_createOrUpdateFolder:(id)arg1 deletedItemsFolderId:(id)arg2 ;
-(id)_deleteFolder:(id)arg1 ;
-(id)_fetchFolderInfoForId:(id)arg1 error:(id*)arg2 ;
-(void)setExchangeServiceBinding:(EWSExchangeServiceBinding *)arg1 ;
-(void)_autodiscoverSettings;
-(id)_newEWSCreateItemForNote:(id)arg1 inFolder:(id)arg2 ;
-(char)_processCreateItemResponse:(id)arg1 forNote:(id)arg2 responseCode:(long long*)arg3 ;
-(id)_newEWSCreateFolderForFolder:(id)arg1 inParent:(id)arg2 ;
-(char)_processCreateFolderResponse:(id)arg1 forFolder:(id)arg2 responseCode:(long long*)arg3 ;
-(id)_newEWSUpdateFolderForFolder:(id)arg1 ;
-(char)_processUpdateFolderResponse:(id)arg1 forFolder:(id)arg2 responseCode:(long long*)arg3 ;
-(id)_newEWSDeleteFolderWithFolderId:(id)arg1 ;
-(char)_processDeleteFolderResponse:(id)arg1 forFolderId:(id)arg2 responseCode:(long long*)arg3 ;
-(id)_newEWSMoveFolderForFolder:(id)arg1 toParent:(id)arg2 ;
-(char)_processMoveFolderResponse:(id)arg1 forFolder:(id)arg2 responseCode:(long long*)arg3 ;
-(id)_newEWSSetItemFieldForSubject:(id)arg1 ;
-(id)_newEWSSetItemFieldForBody:(id)arg1 ;
-(id)_newEWSUpdateItemForNote:(id)arg1 ;
-(char)_processUpdateItemResponse:(id)arg1 forNote:(id)arg2 responseCode:(long long*)arg3 ;
-(id)_newEWSDeleteItemForNoteWithRemoteID:(id)arg1 ;
-(char)_processDeleteItemResponse:(id)arg1 responseCode:(long long*)arg2 ;
-(id)_newEWSMoveItemForNote:(id)arg1 toFolder:(id)arg2 ;
-(char)_processMoveItemResponse:(id)arg1 forNote:(id)arg2 responseCode:(long long*)arg3 ;
-(char)addNoteToRemote:(id)arg1 inFolder:(id)arg2 responseCode:(long long*)arg3 ;
-(char)addFolderToRemote:(id)arg1 inParent:(id)arg2 responseCode:(long long*)arg3 ;
-(char)updateFolderOnRemote:(id)arg1 responseCode:(long long*)arg2 ;
-(char)deleteFolderFromRemoteWithId:(id)arg1 responseCode:(long long*)arg2 ;
-(char)moveFolderOnRemote:(id)arg1 toParent:(id)arg2 responseCode:(long long*)arg3 ;
-(char)updateNoteOnRemote:(id)arg1 responseCode:(long long*)arg2 ;
-(char)deleteNoteFromRemoteWithID:(id)arg1 responseCode:(long long*)arg2 ;
-(char)moveNoteOnRemote:(id)arg1 toFolder:(id)arg2 responseCode:(long long*)arg3 ;
-(char)responseCodeIsFatal:(long long)arg1 ;
-(void)updateMailboxListFromServer;
-(void)updateAllMailboxContentsFromServer;
-(id)mailboxProxyForMailbox:(id)arg1 ;
@end

