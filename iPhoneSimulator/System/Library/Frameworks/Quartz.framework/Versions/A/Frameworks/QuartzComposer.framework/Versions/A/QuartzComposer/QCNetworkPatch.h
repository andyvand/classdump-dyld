/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCThreadPatch.h>

@interface QCNetworkPatch : QCThreadPatch {

	unsigned _address;
	unsigned short _port;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned)address;
-(unsigned short)port;
-(void)setAddress:(unsigned)arg1 ;
-(void)setPort:(unsigned short)arg1 ;
@end

