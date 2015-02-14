/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFIMAPOperation : NSObject {

	char _usesRealUids;
	NSString* _mailboxName;

}

@property (nonatomic,copy,readonly) NSString * mailboxName;              //@synthesize mailboxName=_mailboxName - In the implementation block
@property (nonatomic,readonly) unsigned char operationType; 
@property (assign,nonatomic) char usesRealUids;                          //@synthesize usesRealUids=_usesRealUids - In the implementation block
+(id)newOperationWithSerializedData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(unsigned char)operationType;
-(NSString *)mailboxName;
-(id)_initWithMailboxName:(id)arg1 ;
-(void)setUsesRealUids:(char)arg1 ;
-(void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(unsigned char)_magic;
-(char)usesRealUids;
-(void)serializeIntoData:(id)arg1 ;
-(char)isSourceOfTemporaryUid:(unsigned)arg1 ;
-(char)actsOnTemporaryUid:(unsigned)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(unsigned)firstTemporaryUid;
-(unsigned)lastTemporaryUid;
-(id)init;
-(unsigned long long)approximateSize;
@end

