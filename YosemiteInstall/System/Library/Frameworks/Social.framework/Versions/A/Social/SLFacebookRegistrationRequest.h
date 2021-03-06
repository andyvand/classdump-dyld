/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest {

	SLFacebookRegistrationInfo* _registrationInfo;

}
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)_tokenSecret;
-(void)_prepareRequestForValidation;
-(id)_sha1HashForString:(id)arg1 ;
-(id)_urlEncodedString:(id)arg1 ;
-(id)initWithRegistrationInfo:(id)arg1 ;
@end

