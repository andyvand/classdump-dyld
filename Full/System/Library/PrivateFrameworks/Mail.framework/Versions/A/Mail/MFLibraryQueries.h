/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFLibraryQueries : NSObject
+(id)checkOutStatementToInsertMessage:(id)arg1 ;
+(id)checkOutStatementToCompletelyUpdateMessage:(id)arg1 ;
+(id)fromClauseForTables:(unsigned long long)arg1 startingFromTableExpression:(id)arg2 ;
+(id)checkOutStatementForEventWithMessageID:(long long)arg1 usingDB:(id)arg2 ;
+(id)checkOutStatementToInsertEvent:(id)arg1 ;
+(int)bindInsertEventStatement:(id)arg1 withEvent:(id)arg2 messageID:(long long)arg3 ;
+(id)checkOutStatementToUpdateEvent:(id)arg1 ;
+(int)bindUpdateEventStatement:(id)arg1 withEvent:(id)arg2 messageID:(long long)arg3 ;
+(char*)queryToDeleteEventByMessageID:(id)arg1 ;
+(char*)queryForUniquingDataForMessageNumber:(long long)arg1 ;
+(char*)queryToFindCopiesOfMessage:(char*)arg1 sentOn:(unsigned long long)arg2 receivedOn:(unsigned long long)arg3 withSize:(unsigned long long)arg4 ;
+(id)checkOutStatementForMailboxURLFromMailboxID:(long long)arg1 usingDB:(id)arg2 ;
@end

