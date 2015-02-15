/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <MailCore/MCMessage.h>

@class NSString;

@interface MFTOCMessage : MCMessage {

	NSString* _messageID;
	char _isInIncomingMail;
	NSString* _attachment;
	NSRange _mboxRange;

}

@property (assign,nonatomic) char isInIncomingMail;              //@synthesize isInIncomingMail=_isInIncomingMail - In the implementation block
@property (assign,nonatomic) NSRange mboxRange;                  //@synthesize mboxRange=_mboxRange - In the implementation block
@property (nonatomic,copy) NSString * attachment;                //@synthesize attachment=_attachment - In the implementation block
+(id)messageIDForSender:(id)arg1 subject:(id)arg2 dateAsTimeInterval:(double)arg3 ;
-(unsigned long long)messageSize;
-(void)setMboxRange:(NSRange)arg1 ;
-(NSRange)mboxRange;
-(id)remoteID;
-(id)messageID;
-(void)setIsInIncomingMail:(char)arg1 ;
-(char)isInIncomingMail;
-(unsigned long long)loadCachedInfoFromBytes:(const char*)arg1 length:(unsigned long long)arg2 isDirty:(char*)arg3 usingUniqueStrings:(id)arg4 ;
-(id)cachedData;
-(id)init;
-(id)description;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(NSString *)attachment;
-(void)setAttachment:(NSString *)arg1 ;
-(id)account;
-(id)mailbox;
-(id)initWithMessage:(id)arg1 ;
@end

