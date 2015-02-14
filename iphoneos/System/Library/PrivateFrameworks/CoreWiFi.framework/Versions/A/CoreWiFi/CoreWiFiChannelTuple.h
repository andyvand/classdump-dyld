/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CoreWiFiChannelTuple : NSObject {

	unsigned long long firstChannel;
	unsigned long long numChannels;
	unsigned long long maxTxPower;

}

@property (nonatomic,readonly) unsigned long long firstChannel; 
@property (nonatomic,readonly) unsigned long long numChannels; 
@property (nonatomic,readonly) unsigned long long maxTxPower; 
-(id)initWithTuple:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(unsigned long long)firstChannel;
-(unsigned long long)numChannels;
-(unsigned long long)maxTxPower;
-(id)description;
@end

