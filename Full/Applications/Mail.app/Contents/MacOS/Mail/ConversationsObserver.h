/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class NSCountedSet, NSMutableDictionary, NSOperationQueue;

@interface ConversationsObserver : NSObject {

	NSCountedSet* _registeredConversationIDs;
	NSMutableDictionary* _mailboxCriterionByConversationID;
	NSOperationQueue* _workQueue;

}

@property (nonatomic,readonly) NSOperationQueue * workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)unregisterConversationID:(long long)arg1 ;
-(void)registerConversationID:(long long)arg1 withMailboxCriterion:(id)arg2 ;
-(void)_libraryConversationsWereChanged:(id)arg1 ;
-(void)_libraryMessagesCompacted:(id)arg1 ;
-(void)_libraryMessagesUpdated:(id)arg1 ;
-(id)_allMessagesForConversationIDNumber:(id)arg1 ;
-(id)_criterionForConversationID:(id)arg1 ;
-(unsigned)_loadOptions;
-(id)_primaryMessagesForConversationIDNumber:(id)arg1 ;
-(char)_isRegistered:(id)arg1 ;
-(void)_updateRegistrationForConversation:(id)arg1 withNewConversationID:(id)arg2 ;
-(id)_allMessagesForConversations:(id)arg1 ;
-(id)_primaryMessagesForConversations:(id)arg1 ;
-(NSOperationQueue *)workQueue;
-(void)_libraryMessagesFlagsChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

