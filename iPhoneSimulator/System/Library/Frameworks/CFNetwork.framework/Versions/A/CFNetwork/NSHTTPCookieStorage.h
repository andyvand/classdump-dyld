/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSHTTPCookieStorageInternal, NSArray;

@interface NSHTTPCookieStorage : NSObject {

	NSHTTPCookieStorageInternal* _internal;

}

@property (copy,readonly) NSArray * cookies; 
@property (assign) unsigned long long cookieAcceptPolicy; 
+(id)sharedHTTPCookieStorage;
-(unsigned long long)cookieAcceptPolicy;
-(NSArray *)cookies;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)removeCookiesSinceDate:(id)arg1 ;
-(void)setCookie:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(OpaqueCFHTTPCookieStorageRef)_cookieStorage;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(id)cookiesForURL:(id)arg1 ;
-(void)_saveCookies;
-(void)deleteCookie:(id)arg1 ;
-(id)sortedCookiesUsingDescriptors:(id)arg1 ;
-(void)storeCookies:(id)arg1 forTask:(id)arg2 ;
-(void)getCookiesForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)_setPrivateBrowsingEnabled:(char)arg1 ;
-(id)_initWithCFHTTPCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 ;
-(OpaqueCFHTTPCookieStorageRef)_CFHTTPCookieStorage;
-(id)cookieRequestHeaderFieldsForURL:(id)arg1 ;
-(void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3 ;
@end

