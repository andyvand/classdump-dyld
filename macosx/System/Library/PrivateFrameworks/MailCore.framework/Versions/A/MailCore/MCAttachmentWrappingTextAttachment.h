/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class MCAttachment;

@interface MCAttachmentWrappingTextAttachment : NSTextAttachment {

	MCAttachment* _messageAttachment;

}

@property (nonatomic,readonly) MCAttachment * messageAttachment;              //@synthesize messageAttachment=_messageAttachment - In the implementation block
-(MCAttachment *)messageAttachment;
-(id)initWithAttachment:(id)arg1 ;
-(id)initWithFileWrapper:(id)arg1 ;
@end

