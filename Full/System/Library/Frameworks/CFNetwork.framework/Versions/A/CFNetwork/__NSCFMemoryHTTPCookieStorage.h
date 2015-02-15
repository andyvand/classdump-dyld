/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSHTTPCookieStorage.h>

@interface __NSCFMemoryHTTPCookieStorage : NSHTTPCookieStorage
+(void)initialize;
-(unsigned long long)cookieAcceptPolicy;
-(id)cookies;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)setCookie:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(id)cookiesForURL:(id)arg1 ;
-(void)deleteCookie:(id)arg1 ;
-(id)sortedCookiesUsingDescriptors:(id)arg1 ;
@end
