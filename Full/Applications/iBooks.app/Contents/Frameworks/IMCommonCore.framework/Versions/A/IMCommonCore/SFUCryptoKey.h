/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface SFUCryptoKey : NSObject {

	unsigned mIterationCount;
	char* mKey;
	unsigned long long mKeyLength;
	NSData* mSaltData;
	NSString* _passphrase;

}

@property (nonatomic,readonly) NSString * passphrase;              //@synthesize passphrase=_passphrase - In the implementation block
-(int)keyType;
-(unsigned)iterationCount;
-(id)saltData;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 saltData:(id)arg4 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 saltData:(id)arg3 ;
-(id)initAes128Key:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(unsigned long long)keyLength;
-(const char*)keyData;
-(NSString *)passphrase;
-(void)dealloc;
@end
