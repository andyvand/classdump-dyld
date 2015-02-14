/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPMessage.h>

@class NSData, MCMessageHeaders;

@interface IMAPMessageWithCache : IMAPMessage {

	NSData* _messageData;
	MCMessageHeaders* _headers;

}
-(id)headers;
-(void)setHeaders:(id)arg1 ;
-(id)messageDataIncludingFromSpace:(char)arg1 newDocumentID:(id)arg2 ;
-(id)headersIfAvailable;
-(char)isMessageContentLocallyAvailable;
-(id)messageData;
-(void)setMessageData:(id)arg1 ;
-(id)bodyDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)headerDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
@end

