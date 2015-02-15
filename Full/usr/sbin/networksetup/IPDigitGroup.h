/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/networksetup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IPDigitGroup : NSObject {

	unsigned short _digits[4];
	unsigned long long _digitCount;
	char _hasHex;

}
-(char)isLegalV6Mask;
-(char)isLegalV4Mask;
-(void)appendDigit:(unsigned short)arg1 ;
-(char)hasHex;
-(unsigned long long)digitCount;
-(unsigned short*)digits;
-(char)isLegalDotGroup;
-(char)isLegalColonGroup;
-(char)isLegalMask:(char)arg1 ;
-(unsigned long long)maskValue;
-(void)flushCharsToData:(id)arg1 ;
-(void)reset;
@end
