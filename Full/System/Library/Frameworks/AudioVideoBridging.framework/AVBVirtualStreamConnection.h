/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AVBVirtualStreamConnection : NSObject {

	unsigned short _uniqueID;
	unsigned long long _entityID;

}

@property (assign,nonatomic) unsigned long long entityID;              //@synthesize entityID=_entityID - In the implementation block
@property (assign,nonatomic) unsigned short uniqueID;                  //@synthesize uniqueID=_uniqueID - In the implementation block
-(void)setEntityID:(unsigned long long)arg1 ;
-(void)setUniqueID:(unsigned short)arg1 ;
-(unsigned short)uniqueID;
-(unsigned long long)entityID;
@end
