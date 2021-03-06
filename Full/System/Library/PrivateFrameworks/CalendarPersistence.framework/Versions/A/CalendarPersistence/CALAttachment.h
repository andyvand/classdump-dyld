/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALPropertyValue.h>

@class NSManagedObjectID, NSURL;

@interface CALAttachment : CALPropertyValue {

	NSManagedObjectID* _managedObjectID;
	NSURL* _cachedURL;

}
+(id)attachmentWithURL:(id)arg1 ;
+(id)attachmentFromManagedObject:(id)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)contentType;
-(void)dealloc;
-(id)description;
-(id)url;
-(id)icon;
-(id)data;
-(id)filename;
-(void)setFilename:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)previewItemURL;
-(void)setData:(id)arg1 ;
-(id)managedObjectID;
-(void)setManagedObjectID:(id)arg1 ;
-(id)filenameParameter;
-(id)cachedURL;
-(void)setCachedURL:(id)arg1 ;
-(id)attachmentId;
-(void)setAttachmentId:(id)arg1 ;
-(char)isAutoArchived;
-(void)setAutoArchived:(char)arg1 ;
@end

