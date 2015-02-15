/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>

@class NSURL;

@interface MCLargeAttachmentFileWrapper : NSFileWrapper {

	unsigned long long _attachmentSize;
	NSURL* _fileToCopy;

}

@property (assign,nonatomic) unsigned long long approximateSize;              //@synthesize attachmentSize=_attachmentSize - In the implementation block
@property (nonatomic,retain) NSURL * fileToCopy;                              //@synthesize fileToCopy=_fileToCopy - In the implementation block
+(id)localAttachmentFilesDirectory;
+(id)fileWrapperWithURL:(id)arg1 andContentID:(id)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setApproximateSize:(unsigned long long)arg1 ;
-(void)setFileToCopy:(NSURL *)arg1 ;
-(id)archivedDataWithPartNumber:(id)arg1 ;
-(char)isALargeAttachment;
-(NSURL *)fileToCopy;
-(id)symbolicLinkDestinationURL;
-(unsigned long long)approximateSize;
@end
