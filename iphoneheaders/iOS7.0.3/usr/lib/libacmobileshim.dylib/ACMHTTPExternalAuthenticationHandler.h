/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMHTTPAuthenticationHandler.h>

@class NSString;

@interface ACMHTTPExternalAuthenticationHandler : ACMHTTPAuthenticationHandler {

	NSString* _password;

}

@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)didReceiveResponse:(id)arg1 ;
-(void)dealloc;
-(BOOL)updatePublicKeyWithResponse:(id)arg1 ;
@end
