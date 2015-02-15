/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCConnectionBasedAccountProxy.h>
#import <IMAP/IMAPAccount.h>

@class NSDictionary, NSMutableDictionary, IMAPConnectionPool, NSLock, NSMapTable, NSString, IMAPGateway, IMAPMailboxProxy, NSData, NSArray, MCAuthScheme, NSURL;

@interface IMAPAccountProxy : MCConnectionBasedAccountProxy <IMAPAccount> {

	NSMutableDictionary* _quotaRoots;
	IMAPConnectionPool* _connectionPool;
	NSLock* _connectionPoolLock;
	NSMutableDictionary* _mailboxProxiesByObjectID;
	NSMapTable* _imapMailboxesByMailboxProxy;
	char _recoveringFromConnectionLoss;
	unsigned _readBufferSize;
	NSString* _separatorCharacter;
	NSDictionary* _serverID;
	IMAPGateway* _offlineRecoveryGateway;
	IMAPMailboxProxy* _defaultHighPriorityMailbox;

}

@property (retain) NSData * tlsCertificate; 
@property (nonatomic,readonly) unsigned long long maximumConnectionCount; 
@property (nonatomic,readonly) IMAPMailboxProxy * defaultHighPriorityMailbox;              //@synthesize defaultHighPriorityMailbox=_defaultHighPriorityMailbox - In the implementation block
@property (nonatomic,readonly) char useDefaultMailboxAsMailboxHierarchyRoot; 
@property (copy) NSString * separatorCharacter;                                            //@synthesize separatorCharacter=_separatorCharacter - In the implementation block
@property (retain) IMAPGateway * offlineRecoveryGateway;                                   //@synthesize offlineRecoveryGateway=_offlineRecoveryGateway - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * accountTypeString; 
@property (copy,readonly) NSString * identifier; 
@property (copy) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * saslProfileName; 
@property (assign) char configureDynamically; 
@property (assign) char allowInsecureAuthentication; 
@property (copy) NSString * canonicalEmailAddress; 
@property (copy) NSString * hostname; 
@property (assign) long long portNumber; 
@property (nonatomic,copy,readonly) NSArray * standardPorts; 
@property (nonatomic,copy,readonly) NSArray * standardSSLPorts; 
@property (assign) long long securityLayerType; 
@property (retain) MCAuthScheme * preferredAuthScheme; 
@property (copy) NSString * username; 
@property (copy) NSString * password; 
@property (copy,readonly) NSString * applePersonID; 
@property (copy,readonly) NSString * appleAuthenticationToken; 
@property (copy,readonly) NSString * googleClientToken; 
@property (nonatomic,readonly) char requiresAuthentication; 
@property (assign) char shouldUseAuthentication; 
@property (assign) char usesSSL; 
@property (readonly) NSURL * subscriptionURL; 
@property (copy,readonly) NSString * subscriptionURLLabel; 
@property (copy) NSString * externalHostname; 
@property (assign) char recoveringFromConnectionLoss;                                      //@synthesize recoveringFromConnectionLoss=_recoveringFromConnectionLoss - In the implementation block
@property (assign) char useIDLEIfAvailable; 
@property (assign) long long gmailCapabilitiesSupport; 
@property (copy) NSDictionary * serverID;                                                  //@synthesize serverID=_serverID - In the implementation block
@property (readonly) id<IMAPOfflineCache> offlineCache; 
@property (assign) unsigned readBufferSize;                                                //@synthesize readBufferSize=_readBufferSize - In the implementation block
+(id)accountTypeString;
-(long long)cachePolicy;
-(id)initWithManagedObject:(id)arg1 ;
-(IMAPMailboxProxy *)defaultHighPriorityMailbox;
-(void)setHighPriorityMailbox:(id)arg1 ;
-(void)setAccountState:(long long)arg1 ;
-(NSData *)tlsCertificate;
-(void)setTlsCertificate:(NSData *)arg1 ;
-(NSArray *)standardPorts;
-(NSArray *)standardSSLPorts;
-(void*)keychainProtocol;
-(char)requiresAuthentication;
-(char)connectAndAuthenticate:(id)arg1 ;
-(void)respondToHostBecomingReachable;
-(id)newConnectedConnectionDiscoveringBestSettings:(char)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3 ;
-(id)authenticatedConnection;
-(NSString *)saslProfileName;
-(long long)portNumberForKeychain;
-(void)presentOverQuotaAlert;
-(void)backgroundFetchCompleted;
-(char)shouldMoveDeletedMessagesToTrash;
-(void)newUnreadMessagesHaveBeenReceivedInInbox;
-(void)incrementCountOfNewUnreadMessagesReceivedInInbox:(unsigned long long)arg1 ;
-(void)incrementTotalCountOfMessagesReceived:(unsigned long long)arg1 ;
-(char)useIDLEIfAvailable;
-(unsigned)readBufferSize;
-(long long)gmailCapabilitiesSupport;
-(void)setReadBufferSize:(unsigned)arg1 ;
-(void)setRecoveringFromConnectionLoss:(char)arg1 ;
-(char)_recoverFromConnectionlessStateHighPriority:(char)arg1 ;
-(unsigned long long)maximumConnectionCount;
-(id<IMAPOfflineCache>)offlineCache;
-(id)serverPathPrefix;
-(id)IMAPMailboxForMailboxName:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)setServerPathPrefix:(id)arg1 permanently:(char)arg2 ;
-(char)handleResponseCodeFromResponse:(id)arg1 ;
-(id)quotaRootForName:(id)arg1 createIfNeeded:(char)arg2 ;
-(char)allowsPartialDownloads;
-(void)sendAccountNeedsCheckingNotification;
-(void)recoverFromConnectionLoss;
-(char)recoveringFromConnectionLoss;
-(void)setUseIDLEIfAvailable:(char)arg1 ;
-(void)setGmailCapabilitiesSupport:(long long)arg1 ;
-(void)setServerID:(NSDictionary *)arg1 ;
-(void)setCachePolicy:(long long)arg1 permanently:(char)arg2 ;
-(char)shouldCacheAttachmentsForMessageWithDateReceived:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(NSDictionary *)serverID;
-(id)newMailboxProxyWithMailbox:(id)arg1 ;
-(void)updateMailboxListFromServer;
-(void)updateAllMailboxContentsFromServer;
-(NSString *)separatorCharacter;
-(id)checkOutGatewayForMailbox:(id)arg1 highPriority:(char)arg2 needsCheckIn:(char*)arg3 ;
-(void)setSeparatorCharacter:(NSString *)arg1 ;
-(char)useDefaultMailboxAsMailboxHierarchyRoot;
-(void)_updateDefaultMailboxServerName;
-(void)_addSubmailboxes:(id)arg1 toParent:(id)arg2 localMailboxes:(id)arg3 serverMailboxes:(id)arg4 placeholderMailboxes:(id)arg5 ;
-(void)deleteMailboxFromPersistence:(id)arg1 ;
-(id)_imapMailboxForMailboxProxy:(id)arg1 ;
-(id)checkOutExistingGatewayForMailbox:(id)arg1 ;
-(char)shouldAddMailboxToPersistence:(id)arg1 withParent:(id)arg2 ;
-(id)allMailboxProxies;
-(IMAPGateway *)offlineRecoveryGateway;
-(void)setOfflineRecoveryGateway:(IMAPGateway *)arg1 ;
-(void)playOfflineActions;
-(id)_separatorCharacterWithGateway:(id)arg1 ;
-(id)_serverNameForMailbox:(id)arg1 parentMailbox:(id)arg2 separatorCharacter:(id)arg3 ;
-(id)_serverNameComponentForMailboxName:(id)arg1 ;
-(id)mailboxProxyForMailbox:(id)arg1 ;
-(char)addMailboxToServer:(id)arg1 parentMailbox:(id)arg2 ;
-(char)renameMailbox:(id)arg1 newParentMailbox:(id)arg2 ;
-(char)deleteMailboxFromServer:(id)arg1 ;
@end
