/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufVPN.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufVPN.dylib/libAWDProtobufVPN.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDVPNSession : PBCodable {

	unsigned long long _inBytes;
	unsigned long long _outBytes;
	unsigned long long _timestamp;
	unsigned _disconnectReason;
	unsigned _duration;
	unsigned _ipv4Installed;
	unsigned _ipv6Installed;
	NSString* _protocol;
	unsigned _reassertCount;
	unsigned _systemAuthenMethod;
	unsigned _triggerTrafficClass;
	unsigned _triggerType;
	unsigned _userAuthenMethod;
	BOOL _appVpnUsed;
	BOOL _connectFailed;
	BOOL _proxyInstalled;
	SCD_Struct_AW0 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProtocol; 
@property (nonatomic,retain) NSString * protocol;                       //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerType; 
@property (assign,nonatomic) unsigned triggerType;                      //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerTrafficClass; 
@property (assign,nonatomic) unsigned triggerTrafficClass;              //@synthesize triggerTrafficClass=_triggerTrafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4Installed; 
@property (assign,nonatomic) unsigned ipv4Installed;                    //@synthesize ipv4Installed=_ipv4Installed - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6Installed; 
@property (assign,nonatomic) unsigned ipv6Installed;                    //@synthesize ipv6Installed=_ipv6Installed - In the implementation block
@property (assign,nonatomic) BOOL hasProxyInstalled; 
@property (assign,nonatomic) BOOL proxyInstalled;                       //@synthesize proxyInstalled=_proxyInstalled - In the implementation block
@property (assign,nonatomic) BOOL hasAppVpnUsed; 
@property (assign,nonatomic) BOOL appVpnUsed;                           //@synthesize appVpnUsed=_appVpnUsed - In the implementation block
@property (assign,nonatomic) BOOL hasSystemAuthenMethod; 
@property (assign,nonatomic) unsigned systemAuthenMethod;               //@synthesize systemAuthenMethod=_systemAuthenMethod - In the implementation block
@property (assign,nonatomic) BOOL hasUserAuthenMethod; 
@property (assign,nonatomic) unsigned userAuthenMethod;                 //@synthesize userAuthenMethod=_userAuthenMethod - In the implementation block
@property (assign,nonatomic) BOOL hasDisconnectReason; 
@property (assign,nonatomic) unsigned disconnectReason;                 //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (assign,nonatomic) BOOL hasConnectFailed; 
@property (assign,nonatomic) BOOL connectFailed;                        //@synthesize connectFailed=_connectFailed - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasReassertCount; 
@property (assign,nonatomic) unsigned reassertCount;                    //@synthesize reassertCount=_reassertCount - In the implementation block
@property (assign,nonatomic) BOOL hasInBytes; 
@property (assign,nonatomic) unsigned long long inBytes;                //@synthesize inBytes=_inBytes - In the implementation block
@property (assign,nonatomic) BOOL hasOutBytes; 
@property (assign,nonatomic) unsigned long long outBytes;               //@synthesize outBytes=_outBytes - In the implementation block
-(void)setProtocol:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)protocol;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setTriggerType:(unsigned)arg1 ;
-(unsigned)triggerType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasProtocol;
-(BOOL)hasTriggerType;
-(BOOL)hasTriggerTrafficClass;
-(unsigned)triggerTrafficClass;
-(void)setTriggerTrafficClass:(unsigned)arg1 ;
-(BOOL)hasIpv4Installed;
-(unsigned)ipv4Installed;
-(void)setIpv4Installed:(unsigned)arg1 ;
-(BOOL)hasIpv6Installed;
-(unsigned)ipv6Installed;
-(void)setIpv6Installed:(unsigned)arg1 ;
-(BOOL)hasProxyInstalled;
-(BOOL)proxyInstalled;
-(void)setProxyInstalled:(BOOL)arg1 ;
-(BOOL)hasAppVpnUsed;
-(BOOL)appVpnUsed;
-(void)setAppVpnUsed:(BOOL)arg1 ;
-(BOOL)hasSystemAuthenMethod;
-(unsigned)systemAuthenMethod;
-(void)setSystemAuthenMethod:(unsigned)arg1 ;
-(BOOL)hasUserAuthenMethod;
-(unsigned)userAuthenMethod;
-(void)setUserAuthenMethod:(unsigned)arg1 ;
-(BOOL)hasDisconnectReason;
-(unsigned)disconnectReason;
-(void)setDisconnectReason:(unsigned)arg1 ;
-(BOOL)hasConnectFailed;
-(BOOL)connectFailed;
-(void)setConnectFailed:(BOOL)arg1 ;
-(BOOL)hasReassertCount;
-(unsigned)reassertCount;
-(void)setReassertCount:(unsigned)arg1 ;
-(BOOL)hasInBytes;
-(unsigned long long)inBytes;
-(void)setInBytes:(unsigned long long)arg1 ;
-(BOOL)hasOutBytes;
-(unsigned long long)outBytes;
-(void)setOutBytes:(unsigned long long)arg1 ;
-(void)setHasTriggerType:(BOOL)arg1 ;
-(void)setHasTriggerTrafficClass:(BOOL)arg1 ;
-(void)setHasIpv4Installed:(BOOL)arg1 ;
-(void)setHasIpv6Installed:(BOOL)arg1 ;
-(void)setHasProxyInstalled:(BOOL)arg1 ;
-(void)setHasAppVpnUsed:(BOOL)arg1 ;
-(void)setHasSystemAuthenMethod:(BOOL)arg1 ;
-(void)setHasUserAuthenMethod:(BOOL)arg1 ;
-(void)setHasDisconnectReason:(BOOL)arg1 ;
-(void)setHasConnectFailed:(BOOL)arg1 ;
-(void)setHasReassertCount:(BOOL)arg1 ;
-(void)setHasInBytes:(BOOL)arg1 ;
-(void)setHasOutBytes:(BOOL)arg1 ;
@end
