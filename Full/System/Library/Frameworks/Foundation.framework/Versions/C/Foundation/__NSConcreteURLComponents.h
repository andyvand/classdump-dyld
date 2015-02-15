/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLComponents.h>
#import <Foundation/NSCopying.h>

@class NSString, NSNumber;

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {

	int _lock;
	NSString* _urlString;
	URIParseInfo _parseInfo;
	unsigned _schemeComponentValid : 1;
	unsigned _userComponentValid : 1;
	unsigned _passwordComponentValid : 1;
	unsigned _hostComponentValid : 1;
	unsigned _portComponentValid : 1;
	unsigned _pathComponentValid : 1;
	unsigned _queryComponentValid : 1;
	unsigned _fragmentComponentValid : 1;
	NSString* _schemeComponent;
	NSString* _userComponent;
	NSString* _passwordComponent;
	NSString* _hostComponent;
	NSNumber* _portComponent;
	NSString* _pathComponent;
	NSString* _queryComponent;
	NSString* _fragmentComponent;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)password;
-(id)fragment;
-(id)user;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(char)arg2 ;
-(id)queryItems;
-(id)query;
-(void)setQuery:(id)arg1 ;
-(id)percentEncodedPath;
-(id)percentEncodedHost;
-(id)percentEncodedQuery;
-(id)percentEncodedFragment;
-(id)percentEncodedUser;
-(id)percentEncodedPassword;
-(void)freeIvars;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setFragment:(id)arg1 ;
-(void)setPercentEncodedUser:(id)arg1 ;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(void)setPercentEncodedHost:(id)arg1 ;
-(void)setPercentEncodedPath:(id)arg1 ;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)path;
-(void)setHost:(id)arg1 ;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(id)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithString:(id)arg1 ;
-(id)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)scheme;
-(id)host;
-(void)setScheme:(id)arg1 ;
-(void)setQueryItems:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setUser:(id)arg1 ;
-(id)port;
-(void)setPort:(id)arg1 ;
@end

