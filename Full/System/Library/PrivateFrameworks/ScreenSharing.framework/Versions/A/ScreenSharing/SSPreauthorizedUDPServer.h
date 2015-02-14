/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface SSPreauthorizedUDPServer : NSObject {

	int mConnectedUDPSocket;
	unsigned long long mMaximumBytesPerSecond;
	long long mEncryptionLevel;
	NSData* mEncryptionKey;
	NSString* mUsername;
	NSString* mRemoteIPPort;
	void* mIPCRef;

}

@property (assign) int connectedUDPSocket; 
@property (assign) unsigned long long maximumBytesPerSecond; 
@property (assign) long long encryptionLevel; 
@property (copy) NSData * encryptionKey; 
@property (copy) NSString * username; 
@property (copy) NSString * remoteIPPort; 
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setRemoteIPPort:(NSString *)arg1 ;
-(NSData *)encryptionKey;
-(int)connectedUDPSocket;
-(void)setConnectedUDPSocket:(int)arg1 ;
-(unsigned long long)maximumBytesPerSecond;
-(void)setMaximumBytesPerSecond:(unsigned long long)arg1 ;
-(long long)encryptionLevel;
-(void)setEncryptionLevel:(long long)arg1 ;
-(NSString *)remoteIPPort;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setEncryptionKey:(NSData *)arg1 ;
@end

