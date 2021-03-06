/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <MailCore/MCMessageDataSource.h>

@class NSMutableSet, NSData, NSString;

@interface MCMemoryDataSource : NSObject <MCMessageDataSource> {

	NSMutableSet* _uniqueStrings;
	NSData* _data;
	NSData* _separator;

}

@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSData * separator;              //@synthesize separator=_separator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char isReadOnly; 
-(NSData *)separator;
-(char)isReadOnly;
-(id)async_setFlagWithKey:(id)arg1 state:(char)arg2 forMessages:(id)arg3 ;
-(id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(char)arg3 userRecorded:(char)arg4 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(char)arg2 ;
-(void)undeleteMessages:(id)arg1 ;
-(id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setColor:(id)arg1 highlightTextOnly:(char)arg2 forMessages:(id)arg3 ;
-(char)canCompact;
-(id)routeMessages:(id)arg1 fetchingBodies:(char)arg2 messagesNeedingBodies:(id)arg3 ;
-(void)doCompact;
-(void)invalidateMessage:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 ;
-(id)messageForMessageID:(id)arg1 ;
-(id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3 ;
-(void)sendResponseType:(char)arg1 forMeetingMessage:(id)arg2 ;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)attachmentsDirectoryForMessage:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)snippetsForMessages:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 ;
-(char)hasCachedDataForMimePart:(id)arg1 ;
-(id)headersForMessage:(id)arg1 ;
-(id)headersForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 updateFlags:(char)arg3 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 updateFlags:(char)arg3 allowPartial:(char)arg4 ;
-(id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3 ;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(char)arg2 isEncrypted:(char)arg3 forMessage:(id)arg4 ;
-(char)supportsSnippets;
-(void)saveSnippetsForMessages:(id)arg1 ;
-(void)flushAllCaches;
-(id)uniquedString:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)message;
-(id)account;
-(id)mailbox;
@end

