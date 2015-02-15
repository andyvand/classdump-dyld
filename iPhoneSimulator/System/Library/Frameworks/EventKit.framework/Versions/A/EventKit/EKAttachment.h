/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>
#import <EventKit/EKProtocolAttachment.h>

@class NSString, NSURL, NSNumber, NSDictionary, NSManagedObjectID;

@interface EKAttachment : EKObject <EKProtocolAttachment> {

	NSString* contentType;
	NSString* filenameSuggestedByServer;
	NSNumber* isAutoArchivedNumber;
	NSString* uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (retain,readonly) NSString * contentType; 
@property (retain,readonly) NSString * attachmentIDOnServer; 
@property (retain,readonly) NSURL * urlOnDisk; 
@property (retain,readonly) NSString * filenameSuggestedByServer; 
@property (retain,readonly) NSURL * urlOnServer; 
@property (retain,readonly) NSNumber * isAutoArchivedNumber; 
@property (retain,readonly) NSString * uuid; 
+(Class)frozenClass;
+(id)knownIdentityKeys;
+(id)knownImmutableKeys;
+(id)knownSingleValueKeys;
+(id)filePathOnServerForAttachment:(id)arg1 onEvent:(id)arg2 ;
+(id)attachmentWithAttachment:(id)arg1 ;
+(id)filePathForAttachment:(id)arg1 event:(id)arg2 ;
+(id)uniqueIdentifierForObject:(id)arg1 ;
-(NSString *)uuid;
-(NSString *)contentType;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 ;
-(void)_updateUrlOnDisk:(id)arg1 ;
-(void)_updateUrlOnServer:(id)arg1 ;
-(void)setUrlOnDisk:(NSURL *)arg1 ;
-(id)_fileIsAutoArchivedNumber:(id)arg1 ;
-(id)backingAttachment;
-(char)_fileIsAutoZipped:(id)arg1 ;
-(id)initWithFilepath:(id)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)icon;
-(id)filename;
-(char)isCached;
-(NSString *)filenameSuggestedByServer;
-(NSURL *)urlOnDisk;
-(NSURL *)urlOnServer;
-(NSString *)attachmentIDOnServer;
-(NSNumber *)isAutoArchivedNumber;
-(void)setUrlOnServer:(NSURL *)arg1 ;
-(void)setAttachmentIDOnServer:(NSString *)arg1 ;
@end

