/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate, NoteBodyObject, NoteStoreObject, NSURL, NSData;

@interface NoteObject : NSManagedObject

@property (nonatomic,@dynamic,retain) NSNumber * externalFlags; 
@property (nonatomic,@dynamic,retain) NSNumber * externalServerIntId; 
@property (nonatomic,@dynamic,retain) NSNumber * deletedFlag; 
@property (nonatomic,@dynamic,retain) NSNumber * externalSequenceNumber; 
@property (nonatomic,@dynamic,retain) NSString * summary; 
@property (nonatomic,@dynamic,retain) NSString * author; 
@property (nonatomic,@dynamic,retain) NSDate * modificationDate; 
@property (nonatomic,@dynamic,retain) NSDate * creationDate; 
@property (nonatomic,@dynamic,retain) NSString * title; 
@property (nonatomic,@dynamic,retain) NSNumber * contentType; 
@property (nonatomic,@dynamic,retain) NSNumber * containsCJK; 
@property (nonatomic,@dynamic,retain) NoteBodyObject * body; 
@property (nonatomic,@dynamic,retain) NoteStoreObject * store; 
@property (nonatomic,@dynamic,retain) NSNumber * integerId; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (assign,nonatomic) BOOL isPlainText; 
@property (nonatomic,readonly) NSURL * noteId; 
@property (nonatomic,readonly) BOOL isMarkedForDeletion; 
@property (nonatomic,@dynamic,retain) NSNumber * isBookkeepingEntry; 
@property (nonatomic,@dynamic,retain) NSString * serverId; 
@property (nonatomic,readonly) BOOL hasValidServerIntId; 
@property (assign,nonatomic) long long serverIntId; 
@property (nonatomic,@dynamic,retain) NSString * guid; 
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
@property (assign,nonatomic) unsigned long long sequenceNumber; 
-(unsigned long long)sequenceNumber;
-(id)content;
-(id)externalRepresentation;
-(BOOL)isPlainText;
-(id)contentAsPlainText;
-(void)setExternalRepresentation:(id)arg1 ;
-(BOOL)hasValidServerIntId;
-(long long)serverIntId;
-(void)setServerIntId:(long long)arg1 ;
-(BOOL)isMarkedForDeletion;
-(unsigned long long)flags;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(void)setIsPlainText:(BOOL)arg1 ;
-(void)markForDeletion;
-(id)contentAsPlainTextPreservingNewlines;
-(id)externalContentRef;
-(void)setExternalContentRef:(id)arg1 ;
-(id)noteId;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setContent:(id)arg1 ;
-(BOOL)containsAttachments;
@end
