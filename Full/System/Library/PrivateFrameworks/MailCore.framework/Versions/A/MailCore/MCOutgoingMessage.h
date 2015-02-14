/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCMessage.h>

@class _MCOutgoingMessageBody, MCMutableMessageHeaders, NSString, NSData;

@interface MCOutgoingMessage : MCMessage {

	_MCOutgoingMessageBody* _messageBody;
	unsigned long long _localAttachmentsSize;
	MCMutableMessageHeaders* _mutableHeaders;
	NSString* _existingRemoteID;
	NSString* _remoteID;
	NSData* _rawData;

}

@property (nonatomic,retain) MCMutableMessageHeaders * mutableHeaders;              //@synthesize mutableHeaders=_mutableHeaders - In the implementation block
@property (nonatomic,retain) NSString * existingRemoteID;                           //@synthesize existingRemoteID=_existingRemoteID - In the implementation block
@property (nonatomic,copy) NSString * remoteID;                                     //@synthesize remoteID=_remoteID - In the implementation block
@property (nonatomic,retain) NSData * rawData;                                      //@synthesize rawData=_rawData - In the implementation block
-(NSData *)rawData;
-(void)setRawData:(NSData *)arg1 ;
-(id)headers;
-(void)setMutableHeaders:(MCMutableMessageHeaders *)arg1 ;
-(void)_setMessageBody:(id)arg1 ;
-(MCMutableMessageHeaders *)mutableHeaders;
-(void)setLocalAttachmentsSize:(unsigned long long)arg1 ;
-(void)setExistingRemoteID:(NSString *)arg1 ;
-(unsigned long long)messageSize;
-(id)bodyData;
-(id)messageDataIncludingFromSpace:(char)arg1 newDocumentID:(id)arg2 ;
-(id)headersIfAvailable;
-(id)messageDataIncludingFromSpace:(char)arg1 ;
-(NSString *)remoteID;
-(NSString *)existingRemoteID;
-(void)setRemoteID:(NSString *)arg1 ;
-(id)messageBodyIfAvailable;
-(id)bodyDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)init;
-(void)dealloc;
-(id)dataSource;
-(id)messageBody;
@end

