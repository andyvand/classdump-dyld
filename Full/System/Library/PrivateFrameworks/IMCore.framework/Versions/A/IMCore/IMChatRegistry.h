/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary, NSString, IMTimer, NSUserActivity, NSArray;

@interface IMChatRegistry : NSObject <NSFastEnumeration> {

	NSMutableArray* _allChats;
	NSMutableDictionary* _chatGUIDToCurrentThreadMap;
	NSMutableDictionary* _chatGUIDToInfoMap;
	NSMutableDictionary* _chatGUIDToChatMap;
	NSMutableDictionary* _threadNameToChatMap;
	NSMutableDictionary* _chatGUIDToiMessageSentOrReceivedMap;
	NSMutableArray* _allChatsInThreadNameMap;
	NSMutableArray* _pendingQueries;
	NSMutableArray* _waitingForQueries;
	NSString* _historyModificationStamp;
	IMTimer* _markAsReadTimer;
	double _timerStartTimeInterval;
	char _firstLoad;
	char _loading;
	char _daemonHadTerminated;
	char _wantsHistoryReload;
	char _postMessageSentNotifications;
	unsigned long long _defaultNumberOfMessagesToLoad;
	unsigned long long _daemonUnreadCount;
	long long _daemonLastFailedMessageID;
	NSUserActivity* _userActivity;

}

