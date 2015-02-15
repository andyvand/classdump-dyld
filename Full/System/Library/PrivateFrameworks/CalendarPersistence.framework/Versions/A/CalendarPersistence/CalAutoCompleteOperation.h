/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/IIQuerySessionDelegate.h>

@protocol CalAutoCompleteDelegate;
@class NSString, NSMutableArray, NSSet, NSMutableSet, ABAddressBook, IIABQuerySession, IICDQuerySession;

@interface CalAutoCompleteOperation : NSObject <IIQuerySessionDelegate> {

	id<CalAutoCompleteDelegate> _delegate;
	char _searchOngoing;
	char _recentSearchOngoing;
	char _doRooms;
	char _doPeople;
	char _doResources;
	char _doGroups;
	char _doRecents;
	char _includePrevious;
	char _doSearchLocal;
	char _returnFullData;
	char _doDistributionLists;
	NSString* _prefix;
	NSMutableArray* _recentResults;
	NSMutableArray* _serverResults;
	NSMutableArray* _localResults;
	NSSet* _addressesToIgnore;
	NSMutableSet* _recentEmails;
	NSMutableSet* _localEmails;
	NSMutableSet* _serverEmails;
	ABAddressBook* _addressBook;
	NSString* _lastSearchedSourceID;
	IIABQuerySession* _abQuerySession;
	IICDQuerySession* _cdQuerySession;

}

@property (assign) id<CalAutoCompleteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char includePrevious;                              //@synthesize includePrevious=_includePrevious - In the implementation block
@property (assign) char doSearchLocal;                                //@synthesize doSearchLocal=_doSearchLocal - In the implementation block
@property (assign) char returnFullData;                               //@synthesize returnFullData=_returnFullData - In the implementation block
@property (assign) char doDistributionLists;                          //@synthesize doDistributionLists=_doDistributionLists - In the implementation block
@property (readonly) char gotResults; 
@property (copy) NSString * prefix;                                   //@synthesize prefix=_prefix - In the implementation block
@property (retain) NSString * lastSearchedSourceID;                   //@synthesize lastSearchedSourceID=_lastSearchedSourceID - In the implementation block
@property (retain) NSSet * addressesToIgnore;                         //@synthesize addressesToIgnore=_addressesToIgnore - In the implementation block
@property (retain) NSMutableSet * recentEmails;                       //@synthesize recentEmails=_recentEmails - In the implementation block
@property (retain) NSMutableSet * localEmails;                        //@synthesize localEmails=_localEmails - In the implementation block
@property (retain) NSMutableSet * serverEmails;                       //@synthesize serverEmails=_serverEmails - In the implementation block
@property (retain) ABAddressBook * addressBook;                       //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alloc;
-(ABAddressBook *)addressBook;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(id)init;
-(void)setDelegate:(id<CalAutoCompleteDelegate>)arg1 ;
-(void)dealloc;
-(id<CalAutoCompleteDelegate>)delegate;
-(char)isRunning;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(void)setIncludePrevious:(char)arg1 ;
-(void)setAddressesToIgnore:(NSSet *)arg1 ;
-(void)setRecentEmails:(NSMutableSet *)arg1 ;
-(void)setLocalEmails:(NSMutableSet *)arg1 ;
-(void)setServerEmails:(NSMutableSet *)arg1 ;
-(void)setLastSearchedSourceID:(NSString *)arg1 ;
-(id)searchFor:(id)arg1 onAccount:(id)arg2 findPeople:(char)arg3 groups:(char)arg4 resources:(char)arg5 rooms:(char)arg6 recents:(char)arg7 ;
-(NSString *)lastSearchedSourceID;
-(id)removeIgnoredAddressesFromResults:(id)arg1 ;
-(id)allResults;
-(void)cancelSearch;
-(void)clearLastResults;
-(void)cancelTimeouts;
-(char)includePrevious;
-(char)doSearchLocal;
-(char)returnFullData;
-(char)doDistributionLists;
-(id)fetchLocalSearchResults;
-(void)startTimeoutCounterForQuery:(id)arg1 ;
-(void)_handleRecentsResults:(id)arg1 ;
-(id)addressBookForQuery:(id)arg1 ;
-(void)queryTimedOut:(id)arg1 ;
-(void)stopTimeoutCounterForQuery:(id)arg1 ;
-(id)_emailsToResultsFromResults:(id)arg1 ;
-(id)_serverAndRecentResults;
-(void)_removeGroupRecentResult:(id)arg1 ;
-(void)_moveServerResult:(id)arg1 toRecentsAsReplacementForResult:(id)arg2 ;
-(id)removeAddresses:(id)arg1 fromResults:(id)arg2 ;
-(void)_removeRecentGroupsAndServerDuplicateResults;
-(void)_sortServerResults;
-(void)_removeRecentAndServerResultsFromLocalResults;
-(void)_preprocessResultsForCoalescing;
-(NSSet *)addressesToIgnore;
-(void)startedQuery:(id)arg1 ;
-(void)finishedQuery:(id)arg1 ;
-(id)lastSearchString;
-(char)canSearchAccount:(id)arg1 ;
-(id)searchFor:(id)arg1 onSource:(id)arg2 findPeople:(char)arg3 groups:(char)arg4 resources:(char)arg5 rooms:(char)arg6 recents:(char)arg7 ;
-(char)gotResults;
-(void)setIgnoredParticipants:(id)arg1 ;
-(void)setIgnoredAddresses:(id)arg1 ;
-(NSMutableSet *)recentEmails;
-(NSMutableSet *)localEmails;
-(NSMutableSet *)serverEmails;
-(void)setDoSearchLocal:(char)arg1 ;
-(void)setDoDistributionLists:(char)arg1 ;
-(void)setReturnFullData:(char)arg1 ;
@end

