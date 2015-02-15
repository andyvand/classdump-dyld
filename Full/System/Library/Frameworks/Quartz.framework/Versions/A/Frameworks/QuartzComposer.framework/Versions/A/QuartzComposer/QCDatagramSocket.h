/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@interface QCDatagramSocket : NSObject {

	unsigned _address;
	unsigned short _port;
	int _socketFD;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned long long)maxStringLength;
+(unsigned long long)maxDataLength;
-(void)finalize;
-(void)dealloc;
-(id)initWithAddress:(unsigned)arg1 port:(unsigned short)arg2 ;
-(id)initWithPort:(unsigned short)arg1 ;
-(unsigned)address;
-(unsigned short)port;
@end

