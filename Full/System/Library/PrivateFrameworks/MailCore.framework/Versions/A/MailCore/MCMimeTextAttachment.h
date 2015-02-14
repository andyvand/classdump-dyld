/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class MCMimePart;

@interface MCMimeTextAttachment : NSTextAttachment {

	MCMimePart* _mimePart;

}

@property (nonatomic,retain) MCMimePart * mimePart;              //@synthesize mimePart=_mimePart - In the implementation block
+(id)attachmentWithInternalAppleAttachmentData:(id)arg1 mimeBody:(id)arg2 ;
-(void)setMimePart:(MCMimePart *)arg1 ;
-(id)initWithMimePart:(id)arg1 ;
-(id)initWithMimePart:(id)arg1 andFileWrapper:(id)arg2 ;
-(id)fileWrapperForcingDownload;
-(id)fileWrapperForcingDownloadEvenIfExternalBody:(char)arg1 ;
-(void)_forceDownloadOfFileWrapperInBackground:(id)arg1 ;
-(char)hasBeenDownloaded;
-(MCMimePart *)mimePart;
-(char)shouldDownloadAttachmentOnDisplay;
-(char)isPlaceholder;
-(id)initWithFileWrapper:(id)arg1 ;
-(unsigned long long)approximateSize;
@end

