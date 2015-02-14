/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface _GEORegionalResourceDownload : NSObject {

	NSString* _name;
	long long _type;
	NSURL* _url;
	NSString* _destinationPath;
	NSString* _expectedChecksum;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * destinationPath;               //@synthesize destinationPath=_destinationPath - In the implementation block
@property (nonatomic,copy) NSString * expectedChecksum;              //@synthesize expectedChecksum=_expectedChecksum - In the implementation block
-(void)setDestinationPath:(NSString *)arg1 ;
-(NSString *)destinationPath;
-(void)setExpectedChecksum:(NSString *)arg1 ;
-(NSString *)expectedChecksum;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)url;
-(NSString *)name;
-(long long)type;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setType:(long long)arg1 ;
@end

