/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libIASAuthReboot.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libIASAuthReboot.dylib/libIASAuthReboot.dylib-Structs.h>
@class NSString;

@interface KeychainMasterHandler : NSObject {

	OpaqueSecKeychainRefRef _keychainRef;
	long long _moduleHandle;
	int _errorStatus;
	NSString* _errorString;

}
-(id)errorString;
-(char)_checkStatus:(int)arg1 context:(id)arg2 ;
-(id)initWithKeychain:(OpaqueSecKeychainRefRef)arg1 ;
-(int)errorStatus;
-(id)extractMasterKey;
-(char)prepareKeychainWithPasswordCredential:(id)arg1 ;
-(char)prepareKeychainWithMasterKeyCredential:(id)arg1 ;
-(void)dealloc;
@end

