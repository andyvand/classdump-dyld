/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSCopying.h>

@class NSURL, NSDictionary;

@interface SiteMetadataRequest : NSObject <NSCopying> {

	int _type;
	NSURL* _url;
	NSDictionary* _extraInfo;

}

@property (nonatomic,readonly) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraInfo;              //@synthesize extraInfo=_extraInfo - In the implementation block
+(id)requestWithURL:(id)arg1 type:(int)arg2 ;
-(id)initWithURL:(id)arg1 type:(int)arg2 extraInfo:(id)arg3 ;
-(id)initWithURL:(id)arg1 type:(int)arg2 ;
-(NSDictionary *)extraInfo;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
@end

