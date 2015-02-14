/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSString, NSDictionary, NSMutableDictionary, NSData;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {

	int _state;
	NSURL* _resourceURL;
	NSURL* _postURLWithQuery;
	NSString* _previousETag;
	NSString* _previousScheduleTag;
	NSDictionary* _attachments;
	NSDictionary* _contentTypes;
	NSMutableDictionary* _filenamesToServerLocation;
	char _hadPreconditionFailure;
	NSData* _updatedResourcePayload;
	NSString* _updatedETag;
	NSString* _updatedScheduleTag;
	NSDictionary* _postFailureSizes;

}

@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                      //@synthesize previousETag=_previousETag - In the implementation block
@property (nonatomic,retain) NSString * previousScheduleTag;                               //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (nonatomic,retain) NSData * updatedResourcePayload;                              //@synthesize updatedResourcePayload=_updatedResourcePayload - In the implementation block
@property (assign,nonatomic) char hadPreconditionFailure;                                  //@synthesize hadPreconditionFailure=_hadPreconditionFailure - In the implementation block
@property (nonatomic,retain) NSString * updatedETag;                                       //@synthesize updatedETag=_updatedETag - In the implementation block
@property (nonatomic,retain) NSString * updatedScheduleTag;                                //@synthesize updatedScheduleTag=_updatedScheduleTag - In the implementation block
@property (nonatomic,retain) NSDictionary * postFailureSizes;                              //@synthesize postFailureSizes=_postFailureSizes - In the implementation block
@property (nonatomic,retain) NSURL * resourceURL;                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,retain) NSDictionary * attachments;                                   //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSDictionary * contentTypes;                                  //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filenamesToServerLocation;              //@synthesize filenamesToServerLocation=_filenamesToServerLocation - In the implementation block
-(NSURL *)resourceURL;
-(NSString *)previousScheduleTag;
-(void)_sendAttachments;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setUpdatedResourcePayload:(NSData *)arg1 ;
-(void)setUpdatedScheduleTag:(NSString *)arg1 ;
-(void)setHadPreconditionFailure:(char)arg1 ;
-(void)setPostFailureSizes:(NSDictionary *)arg1 ;
-(char)_postedLastAttachment;
-(void)_fetchUpdatedContent;
-(id)urlWithQuery;
-(void)_handlePostResponse:(id)arg1 ;
-(void)setFilenamesToServerLocation:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(int)state;
-(NSDictionary *)attachments;
-(void)setAttachments:(NSDictionary *)arg1 ;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)startTaskGroup;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(void)setContentTypes:(NSDictionary *)arg1 ;
-(NSDictionary *)contentTypes;
-(id)initWithAccountInfoProvider:(id)arg1 resourceURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 taskManager:(id)arg5 ;
-(NSDictionary *)postFailureSizes;
-(NSData *)updatedResourcePayload;
-(NSString *)updatedETag;
-(NSString *)updatedScheduleTag;
-(NSMutableDictionary *)filenamesToServerLocation;
-(char)hadPreconditionFailure;
-(void)setUpdatedETag:(NSString *)arg1 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(NSString *)previousETag;
@end

