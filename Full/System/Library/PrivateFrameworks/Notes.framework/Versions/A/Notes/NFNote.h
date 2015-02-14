/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <Notes/MCPersistedMessage.h>

@class NSDate, NSString, NSSet, NFNoteBody, NFFolder;

@interface NFNote : NSManagedObject <MCPersistedMessage>

@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSDate * dateEdited; 
@property (nonatomic,copy) NSString * remoteID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSSet * attachments; 
@property (nonatomic,retain) NFNoteBody * body; 
@property (nonatomic,retain) NFFolder * folder; 
@property (readonly) char isRemote; 
@property (readonly) char isBlankNewNote; 
@property (nonatomic,retain) NSDate * primitiveDateCreated; 
@property (nonatomic,retain) NSDate * primitiveDateEdited; 
@property (nonatomic,retain) NSString * primitiveTitle; 
@property (nonatomic,retain) NFNoteBody * primitiveBody; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * dateSent; 
@property (nonatomic,retain) NSDate * dateReceived; 
@property (nonatomic,copy) NSString * from; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * messageID; 
@property (nonatomic,copy) NSSet * references; 
@property (assign,nonatomic) char unread; 
@property (nonatomic,copy) NSString * bodyHTML; 
+(char)supportsAttachments;
+(id)noteTypeForActivity;
-(void)setUnread:(char)arg1 ;
-(NSString *)bodyHTML;
-(char)unread;
-(id)attachmentWithContentID:(id)arg1 ;
-(id)createAttachmentWithName:(id)arg1 ;
-(void)addPersistedAttachement:(id)arg1 ;
-(id)compactDescription;
-(void)setBodyHTML:(NSString *)arg1 ;
-(void)setDateSent:(NSDate *)arg1 ;
-(NSDate *)dateSent;
-(void)setDateReceived:(NSDate *)arg1 ;
-(NSDate *)dateReceived;
-(NSString *)messageID;
-(void)setFrom:(NSString *)arg1 ;
-(void)setReferences:(NSSet *)arg1 ;
-(NSSet *)references;
-(void)setMessageID:(NSString *)arg1 ;
-(NSString *)from;
-(char)isRemote;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)awakeFromInsert;
-(char)isBlankNewNote;
-(void)moveToTrash;
-(char)isDeletedOrInTrash;
-(id)activityDictionary;
-(void)takeValuesFromNote:(id)arg1 ;
@end