@property (nonatomic,readonly) NSArray * allExistingChats; 
@property (nonatomic,readonly) unsigned long long numberOfExistingChats; 
@property (assign,setter=_setPostMessageSentNotifications:,nonatomic) char _postMessageSentNotifications;                              //@synthesize postMessageSentNotifications=_postMessageSentNotifications - In the implementation block
@property (assign,setter=_setDefaultNumberOfMessagesToLoad:,nonatomic) unsigned long long _defaultNumberOfMessagesToLoad;              //@synthesize defaultNumberOfMessagesToLoad=_defaultNumberOfMessagesToLoad - In the implementation block
@property (nonatomic,readonly) char _isLoading;                                                                                        //@synthesize loading=_loading - In the implementation block
+(Class)messageClass;
+(Class)chatRegistryClass;
+(Class)chatClass;
+(void)setChatRegistryClass:(Class)arg1 ;
+(void)setChatClass:(Class)arg1 ;
+(void)setMessageClass:(Class)arg1 ;
+(id)sharedInstance;
-(void)systemApplicationDidResume;
-(void)setupComplete:(char)arg1 info:(id)arg2 ;
-(void)setupComplete;
-(void)chat:(id)arg1 updated:(id)arg2 ;
-(void)chat:(id)arg1 propertiesUpdated:(id)arg2 ;
-(void)chat:(id)arg1 displayNameUpdated:(id)arg2 ;
-(void)leftChat:(id)arg1 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageSent:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 statusChanged:(int)arg5 handleInfo:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 member:(id)arg5 statusChanged:(int)arg6 ;
-(void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5 ;
-(void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 ;
-(void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3 ;
-(void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5 ;
-(void)unreadCountChanged:(long long)arg1 ;
-(void)lastFailedMessageIDChanged:(long long)arg1 ;
-(void)_handleChatReconstructions:(id)arg1 ;
-(NSArray *)allExistingChats;
-(id)existingChatForIMHandle:(id)arg1 allowRetargeting:(char)arg2 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(char)arg2 groupID:(id)arg3 ;
-(void)_noteChatInit:(id)arg1 ;
-(void)_noteChatDealloc:(id)arg1 ;
-(void)_setChatHasCommunicatedOveriMessage:(id)arg1 ;
-(void)_chat_clearHistory:(id)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 queryID:(id)arg4 ;
-(char)_firstLoad;
-(void)_blockUntilQueriesComplete:(id)arg1 ;
-(void)_chat:(id)arg1 updateDisplayName:(id)arg2 ;
-(void)_chat_storeItem:(id)arg1 inChat:(id)arg2 ;
-(void)_chat:(id)arg1 joinWithProperties:(id)arg2 ;
-(void)_chat_declineInvitation:(id)arg1 ;
-(void)_chat:(id)arg1 sendMessage:(id)arg2 ;
-(void)_updateUnreadCountForChat:(id)arg1 ;
-(void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2 ;
-(void)_chat_sendReadReceiptForAllMessages:(id)arg1 ;
-(void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3 ;
-(void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3 ;
-(char)_hasChat:(id)arg1 forService:(id)arg2 ;
-(void)_chat_leave:(id)arg1 ;
-(void)_chat_remove:(id)arg1 ;
-(void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3 ;
-(void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3 ;
-(void)_chat_loadHistory:(id)arg1 limit:(unsigned long long)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 queryID:(id)arg5 ;
-(void)_chat_loadFrequentReplies:(id)arg1 limit:(unsigned long long)arg2 queryID:(id)arg3 ;
-(void)_chat_loadAttachments:(id)arg1 queryID:(id)arg2 ;
-(void)_chat:(id)arg1 sendSavedReceiptForMessage:(id)arg2 ;
-(void)_chat:(id)arg1 sendPlayedReceiptForMessage:(id)arg2 ;
-(void)handleIMChatParticipantsDidChange:(id)arg1 ;
-(void)_daemonReallyDied:(id)arg1 ;
-(void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(char)arg3 newGUID:(id)arg4 ;
-(id)_allGUIDsForChat:(id)arg1 ;
-(void)_unregisterChatWithGUID:(id)arg1 ;
-(id)existingChatWithGUID:(id)arg1 ;
-(id)existingChatForIMHandle:(id)arg1 ;
-(id)_createdChatForIMHandle:(id)arg1 ;
-(void)_registerChat:(id)arg1 isIncoming:(char)arg2 guid:(id)arg3 ;
-(id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(char)arg3 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(char)arg5 ;
-(id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(char)arg5 ;
-(id)existingChatForIMHandles:(id)arg1 ;
-(id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(id)existingChatWithChatIdentifier:(id)arg1 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(char)arg2 ;
-(id)_allCreatedChats;
-(id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3 ;
-(id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(char)arg3 ;
-(id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(void)__blockUntilQueriesComplete;
-(id)_chatInstanceForGUID:(id)arg1 ;
-(void)unregisterChat:(id)arg1 ;
-(void)unregisterChatWithGUID:(id)arg1 ;
-(void)_unregisterChat:(id)arg1 ;
-(id)chatForIMHandle:(id)arg1 ;
-(id)chatForIMHandles:(id)arg1 ;
-(id)chatForIMHandles:(id)arg1 chatName:(id)arg2 ;
-(id)chatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(id)messagesURLWithChat:(id)arg1 orHandles:(id)arg2 withMessageText:(id)arg3 ;
-(id)chatForURL:(id)arg1 outMessageText:(id*)arg2 outRecipientIDs:(id*)arg3 outService:(id*)arg4 outMessageGUID:(id*)arg5 ;
-(void)setActiveChatURL:(id)arg1 ;
-(long long)lastFailedMessageID;
-(unsigned long long)numberOfExistingChats;
-(id)_lookupExistingChatWithIMHandle:(id)arg1 ;
-(id)existingChatWithGroupID:(id)arg1 ;
-(id)_chatForChatDictionary:(id)arg1 items:(id)arg2 allowCreate:(char)arg3 createdChat:(char*)arg4 outGUID:(id*)arg5 ;
-(id)_chatsWithMessage:(id)arg1 ;
-(void)_startMarkAsReadTimerIfNecessary;
-(void)_clearMarkAsReadTimerIfNecessary;
-(unsigned long long)_defaultNumberOfMessagesToLoad;
-(void)_setDefaultNumberOfMessagesToLoad:(unsigned long long)arg1 ;
-(char)_isLoading;
-(char)_postMessageSentNotifications;
-(void)_setPostMessageSentNotifications:(char)arg1 ;
-(void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5 ;
-(void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 message:(id)arg5 ;
-(void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(char)arg3 ;
-(void)frequentRepliesQuery:(id)arg1 finishedWithResult:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)unreadCount;
-(id)init;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
@end

