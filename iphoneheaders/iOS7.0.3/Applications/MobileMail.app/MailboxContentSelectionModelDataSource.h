/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MailboxContentSelectionModelDataSource <NSObject>
@required
-(id)sourcesForMessagesAtTableIndexPath:(id)arg1;
-(id)messagesAtTableIndexPath:(id)arg1;
-(unsigned)messageCountAtTableIndexPath:(id)arg1;
-(void)getConversationStateAtTableIndexPath:(id)arg1 hasUnread:(BOOL*)arg2 hasUnflagged:(BOOL*)arg3;
-(void)getSourceStateHasUnread:(BOOL*)arg1 hasUnflagged:(BOOL*)arg2;
-(id)sources;
@end
