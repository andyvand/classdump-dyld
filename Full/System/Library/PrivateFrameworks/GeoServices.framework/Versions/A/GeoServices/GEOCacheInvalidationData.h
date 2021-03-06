/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface GEOCacheInvalidationData : NSObject {

	double _timestamp;
	double _ttl;
	unsigned _version;
	NSArray* _versionDomains;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double ttl;                            //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
-(double)ttl;
-(NSArray *)versionDomains;
-(id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned)arg3 domains:(id)arg4 ;
-(void)dealloc;
-(double)timestamp;
-(unsigned)version;
@end

