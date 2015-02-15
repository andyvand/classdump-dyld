/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, MCMimePart;

@interface MCMimeHeaderScanContext : NSObject {

	const char* _current;
	const char* _end;
	unsigned long long _encodingHint;
	NSMutableData* _dataBuf;
	MCMimePart* _mimePart;

}

@property (assign,nonatomic) const char* current;                          //@synthesize current=_current - In the implementation block
@property (assign,nonatomic) const char* end;                              //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) unsigned long long encodingHint;              //@synthesize encodingHint=_encodingHint - In the implementation block
@property (nonatomic,retain) NSMutableData * dataBuf;                      //@synthesize dataBuf=_dataBuf - In the implementation block
@property (nonatomic,retain) MCMimePart * mimePart;                        //@synthesize mimePart=_mimePart - In the implementation block
-(void)setMimePart:(MCMimePart *)arg1 ;
-(NSMutableData *)dataBuf;
-(void)setDataBuf:(NSMutableData *)arg1 ;
-(MCMimePart *)mimePart;
-(void)setEncodingHint:(unsigned long long)arg1 ;
-(unsigned long long)encodingHint;
-(void)setCurrent:(const char*)arg1 ;
-(const char*)current;
-(id)description;
-(const char*)end;
-(void)setEnd:(const char*)arg1 ;
@end

