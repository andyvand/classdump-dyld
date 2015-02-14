/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPCompoundDownload.h>

@protocol IMAPMessage;
@interface IMAPAttachmentsDownload : IMAPCompoundDownload {

	id<IMAPMessage> _message;

}

@property (retain) id<IMAPMessage> message;              //@synthesize message=_message - In the implementation block
-(id<IMAPMessage>)message;
-(void)setMessage:(id<IMAPMessage>)arg1 ;
-(id)createCopy;
-(id)initWithIMAPMessage:(id)arg1 ;
-(void)saveCompletedDownloads;
@end

