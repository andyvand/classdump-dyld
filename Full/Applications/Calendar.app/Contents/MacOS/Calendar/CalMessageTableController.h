/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/NSTableViewDelegate.h>
#import <Calendar/NSTableViewDataSource.h>

@class CALMainController, CalMessageTableView, CalUIFaceCache, NSArray, NSTableColumn, NSMutableSet, NSString;

@interface CalMessageTableController : NSObject <NSTableViewDelegate, NSTableViewDataSource> {

	char _isDelegateWindow;
	int _reloadQueued;
	CALMainController* _mainController;
	CalMessageTableView* _tableView;
	CalUIFaceCache* _faceCache;
	NSArray* _messages;
	NSTableColumn* _column;
	NSMutableSet* _tombstones;
	unsigned long long _cachedMessageCount;
	NSArray* _cachedVisibleMessages;

}

@property (assign,nonatomic,__weak) CALMainController * mainController;              //@synthesize mainController=_mainController - In the implementation block
@property (nonatomic,readonly) CalMessageTableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char isDelegateWindow;                                  //@synthesize isDelegateWindow=_isDelegateWindow - In the implementation block
@property (__weak) CalUIFaceCache * faceCache;                                       //@synthesize faceCache=_faceCache - In the implementation block
@property (retain) NSArray * messages;                                               //@synthesize messages=_messages - In the implementation block
@property (assign) int reloadQueued;                                                 //@synthesize reloadQueued=_reloadQueued - In the implementation block
@property (retain) NSTableColumn * column;                                           //@synthesize column=_column - In the implementation block
@property (retain) NSMutableSet * tombstones;                                        //@synthesize tombstones=_tombstones - In the implementation block
@property (assign) unsigned long long cachedMessageCount;                            //@synthesize cachedMessageCount=_cachedMessageCount - In the implementation block
@property (retain) NSArray * cachedVisibleMessages;                                  //@synthesize cachedVisibleMessages=_cachedVisibleMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)promptUserForConflictBlock;
+(long long)convertEKConflictDecisionToCalConflictResultsResponse:(unsigned long long)arg1 ;
-(CALMainController *)mainController;
-(id)initWithMainController:(id)arg1 ;
-(void)setMainController:(CALMainController *)arg1 ;
-(unsigned long long)countForMessages;
-(id)messagesForEventWithLocalUID:(id)arg1 ;
-(id)messagesForOccurrenceID:(id)arg1 ;
-(char)hasMessagesForOccurrenceID:(id)arg1 ;
-(void)removeMessagesForEventWithLocalUID:(id)arg1 ;
-(void)removeMessagesForOccurrenceID:(id)arg1 ;
-(void)removeInvitationsForEvents:(id)arg1 ;
-(void)contextObjectsDidChange:(id)arg1 ;
-(void)messageSelected:(id)arg1 ;
-(void)messageDoubleClicked:(id)arg1 ;
-(void)faceImagesUpdatedForMessageIDs:(id)arg1 ;
-(void)setTombstones:(NSMutableSet *)arg1 ;
-(unsigned long long)_messageCount;
-(id)_visibleMessages;
-(void)_fillCalendars:(id)arg1 andPrincipals:(id)arg2 fromNodes:(id)arg3 ;
-(void)_clearTombstonesForMissingMessages;
-(void)_lazilyPrefetchEventsFromMessages:(id)arg1 ;
-(void)_messageTableReloadHelperWithMessagesCount:(unsigned long long)arg1 messages:(id)arg2 oldMessagesCount:(unsigned long long)arg3 oldMessages:(id)arg4 ;
-(void)postNotificationsChangedNotification;
-(void)groupsChanged:(id)arg1 ;
-(void)dayChanged:(id)arg1 ;
-(void)reloadOnMainThread;
-(void)timeZoneDidChange:(id)arg1 ;
-(void)newNotification;
-(void)_updateCachedMessages;
-(void)_removeMessages:(id)arg1 ;
-(void)_addTombstonesForMessagesAndReload:(id)arg1 ;
-(void)_finishedMessageAction;
-(void)_removeTombstonesForMessageIDsAndReload:(id)arg1 ;
-(void)replyToMessage:(id)arg1 withStatus:(int)arg2 placingInCalendar:(id)arg3 ;
-(NSMutableSet *)tombstones;
-(unsigned long long)cachedMessageCount;
-(NSArray *)cachedVisibleMessages;
-(char)_isMessageUseless:(id)arg1 ;
-(void)setCachedVisibleMessages:(NSArray *)arg1 ;
-(void)setCachedMessageCount:(unsigned long long)arg1 ;
-(void)_removeMessage:(id)arg1 ;
-(void)acknowledgeAllMessagesWithActionType:(int)arg1 ;
-(void)acknowledgeMessage:(id)arg1 ;
-(void)acceptAllMessages;
-(void)replyToMessage:(id)arg1 withStatus:(int)arg2 ;
-(char)messageIsLastElement:(id)arg1 ;
-(char)isDelegateWindow;
-(void)setIsDelegateWindow:(char)arg1 ;
-(void)setFaceCache:(CalUIFaceCache *)arg1 ;
-(int)reloadQueued;
-(void)setReloadQueued:(int)arg1 ;
-(CalUIFaceCache *)faceCache;
-(void)setMessages:(NSArray *)arg1 ;
-(void)dealloc;
-(NSTableColumn *)column;
-(CalMessageTableView *)tableView;
-(void)load;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)setColumn:(NSTableColumn *)arg1 ;
-(NSArray *)messages;
-(void)setup;
-(void)newMessage;
@end

