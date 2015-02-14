/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CoreWiFiRegulatoryTuple : NSObject {

	unsigned long long extensionIdentifier;
	unsigned long long regulatoryClass;
	unsigned long long coverageClass;

}

@property (nonatomic,readonly) unsigned long long extensionIdentifier; 
@property (nonatomic,readonly) unsigned long long regulatoryClass; 
@property (nonatomic,readonly) unsigned long long coverageClass; 
-(id)initWithTuple:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(unsigned long long)extensionIdentifier;
-(unsigned long long)regulatoryClass;
-(unsigned long long)coverageClass;
-(id)description;
@end

