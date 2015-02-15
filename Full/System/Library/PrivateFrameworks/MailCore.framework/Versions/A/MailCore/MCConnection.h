/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <MailCore/MCConnectionLogging.h>

@protocol MCAccount;
@class NSData, MCSaslClient, MCSocket, NSFileHandle, NSString;

@interface MCConnection : NSObject <MCConnectionLogging> {

	id _accountLock;
	id<MCAccount> _account;
	char _isBackground;
	void* _buffer;
	long long _bufferRemainingBytes;
	unsigned long long _bufferStart;
	unsigned long long _bufferLength;
	NSData* _logHeader;
	MCSaslClient* _saslClient;
	MCSocket* _socket;
	double _connectTimeout;
	double _readWriteTimeout;
	NSFileHandle* _logFile;

}

@property (nonatomic,retain) MCSocket * socket;                            //@synthesize socket=_socket - In the implementation block
@property (assign,nonatomic) double connectTimeout;                        //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign,nonatomic) double readWriteTimeout;                      //@synthesize readWriteTimeout=_readWriteTimeout - In the implementation block
@property (__weak) id<MCAccount> account; 
@property (assign) char isBackground;                                      //@synthesize isBackground=_isBackground - In the implementation block
@property (nonatomic,readonly) char isExpensive; 
@property (assign,nonatomic) void* buffer;                                 //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) long long bufferRemainingBytes;               //@synthesize bufferRemainingBytes=_bufferRemainingBytes - In the implementation block
@property (assign,nonatomic) unsigned long long bufferStart;               //@synthesize bufferStart=_bufferStart - In the implementation block
@property (assign,nonatomic) unsigned long long bufferLength;              //@synthesize bufferLength=_bufferLength - In the implementation block
@property (nonatomic,retain) NSData * logHeader;                           //@synthesize logHeader=_logHeader - In the implementation block
@property (nonatomic,retain) MCSaslClient * saslClient;                    //@synthesize saslClient=_saslClient - In the implementation block
@property (retain) NSFileHandle * logFile;                                 //@synthesize logFile=_logFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)logAllSocketActivity;
+(void)setLogAllSocketActivity:(char)arg1 ;
+(char)_defaultsToBackground;
+(id)loggingDelegate;
+(void)setLoggingDelegate:(id)arg1 ;
+(id)logActivityOnPorts;
+(void)setLogActivityOnPorts:(id)arg1 ;
+(id)logActivityOnHosts;
+(void)setLogActivityOnHosts:(id)arg1 ;
+(char)logActivityToFile;
+(void)setLogActivityToFile:(char)arg1 ;
+(char)shouldLogActivityForHost:(id)arg1 port:(long long)arg2 ;
+(void)initialize;
-(void)disconnect;
-(double)connectTimeout;
-(void)discoverAccountSettings;
-(void)_loggingDidChange:(id)arg1 ;
-(MCSaslClient *)saslClient;
-(void)_logToFileDidChange:(id)arg1 ;
-(unsigned)cipherKeyLength;
-(char)isExpensive;
-(id)_newConnectionAttemptsConfigureDynamically:(char)arg1 ;
-(void)_resetLogHeaderWithPort:(long long)arg1 ;
-(NSData *)logHeader;
-(void)_logEventWithPrefix:(const char*)arg1 bytes:(const void*)arg2 length:(unsigned long long)arg3 maskStartIndex:(unsigned long long)arg4 maskLength:(unsigned long long)arg5 ;
-(void)_setupSocketWithSecurityLayer:(long long)arg1 ;
-(char)isBackground;
-(char)_authenticateWithAuthenticationMechanisms:(id)arg1 allowPlainText:(char)arg2 ;
-(char)_shouldKeepTryingAfterAuthenticationFailure:(id*)arg1 ;
-(void)setSaslClient:(MCSaslClient *)arg1 ;
-(long long)bufferRemainingBytes;
-(char)_fillBuffer:(id*)arg1 ;
-(unsigned long long)bufferStart;
-(void)setBufferRemainingBytes:(long long)arg1 ;
-(void)setBufferStart:(unsigned long long)arg1 ;
-(long long)_readBytesFromSocketIntoBuffer:(void*)arg1 amount:(unsigned long long)arg2 requireAllBytes:(char)arg3 error:(id*)arg4 ;
-(void)setBufferLength:(unsigned long long)arg1 ;
-(void)_setupReadErrorForMonitor;
-(void)_setupWriteErrorForMonitor;
-(char)_isSSLError:(id)arg1 ;
-(void)_setupSSLErrorForMonitorWithHostname:(id)arg1 ;
-(void)logData:(id)arg1 ;
-(NSFileHandle *)logFile;
-(void)logString:(id)arg1 ;
-(void)logBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)logData:(id)arg1 range:(NSRange)arg2 ;
-(void)setLogFile:(NSFileHandle *)arg1 ;
-(void)setLogHeader:(NSData *)arg1 ;
-(char)_hasBytesAvailable;
-(char)_readBytesIntoData:(id)arg1 desiredLength:(long long)arg2 error:(id*)arg3 ;
-(char)connectDiscoveringBestSettings:(char)arg1 ;
-(char)authenticate;
-(void)quit;
-(id)authenticationMechanisms;
-(void)setConnectTimeout:(double)arg1 ;
-(void)setReadWriteTimeout:(double)arg1 ;
-(void)_setupConnectionErrorForMonitorWithPort:(long long)arg1 usingSSL:(char)arg2 ;
-(void)setIsBackground:(char)arg1 ;
-(char)_startTLS;
-(char)_writeData:(id)arg1 dontLogBytesInRange:(NSRange)arg2 error:(id*)arg3 ;
-(char)_readLineIntoData:(id)arg1 error:(id*)arg2 ;
-(void)_setupConnection;
-(char)_completeConnectionWithResult:(char)arg1 ;
-(char)_authenticateWithSaslClient:(id)arg1 ;
-(id)_authenticateWithNonPlainTextSchemes;
-(id)_authenticateWithPlainTextSchemes;
-(char)_supportsPlainTextSchemes;
-(void*)buffer;
-(unsigned long long)bufferLength;
-(void)setSocket:(MCSocket *)arg1 ;
-(double)readWriteTimeout;
-(MCSocket *)socket;
-(void)flushLog;
-(void)setBuffer:(void*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(char)isValid;
-(id<MCAccount>)account;
-(void)setAccount:(id<MCAccount>)arg1 ;
@end

