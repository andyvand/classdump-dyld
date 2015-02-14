/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoConference/VideoConference-Structs.h>
@class NSLock, NSString;

@interface SIPManager : NSObject {

	unsigned short _localSIPPort[8];
	unsigned long long _localIPAddress[8];
	unsigned short _extSIPPort[8];
	unsigned long long _extIPAddress[8];
	int _SIPInfoCount;
	tagHANDLE* _hSIP;
	int _transportProtocol;
	NSLock* _lock;
	NSString* _remoteUserAgent;
	NSString* _remoteDisplayName;

}
+(id)SIPManager;
-(id)initWithTransportProtocol:(int)arg1 ;
-(id)getRemoteUserAgent;
-(id)getConnectionDataForCallID:(int)arg1 shouldFindExternalIP:(char)arg2 pRelayIntIPPort:(void*)arg3 localUserName:(id)arg4 tryPreservedPort:(tagInternalExternalMapping*)arg5 ;
-(id)getIPInfoWithRemoteIPInfo:(void*)arg1 remoteIPInfoSize:(int)arg2 shouldFindExternalIP:(char)arg3 ;
-(unsigned short)localSIPPortAtIndex:(int)arg1 ;
-(unsigned long long)localIPAddressAtIndex:(int)arg1 ;
-(unsigned short)externalSIPPortAtIndex:(int)arg1 ;
-(unsigned long long)externalIPAddressAtIndex:(int)arg1 ;
-(int)createHandle;
-(int)listen:(char)arg1 ;
-(int)connectUsingData:(id)arg1 fromName:(id)arg2 to:(id)arg3 SDPInfo:(SDPInfo*)arg4 callID:(int)arg5 rtpHandles:(tagRTPHANDLES*)arg6 forConfIndex:(int)arg7 ;
-(int)connect:(id)arg1 to:(id)arg2 ip:(id)arg3 SIPPort:(unsigned short)arg4 SDPInfo:(SDPInfo*)arg5 callID:(int)arg6 rtpInfo:(tagRTPHANDLES*)arg7 ;
-(int)hangup:(int)arg1 ;
-(int)cancelConnect:(int)arg1 ;
-(int)connectIncoming:(char*)arg1 ;
-(int)sendMessage:(id)arg1 toCallID:(int)arg2 ;
-(int)sendMessage:(id)arg1 toAllExceptCallID:(int)arg2 ;
-(int)closeCall:(int)arg1 ;
-(id)remoteUserAgentForCallID:(int)arg1 ;
-(void)getRemoteInfo:(int)arg1 ;
-(id)getRemoteDisplayName;
-(char)remoteUserAgentIsWindowsClient;
-(char)ViceroyUserAgent:(id)arg1 isGreaterThanVersion:(id)arg2 ;
-(id)localUserAgent;
-(char)setIsFocus:(char)arg1 ;
-(char)setSIPPing:(char)arg1 forCallID:(int)arg2 ;
-(char)isCurrentFocus;
-(char)isRemoteFocus:(int)arg1 ;
-(void)updateInterfaceList;
-(id)getConnectionDataForCallID:(int)arg1 shouldFindExternalIP:(char)arg2 pRelayIntIPPort:(void*)arg3 localUserName:(id)arg4 ;
-(void)discardRelayBinding:(int)arg1 ;
-(char)generateCallID:(int*)arg1 ;
-(int)getConnectionResultAFOnly:(int)arg1 addrFamily:(int*)arg2 ;
-(int)getConnectionResultSrcIPPort:(int)arg1 pSrcIPPort:(tagIPPORT*)arg2 ;
-(void)discardPreseverdPortBindingForCallID:(int)arg1 ;
-(int)startConnectionCheck:(int)arg1 withConnectionData:(id)arg2 remoteRelayID:(id)arg3 ;
-(int)connectWithCallID:(int)arg1 fromName:(id)arg2 to:(id)arg3 SDPInfo:(SDPInfo*)arg4 rtpHandles:(tagRTPHANDLES*)arg5 forConfIndex:(int)arg6 ;
-(int)getCallIDForConnectionData:(id)arg1 ;
-(id)getIPInfoWithRemoteIPInfo:(void*)arg1 remoteIPInfoSize:(int)arg2 ;
-(void)getRelayExtIPPort:(int)arg1 pRelayExt:(void*)arg2 ;
-(char)isRelayConference:(int)arg1 ;
-(void)disableSIPMessage;
-(void)enableSIPMessage;
-(void)activeDialogReady;
-(id)init;
-(void)dealloc;
@end

