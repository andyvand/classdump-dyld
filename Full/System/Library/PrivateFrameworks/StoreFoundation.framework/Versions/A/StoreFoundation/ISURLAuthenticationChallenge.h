/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISAuthenticationChallenge.h>

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {

	NSURLAuthenticationChallenge* _challenge;

}
-(id)password;
-(id)user;
-(char)hasPassword;
-(id)sender;
-(void)dealloc;
-(void)cancelAuthentication;
-(long long)failureCount;
-(void)useCredential:(id)arg1 ;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
@end

