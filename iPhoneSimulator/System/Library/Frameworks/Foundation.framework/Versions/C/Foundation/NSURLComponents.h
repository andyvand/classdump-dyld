/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>

@class NSURL, NSString, NSNumber, NSArray;

@interface NSURLComponents : NSObject <NSCopying>

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * string; 
@property (copy) NSString * scheme; 
@property (copy) NSString * user; 
@property (copy) NSString * password; 
@property (copy) NSString * host; 
@property (copy) NSNumber * port; 
@property (copy) NSString * path; 
@property (copy) NSString * query; 
@property (copy) NSString * fragment; 
@property (copy) NSString * percentEncodedUser; 
@property (copy) NSString * percentEncodedPassword; 
@property (copy) NSString * percentEncodedHost; 
@property (copy) NSString * percentEncodedPath; 
@property (copy) NSString * percentEncodedQuery; 
@property (copy) NSString * percentEncodedFragment; 
@property (copy) NSArray * queryItems; 
+(id)componentsWithString:(id)arg1 ;
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(char)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSString *)password;
-(NSString *)fragment;
-(NSString *)user;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(char)arg2 ;
-(NSArray *)queryItems;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)percentEncodedPath;
-(NSString *)percentEncodedHost;
-(NSString *)percentEncodedQuery;
-(NSString *)percentEncodedFragment;
-(NSString *)percentEncodedUser;
-(NSString *)percentEncodedPassword;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setFragment:(NSString *)arg1 ;
-(void)setPercentEncodedUser:(NSString *)arg1 ;
-(void)setPercentEncodedPassword:(NSString *)arg1 ;
-(void)setPercentEncodedHost:(NSString *)arg1 ;
-(void)setPercentEncodedPath:(NSString *)arg1 ;
-(void)setPercentEncodedFragment:(NSString *)arg1 ;
-(id)init;
-(NSString *)path;
-(void)setHost:(NSString *)arg1 ;
-(void)setPercentEncodedQuery:(NSString *)arg1 ;
-(NSURL *)URL;
-(id)initWithString:(id)arg1 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)scheme;
-(NSString *)host;
-(void)setScheme:(NSString *)arg1 ;
-(void)setQueryItems:(NSArray *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(NSNumber *)port;
-(void)setPort:(NSNumber *)arg1 ;
@end

