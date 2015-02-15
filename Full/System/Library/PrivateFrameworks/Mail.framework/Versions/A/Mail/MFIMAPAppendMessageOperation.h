/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFIMAPOperation.h>

@class NSArray;

@interface MFIMAPAppendMessageOperation : MFIMAPOperation {

	unsigned _uid;
	int _internalDateAsInt;
	unsigned _size;
	NSArray* _flags;

}

@property (assign,nonatomic) unsigned uid;                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,copy) NSArray * flags;                      //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) char usesRealUids; 
@property (assign,nonatomic) int internalDateAsInt;              //@synthesize internalDateAsInt=_internalDateAsInt - In the implementation block
@property (assign,nonatomic) unsigned size;                      //@synthesize size=_size - In the implementation block
-(unsigned char)operationType;
-(void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(void)serializeIntoData:(id)arg1 ;
-(char)isSourceOfTemporaryUid:(unsigned)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(unsigned)firstTemporaryUid;
-(unsigned)lastTemporaryUid;
-(void)setFlags:(NSArray *)arg1 ;
-(void)setInternalDateAsInt:(int)arg1 ;
-(int)internalDateAsInt;
-(id)internalDate;
-(id)initWithAppendedUid:(unsigned)arg1 approximateSize:(unsigned)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5 ;
-(id)description;
-(unsigned)size;
-(void)setSize:(unsigned)arg1 ;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(unsigned long long)approximateSize;
-(NSArray *)flags;
@end

