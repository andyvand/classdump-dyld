/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPResponse.h>

@interface IMAPNumericResponse : IMAPResponse {

	unsigned long long _number;

}

@property (assign,nonatomic) unsigned long long number;              //@synthesize number=_number - In the implementation block
-(id)description;
-(unsigned long long)number;
-(void)setNumber:(unsigned long long)arg1 ;
-(const char*)_responseName;
@end

