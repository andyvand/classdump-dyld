/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSSecureCoding.h>
#import <CFNetwork/NSCopying.h>

@class NSCachedURLResponseInternal, NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSCachedURLResponseInternal* _internal;

}

@property (copy,readonly) NSURLResponse * response; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (readonly) unsigned long long storagePolicy; 
+(void)initialize;
+(char)supportsSecureCoding;
-(id)_cacheTime;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(CFCachedURLResponse*)_CFCachedURLResponse;
-(id)_initWithCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(id)initWithResponse:(id)arg1 data:(id)arg2 ;
-(unsigned long long)storagePolicy;
-(id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(id)_private_initWithCoder:(id)arg1 ;
-(void)_private_encodeWithCoder:(id)arg1 ;
-(id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(id)dataArray;
-(void)_deallocInternalCFCachedURLResponse;
-(NSURLResponse *)response;
@end

