/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>
#import <CalendarPersistence/CoreDAVTaskGroupDelegate.h>

@class NSString, CALEntity, NSMutableSet, NSMutableDictionary;

@interface CalDAVUploadDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVTaskGroupDelegate> {

	NSString* _attachmentName;
	NSString* _dropBoxPath;
	CALEntity* _masterEntity;
	NSMutableSet* _attendeePrincipalURLs;
	NSMutableDictionary* _attachments;
	NSMutableDictionary* _contentTypes;

}

@property (retain) NSString * dropBoxPath;                            //@synthesize dropBoxPath=_dropBoxPath - In the implementation block
@property (retain) NSString * attachmentName;                         //@synthesize attachmentName=_attachmentName - In the implementation block
@property (retain) CALEntity * masterEntity;                          //@synthesize masterEntity=_masterEntity - In the implementation block
@property (retain) NSMutableSet * attendeePrincipalURLs;              //@synthesize attendeePrincipalURLs=_attendeePrincipalURLs - In the implementation block
@property (retain) NSMutableDictionary * attachments;                 //@synthesize attachments=_attachments - In the implementation block
@property (retain) NSMutableDictionary * contentTypes;                //@synthesize contentTypes=_contentTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSMutableDictionary *)attachments;
-(void)setAttachments:(NSMutableDictionary *)arg1 ;
-(NSString *)attachmentName;
-(CALEntity *)masterEntity;
-(void)abortOperation;
-(void)performOperation;
-(id)readableDescription;
-(NSString *)dropBoxPath;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setAttachmentName:(NSString *)arg1 ;
-(void)setDropBoxPath:(NSString *)arg1 ;
-(id)initWithChangeRequest:(id)arg1 attachmentName:(id)arg2 entity:(id)arg3 fromSource:(id)arg4 ;
-(void)setMasterEntity:(CALEntity *)arg1 ;
-(void)setAttendeePrincipalURLs:(NSMutableSet *)arg1 ;
-(void)setContentTypes:(NSMutableDictionary *)arg1 ;
-(id)_managedItem;
-(NSMutableDictionary *)contentTypes;
-(id)_buildCustomErrorFromError:(id)arg1 withStatusCode:(int)arg2 dataLength:(id)arg3 ;
-(void)_cacheEtag:(id)arg1 filename:(id)arg2 ;
-(id)_serverURLForPath:(id)arg1 ;
-(NSMutableSet *)attendeePrincipalURLs;
-(id)_fileNamesToUpload;
-(void)_addDetailsForAttachmentWithFilename:(id)arg1 ;
-(void)_updateAttachments;
@end

