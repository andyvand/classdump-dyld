/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/NFNote.h>
#import <Notes/IMAPPersistedMessage__CD.h>

@class NSNumber, NSUUID, NSDate, NFIMAPFolder, NSString, NSSet;

@interface NFIMAPNote : NFNote <IMAPPersistedMessage__CD>

@property (nonatomic,retain) NFIMAPFolder * folder; 
@property (assign,nonatomic) long long mimeDataSize; 
@property (nonatomic,retain) NSUUID * universallyUniqueID; 
@property (nonatomic,retain) NFIMAPFolder * mailbox; 
@property (nonatomic,retain) NSUUID * primitiveUniversallyUniqueID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSDate * dateSent; 
@property (nonatomic,retain) NSDate * dateReceived; 
@property (nonatomic,copy) NSString * from; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * messageID; 
@property (nonatomic,copy) NSSet * references; 
@property (assign,nonatomic) char unread; 
@property (nonatomic,copy) NSString * bodyHTML; 
@property (nonatomic,copy) NSSet * attachments; 
@property (nonatomic,retain) NSNumber * imapUID; 
@property (nonatomic,retain) NSDate * dateEdited; 
+(id)notesWithUniqueID:(id)arg1 context:(id)arg2 ;
+(id)noteTypeForActivity;
-(char)isRemote;
-(NFIMAPFolder *)mailbox;
-(void)setMailbox:(NFIMAPFolder *)arg1 ;
-(void)awakeFromInsert;
-(id)activityDictionary;
-(char)validateFolder:(inout id*)arg1 error:(out id*)arg2 ;
-(NSNumber *)imapUID;
-(void)setImapUID:(NSNumber *)arg1 ;
@end

